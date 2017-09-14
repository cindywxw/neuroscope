/***************************************************************************
                          tracesprovider.h  -  description
                             -------------------
    begin                : Mon Mar 1 2004
    copyright            : (C) 2004 by Lynn Hazan
    email                : lynn.hazan.myrealbox.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef TRACESPROVIDER_H
#define TRACESPROVIDER_H

//include files for the application
#include <dataprovider.h>
#include <array.h>
#include <types.h>

// Cindy
extern "C" {
// #include <mtm_impl.h>
#include <tfr.h> 
}

// #include "Gist.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <fftw3.h>
#include <iostream>
#include <cmath>
#include <fstream>
// #ifndef M_PI
// #define M_PI 3.14159265358979323846264338327
// #endif
// Cindy

// include files for QT
#include <QObject>

/**Class providing the row recorded data (contained in a .dat or .eeg file).
  *@author Lynn Hazan
  */

// Cindy
#include <vector>
#include <QImage>
#include <QPixmap>
#include <QSize>

// class Palette
// {
//     public:
//         /// Default constructor -- 8-bit grayscale palette.
//         Palette();
//         /// Creates a palette from an image.
//         /** 
//          * This constructor takes an image and fills the palette with colors
//          * from the first row of an image.  \param img The image used to
//          * generate the palette.
//          */
//         Palette(const QImage& img);
//         //const QVector<QRgb>& colors() const;
//         /// Mapping of intensity values from <0,1> to an index or RGB value.
//         /** 
//          * \param val A float where 0 <= val <= 1
//          * \return Index of the color for an indexed palette or RGB value.
//          */
//         int get_color(float val) const;
//         /// Inverse mapping of color values to intensity, used for spectrogram synthesis.
//         /** \return Corresponding intensity, a value from <0,1>.  */
//         float get_intensity(QRgb color) const;
//         /// Returns true if the palette contains the given color, false otherwise.
//         bool has_color(QRgb color) const;
//         /// Creates a QImage with an appropriate color mode and dimensions.
//         /** The resulting QImage will have the specified dimensions and color
//          * mode depending on the number of colors in the palette.  For 256 or
//          * less colors, it will be indexed, otherwise RGB.
//          */
//         QImage make_canvas(int width, int height) const;
//         /// Used to determine if the palette is indexed or RGB.
//         /** \return \c true if the palette is indexed, otherwise \c false.*/
//         bool indexable() const;
//         /// Generate a preview of the palette suitable for display in a widget.
//         QPixmap preview(int width, int height) const;
//         /// Returns the number of colors in the palette.
//         int numColors() const;
//     private:
//         QVector<QRgb> colors_;
// };


// class Spectrogram : public QObject
// {
//     Q_OBJECT
//     public:
//         Spectrogram(QObject* parent = 0);
//         /// Generates a spectrogram for the given signal.
//         QImage to_image(std::vector<double>& signal, int samplerate) const;
//         /// Synthesizes the given spectrogram to sound.
//         // real_vec synthetize(const QImage& image, int samplerate,
//                 // SynthesisType type) const;
//         /// Serializes the Spectrogram object.
//         /** The serialized string is saved in image metadata to indicate parameters with which the spectrogram has been generated.  */
//         QString serialized() const;
//         /// Loads the serialized parameters into this object.
//         void deserialize(const QString& serialized);

//         /// Bandwidth of the frequency-domain filters.
//         /** In Hz for linear spectrograms, in cents (cent = octave/1200) for logarithmic spectrograms.*/
//         double bandwidth;
//         /// Base frequency of the spectrogram.
//         double basefreq;
//         /// Maximum frequency of the spectrogram.
//         double maxfreq;
//         /// Overlap of the frequency-domain filters, 1 = full overlap (useless), 0 = no overlap.
//         double overlap;
//         /// Time resolution of the spectrogram, pixels per second.
//         double pixpersec;
//         /// Window function used on the frequency-domain intervals.
//         Window window;
//         /// Scale type of the intensity axis (linear or logarithmic)
//         AxisScale intensity_axis;
//         /// Scale type of the frequency axis (linear or logarithmic)
//         AxisScale frequency_axis;
//         /// Brightness correction used in generation of the spectrogram.
//         BrightCorrection correction;
//         /// Palette used for drawing the spectrogram.
//         Palette palette;
//     private:
//         /// Performs sine synthesis on the given spectrogram.
//         std::vector<double> sine_synthesis(const QImage& image, int samplerate) const;
//         /// Performs noise synthesis on the given spectrogram.
//         std::vector<double> noise_synthesis(const QImage& image, int samplerate) const;
//         /// Draws an image from the given image data.
//         QImage make_image(const std::vector<std::vector<double> >& data) const;
//         /// Returns intensity values (from <0,1>) from a row of pixels.
//         std::vector<double> envelope_from_spectrogram(const QImage& image, int row) const;
//         /// Applies the window function to a frequency-domain interval.
//         // void apply_window(complex_vec& chunk, int lowidx,
//         //         double filterscale) const;
//         /// Delimiter of the serialized data
//         static const char delimiter = ';';
//         void band_progress(int x, int of, int from=0, int to=100) const;
//         /// Indicates if the computation should be interrupted.
//         bool cancelled() const;
//         mutable bool cancelled_;
//     signals:
//         /// Signals percentual progress to the main application.
//         void progress(int value) const;
//         /// Signals the state of the computation to the main application.
//         void status(const QString& text) const;
//     public slots:
//         /// Informs the working thread of a request to interrupt the computation.
//         void cancel();
// };

// Cindy

class TracesProvider : public DataProvider  {
    Q_OBJECT
public:

    /**Constructor.
  * @param fileUrl the url of the file containing the data provided by this class.
  * @param nbChannels the number of channels.
  * @param resolution resolution of the acquisition system used to record the data contained in the file identified by fileUrl.
  * @param samplingRate sampling rate used to record the data contained in the file identified by fileUrl.
  * @param offset offset to apply to the data contained in the file identified by fileUrl.
  */
    TracesProvider(const QString &fileUrl, int nbChannels, int resolution, double samplingRate, int offset);
    ~TracesProvider();

    /// Added by M.Zugaro to enable automatic forward paging
    void updateRecordingLength() { computeRecordingLength(); }

    /**Triggers the retrieve of the traces included in the time rate given by @p startTime and @p endTime.
  * @param startTime begining of the time frame from which to retrieve the data, given in milisecond.
  * @param endTime end of the time frame from which to retrieve the data, given in milisecond.
  * @param initiator instance requesting the data.
  * @param startTimeInRecordingUnits begining of the time interval from which to retrieve the data in recording units.
  */
    void requestData(long startTime,long endTime,QObject* initiator,long startTimeInRecordingUnits);

    /**Sets the number of channels corresponding to the file identified by fileUrl.
  * @param nb the number of channels.
  */
    void setNbChannels(int nb){
        nbChannels = nb;
        computeRecordingLength();
    }

    /**Sets the resolution used to record the data contained in the file identified by fileUrl.
  * @param res resolution.
  */
    void setResolution(int res){
        resolution = res;
        computeRecordingLength();
    }

    /**Sets the sampling rate used to record the data contained in the file identified by fileUrl.
  * @param rate the sampling rate.
  */
    void setSamplingRate(double rate){
        samplingRate = rate;
        computeRecordingLength();
    }

    /**Sets the offset to apply to the data contained in the file identified by fileUrl.
  * @param newOffset offset.
  */
    void setOffset(int newOffset){offset =  newOffset;}

    /**Returns the number of channels corresponding to the file identified by fileUrl.
  */
    int getNbChannels() const {return nbChannels;}

    /**Returns the resolution used to record the data contained in the file identified by fileUrl.
  */
    int getResolution() const {return resolution;}

    /**Returns the sampling rate used to record the data contained in the file identified by fileUrl.
  */
    double getSamplingRate() const {return samplingRate;}

    /**Returns the offset to apply to the data contained in the file identified by fileUrl.
  */
    int getOffset() const {return offset;}

    /**Returns the total length of the document in miliseconds.*/
    qlonglong recordingLength()const{return length;}

    /**Computes the number of samples between @p startTime and @p endTime.
  * @param startTime begining of the time frame from which the data have been retrieved, given in milisecond.
  * @param endTime end of the time frame from which to retrieve the data, given in milisecond.
  * @return number of samples in the given time frame.
  * @param startTimeInRecordingUnits begining of the time frame from which the data have been retrieved, given in recording units.
  */
    dataType getNbSamples(long startTime,long endTime,long startTimeInRecordingUnits);

    /**Returns the total number of samples in recorded contained in the file identified by fileUrl.*/
    long getTotalNbSamples();

    // Cindy
    // Palette palette;
    // Cindy


Q_SIGNALS:
    /**Signals that the data have been retrieved.
  * @param data array of data (number of channels X number of samples).
  * @param initiator instance requesting the data.
  */
    void dataReady(Array<dataType>& data,QObject* initiator);

private:
    /**Number of channels used to record the data.*/
    int nbChannels;

    /**Resolution of the acquisition system used to record the data.*/
    int resolution;

    /**Sampling rate used to record the data.*/
    double samplingRate;

    /**Offset to apply to the data before given them away.*/
    int offset;

    /**the total length of the document in miliseconds.*/
    qlonglong length;

    // Cindy
    // struct mfft_s {
        // int nfft;        /**< number of points in the transform */
        // int npoints;     /**< number of points in the taper(s) */
        // int ntapers;     /**< number of tapers */
        // double *tapers;  /**< array holding tapers, dim ntapers x npoints */
        // double *weights; /**< array holding taper weights, dim ntapers */
        // double *buf;     /**< workspace for FFTW, dim ntapers x npoints */
        // fftw_plan plan;  /**< FFTW plan */
    // };
    // typedef struct mfft_s mfft;
    // Cindy

    //Functions

    /**Retrieves the traces included in the time frame given by @p startTime and @p endTime.
  * @param startTime begining of the time frame from which to retrieve the data, given in milisecond.
  * @param endTime end of the time frame from which to retrieve the data, given in milisecond.
  * @param initiator instance requesting the data.
  * @param startTimeInRecordingUnits begining of the time interval from which to retrieve the data in recording units.
  */
    void retrieveData(long startTime,long endTime,QObject* initiator,long startTimeInRecordingUnits);

    /**Computes the total length of the document in miliseconds.*/
    void computeRecordingLength();

};

#endif
