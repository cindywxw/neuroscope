# Config file for LibKlustersShared . Do not modify this file. Any change will be overwritten by CMake.

# This file will define the following variables:
#
# LIBKLUSTERSSHARED_LIB_DIR : The libklustersshared library directory
# LIBKLUSTERSSHARED_INCLUDE_DIR : The libklustersshared include directory
# LIBKLUSTERSSHARED_LIBRARY : The libklustersshared library

set(LIBKLUSTERSSHARED_VERSION_MAJOR 2)
set(LIBKLUSTERSSHARED_VERSION_MINOR 0)
set(LIBKLUSTERSSHARED_VERSION_PATCH 0)
set(LIBKLUSTERSSHARED_VERSION       "${LIBKLUSTERSSHARED_VERSION_MAJOR}.${LIBKLUSTERSSHARED_VERSION_MINOR}.${LIBKLUSTERSSHARED_VERSION_PATCH}")


get_filename_component(_currentDir ${CMAKE_CURRENT_LIST_FILE} PATH) # The current directory
get_filename_component(rootDir ${_currentDir}/ ABSOLUTE) # The install prefix

# Include directory
set(LIBKLUSTERSSHARED_INCLUDE_DIR "/usr/local/include/klustersshared")

# Library directory
set(LIBKLUSTERSSHARED_LIB_DIR "/usr/local/lib")
set(LIBKLUSTERSSHARED_DLL_DIR "/usr/local/bin")

# Import the exported targets
include(${_currentDir}/LibKlustersSharedTargetsWithPrefix.cmake)

# Set the libraries names
set(LIBKLUSTERSSHARED_LIBRARY klustersshared)
