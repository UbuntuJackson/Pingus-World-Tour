# Install script for directory: /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/uj/Documents/C++/pingus_world_tour/build/squirrel/ex")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/include/sqconfig.h"
    "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/include/squirrel.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/include/sqstdaux.h"
    "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/include/sqstdblob.h"
    "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/include/sqstdio.h"
    "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/include/sqstdmath.h"
    "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/include/sqstdstring.h"
    "/home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/include/sqstdsystem.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/squirrel" TYPE FILE FILES
    "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/lib/cmake/squirrel/squirrel-config-version.cmake"
    "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/lib/cmake/squirrel/squirrel-config.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/squirrel/squirrel-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/squirrel/squirrel-targets.cmake"
         "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles/Export/lib/cmake/squirrel/squirrel-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/squirrel/squirrel-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/squirrel/squirrel-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/squirrel" TYPE FILE FILES "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles/Export/lib/cmake/squirrel/squirrel-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/squirrel" TYPE FILE FILES "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles/Export/lib/cmake/squirrel/squirrel-targets-release.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel/cmake_install.cmake")
  include("/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/sqstdlib/cmake_install.cmake")
  include("/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/sq/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
