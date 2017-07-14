# Install script for directory: /home/cindy/Desktop/neuroscope/doc

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/neuroscope/HTML/en" TYPE FILE FILES
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1280.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1498.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1725.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1349.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1005.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1200.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x118.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/c50.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x782.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1914.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x482.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x932.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x730.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x178.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/c40.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x539.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/a1717.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1204.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1342.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x160.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1570.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/c1697.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1459.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1748.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x808.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/a1907.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1781.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/index.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x705.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x566.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1609.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x638.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1488.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/c1111.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1921.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/c835.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1391.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x108.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/c1012.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1739.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1154.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/c1059.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x598.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x325.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1645.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1634.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x368.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x962.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1572.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1211.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x769.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/c1219.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x816.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x471.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/c1881.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x972.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/c41.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1838.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/c916.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1654.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x1421.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/x978.html"
    "/home/cindy/Desktop/neuroscope/doc/en/html/c48.html"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/neuroscope/HTML/en/Images" TYPE FILE FILES
    "/home/cindy/Desktop/neuroscope/doc/en/Images/new_group.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/skipDisplay.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/palettes.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/select_tool.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/edit.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/newGroup.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/add_event_tool.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/printer.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/colors.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/keepDisplay.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/modes.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/events.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/time_line_tool.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/backCluster.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/epidural.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/properties.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/multipleColumns.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/keep.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/eye_close.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/movingChannels.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/labels.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/eye.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/measure.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/selectTime.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/removingChannels.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/measure_tool.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/forwardEvent.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/positions.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/zoom_tool.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/time_tool.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/discard.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/remove.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/skip.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/discardingChannels.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/clusters.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/offsets.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/initialView.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/event_tool.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/backEvent.png"
    "/home/cindy/Desktop/neuroscope/doc/en/Images/forwardCluster.png"
    )
endif()

