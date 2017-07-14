# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


SET(CPACK_BINARY_BUNDLE "")
SET(CPACK_BINARY_CYGWIN "")
SET(CPACK_BINARY_DEB "")
SET(CPACK_BINARY_DRAGNDROP "")
SET(CPACK_BINARY_NSIS "")
SET(CPACK_BINARY_OSXX11 "")
SET(CPACK_BINARY_PACKAGEMAKER "")
SET(CPACK_BINARY_RPM "")
SET(CPACK_BINARY_STGZ "")
SET(CPACK_BINARY_TBZ2 "")
SET(CPACK_BINARY_TGZ "")
SET(CPACK_BINARY_TZ "")
SET(CPACK_BINARY_WIX "")
SET(CPACK_BINARY_ZIP "")
SET(CPACK_CMAKE_GENERATOR "Unix Makefiles")
SET(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
SET(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
SET(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "amd64")
SET(CPACK_DEBIAN_PACKAGE_CONTROL_EXTRA "/home/cindy/Desktop/neuroscope/postinst;/home/cindy/Desktop/neuroscope/postrm;")
SET(CPACK_DEBIAN_PACKAGE_DEPENDS "libklustersshared, libqt4-network, libqt4-xml, libqtcore4, libqtgui4, libqtwebkit4")
SET(CPACK_DEBIAN_PACKAGE_HOMEPAGE "http://neuroscope.sourceforge.net")
SET(CPACK_DEBIAN_PACKAGE_MAINTAINER "Michaël Zugaro")
SET(CPACK_DEBIAN_PACKAGE_RECOMMENDS "nphys-data, klusters, ndmanager")
SET(CPACK_DEBIAN_PACKAGE_SECTION "Science")
SET(CPACK_GENERATOR "TGZ;TBZ2;TZ")
SET(CPACK_IGNORE_FILES "/CVS/;/\\.svn/;/\\.bzr/;/\\.hg/;/\\.git/;\\.swp$;\\.#;/#")
SET(CPACK_INSTALLED_DIRECTORIES "/home/cindy/Desktop/neuroscope;/")
SET(CPACK_INSTALL_CMAKE_PROJECTS "")
SET(CPACK_INSTALL_PREFIX "/usr/local")
SET(CPACK_MODULE_PATH "/home/cindy/Desktop/neuroscope/cmake/modules")
SET(CPACK_NSIS_DISPLAY_NAME "neuroscope")
SET(CPACK_NSIS_INSTALLER_ICON_CODE "")
SET(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
SET(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
SET(CPACK_NSIS_PACKAGE_NAME "neuroscope")
SET(CPACK_OUTPUT_CONFIG_FILE "/home/cindy/Desktop/neuroscope/build/CPackConfig.cmake")
SET(CPACK_PACKAGE_DEFAULT_LOCATION "/")
SET(CPACK_PACKAGE_DESCRIPTION_FILE "/home/cindy/Desktop/neuroscope/description")
SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Viewer for neurophysiological and behavioral data")
SET(CPACK_PACKAGE_FILE_NAME "neuroscope-2.0.0-Source")
SET(CPACK_PACKAGE_INSTALL_DIRECTORY "neuroscope")
SET(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "neuroscope")
SET(CPACK_PACKAGE_NAME "neuroscope")
SET(CPACK_PACKAGE_RELOCATABLE "true")
SET(CPACK_PACKAGE_VENDOR "Humanity")
SET(CPACK_PACKAGE_VERSION "2.0.0")
SET(CPACK_PACKAGE_VERSION_MAJOR "2")
SET(CPACK_PACKAGE_VERSION_MINOR "0")
SET(CPACK_PACKAGE_VERSION_PATCH "0")
SET(CPACK_RESOURCE_FILE_LICENSE "/usr/local/share/cmake-3.0/Templates/CPack.GenericLicense.txt")
SET(CPACK_RESOURCE_FILE_README "/usr/local/share/cmake-3.0/Templates/CPack.GenericDescription.txt")
SET(CPACK_RESOURCE_FILE_WELCOME "/usr/local/share/cmake-3.0/Templates/CPack.GenericWelcome.txt")
SET(CPACK_SET_DESTDIR "OFF")
SET(CPACK_SOURCE_CYGWIN "")
SET(CPACK_SOURCE_GENERATOR "TGZ;TBZ2;TZ")
SET(CPACK_SOURCE_IGNORE_FILES "/CVS/;/\\.svn/;/\\.bzr/;/\\.hg/;/\\.git/;\\.swp$;\\.#;/#")
SET(CPACK_SOURCE_INSTALLED_DIRECTORIES "/home/cindy/Desktop/neuroscope;/")
SET(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/cindy/Desktop/neuroscope/build/CPackSourceConfig.cmake")
SET(CPACK_SOURCE_PACKAGE_FILE_NAME "neuroscope-2.0.0-Source")
SET(CPACK_SOURCE_TBZ2 "ON")
SET(CPACK_SOURCE_TGZ "ON")
SET(CPACK_SOURCE_TOPLEVEL_TAG "Linux-x86_64-Source")
SET(CPACK_SOURCE_TZ "ON")
SET(CPACK_SOURCE_ZIP "OFF")
SET(CPACK_STRIP_FILES "")
SET(CPACK_SYSTEM_NAME "Linux-x86_64")
SET(CPACK_TOPLEVEL_TAG "Linux-x86_64-Source")
SET(CPACK_WIX_SIZEOF_VOID_P "8")
