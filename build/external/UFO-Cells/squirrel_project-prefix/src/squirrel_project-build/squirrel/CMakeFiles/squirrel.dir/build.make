# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build

# Include any dependencies generated for this target.
include squirrel/CMakeFiles/squirrel.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include squirrel/CMakeFiles/squirrel.dir/compiler_depend.make

# Include the progress variables for this target.
include squirrel/CMakeFiles/squirrel.dir/progress.make

# Include the compile flags for this target's objects.
include squirrel/CMakeFiles/squirrel.dir/flags.make

squirrel/CMakeFiles/squirrel.dir/sqapi.cpp.o: squirrel/CMakeFiles/squirrel.dir/flags.make
squirrel/CMakeFiles/squirrel.dir/sqapi.cpp.o: /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqapi.cpp
squirrel/CMakeFiles/squirrel.dir/sqapi.cpp.o: squirrel/CMakeFiles/squirrel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object squirrel/CMakeFiles/squirrel.dir/sqapi.cpp.o"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT squirrel/CMakeFiles/squirrel.dir/sqapi.cpp.o -MF CMakeFiles/squirrel.dir/sqapi.cpp.o.d -o CMakeFiles/squirrel.dir/sqapi.cpp.o -c /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqapi.cpp

squirrel/CMakeFiles/squirrel.dir/sqapi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/squirrel.dir/sqapi.cpp.i"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqapi.cpp > CMakeFiles/squirrel.dir/sqapi.cpp.i

squirrel/CMakeFiles/squirrel.dir/sqapi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/squirrel.dir/sqapi.cpp.s"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqapi.cpp -o CMakeFiles/squirrel.dir/sqapi.cpp.s

squirrel/CMakeFiles/squirrel.dir/sqbaselib.cpp.o: squirrel/CMakeFiles/squirrel.dir/flags.make
squirrel/CMakeFiles/squirrel.dir/sqbaselib.cpp.o: /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqbaselib.cpp
squirrel/CMakeFiles/squirrel.dir/sqbaselib.cpp.o: squirrel/CMakeFiles/squirrel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object squirrel/CMakeFiles/squirrel.dir/sqbaselib.cpp.o"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT squirrel/CMakeFiles/squirrel.dir/sqbaselib.cpp.o -MF CMakeFiles/squirrel.dir/sqbaselib.cpp.o.d -o CMakeFiles/squirrel.dir/sqbaselib.cpp.o -c /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqbaselib.cpp

squirrel/CMakeFiles/squirrel.dir/sqbaselib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/squirrel.dir/sqbaselib.cpp.i"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqbaselib.cpp > CMakeFiles/squirrel.dir/sqbaselib.cpp.i

squirrel/CMakeFiles/squirrel.dir/sqbaselib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/squirrel.dir/sqbaselib.cpp.s"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqbaselib.cpp -o CMakeFiles/squirrel.dir/sqbaselib.cpp.s

squirrel/CMakeFiles/squirrel.dir/sqclass.cpp.o: squirrel/CMakeFiles/squirrel.dir/flags.make
squirrel/CMakeFiles/squirrel.dir/sqclass.cpp.o: /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqclass.cpp
squirrel/CMakeFiles/squirrel.dir/sqclass.cpp.o: squirrel/CMakeFiles/squirrel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object squirrel/CMakeFiles/squirrel.dir/sqclass.cpp.o"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT squirrel/CMakeFiles/squirrel.dir/sqclass.cpp.o -MF CMakeFiles/squirrel.dir/sqclass.cpp.o.d -o CMakeFiles/squirrel.dir/sqclass.cpp.o -c /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqclass.cpp

squirrel/CMakeFiles/squirrel.dir/sqclass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/squirrel.dir/sqclass.cpp.i"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqclass.cpp > CMakeFiles/squirrel.dir/sqclass.cpp.i

squirrel/CMakeFiles/squirrel.dir/sqclass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/squirrel.dir/sqclass.cpp.s"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqclass.cpp -o CMakeFiles/squirrel.dir/sqclass.cpp.s

squirrel/CMakeFiles/squirrel.dir/sqcompiler.cpp.o: squirrel/CMakeFiles/squirrel.dir/flags.make
squirrel/CMakeFiles/squirrel.dir/sqcompiler.cpp.o: /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqcompiler.cpp
squirrel/CMakeFiles/squirrel.dir/sqcompiler.cpp.o: squirrel/CMakeFiles/squirrel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object squirrel/CMakeFiles/squirrel.dir/sqcompiler.cpp.o"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT squirrel/CMakeFiles/squirrel.dir/sqcompiler.cpp.o -MF CMakeFiles/squirrel.dir/sqcompiler.cpp.o.d -o CMakeFiles/squirrel.dir/sqcompiler.cpp.o -c /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqcompiler.cpp

squirrel/CMakeFiles/squirrel.dir/sqcompiler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/squirrel.dir/sqcompiler.cpp.i"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqcompiler.cpp > CMakeFiles/squirrel.dir/sqcompiler.cpp.i

squirrel/CMakeFiles/squirrel.dir/sqcompiler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/squirrel.dir/sqcompiler.cpp.s"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqcompiler.cpp -o CMakeFiles/squirrel.dir/sqcompiler.cpp.s

squirrel/CMakeFiles/squirrel.dir/sqdebug.cpp.o: squirrel/CMakeFiles/squirrel.dir/flags.make
squirrel/CMakeFiles/squirrel.dir/sqdebug.cpp.o: /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqdebug.cpp
squirrel/CMakeFiles/squirrel.dir/sqdebug.cpp.o: squirrel/CMakeFiles/squirrel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object squirrel/CMakeFiles/squirrel.dir/sqdebug.cpp.o"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT squirrel/CMakeFiles/squirrel.dir/sqdebug.cpp.o -MF CMakeFiles/squirrel.dir/sqdebug.cpp.o.d -o CMakeFiles/squirrel.dir/sqdebug.cpp.o -c /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqdebug.cpp

squirrel/CMakeFiles/squirrel.dir/sqdebug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/squirrel.dir/sqdebug.cpp.i"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqdebug.cpp > CMakeFiles/squirrel.dir/sqdebug.cpp.i

squirrel/CMakeFiles/squirrel.dir/sqdebug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/squirrel.dir/sqdebug.cpp.s"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqdebug.cpp -o CMakeFiles/squirrel.dir/sqdebug.cpp.s

squirrel/CMakeFiles/squirrel.dir/sqfuncstate.cpp.o: squirrel/CMakeFiles/squirrel.dir/flags.make
squirrel/CMakeFiles/squirrel.dir/sqfuncstate.cpp.o: /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqfuncstate.cpp
squirrel/CMakeFiles/squirrel.dir/sqfuncstate.cpp.o: squirrel/CMakeFiles/squirrel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object squirrel/CMakeFiles/squirrel.dir/sqfuncstate.cpp.o"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT squirrel/CMakeFiles/squirrel.dir/sqfuncstate.cpp.o -MF CMakeFiles/squirrel.dir/sqfuncstate.cpp.o.d -o CMakeFiles/squirrel.dir/sqfuncstate.cpp.o -c /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqfuncstate.cpp

squirrel/CMakeFiles/squirrel.dir/sqfuncstate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/squirrel.dir/sqfuncstate.cpp.i"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqfuncstate.cpp > CMakeFiles/squirrel.dir/sqfuncstate.cpp.i

squirrel/CMakeFiles/squirrel.dir/sqfuncstate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/squirrel.dir/sqfuncstate.cpp.s"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqfuncstate.cpp -o CMakeFiles/squirrel.dir/sqfuncstate.cpp.s

squirrel/CMakeFiles/squirrel.dir/sqlexer.cpp.o: squirrel/CMakeFiles/squirrel.dir/flags.make
squirrel/CMakeFiles/squirrel.dir/sqlexer.cpp.o: /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqlexer.cpp
squirrel/CMakeFiles/squirrel.dir/sqlexer.cpp.o: squirrel/CMakeFiles/squirrel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object squirrel/CMakeFiles/squirrel.dir/sqlexer.cpp.o"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT squirrel/CMakeFiles/squirrel.dir/sqlexer.cpp.o -MF CMakeFiles/squirrel.dir/sqlexer.cpp.o.d -o CMakeFiles/squirrel.dir/sqlexer.cpp.o -c /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqlexer.cpp

squirrel/CMakeFiles/squirrel.dir/sqlexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/squirrel.dir/sqlexer.cpp.i"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqlexer.cpp > CMakeFiles/squirrel.dir/sqlexer.cpp.i

squirrel/CMakeFiles/squirrel.dir/sqlexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/squirrel.dir/sqlexer.cpp.s"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqlexer.cpp -o CMakeFiles/squirrel.dir/sqlexer.cpp.s

squirrel/CMakeFiles/squirrel.dir/sqmem.cpp.o: squirrel/CMakeFiles/squirrel.dir/flags.make
squirrel/CMakeFiles/squirrel.dir/sqmem.cpp.o: /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqmem.cpp
squirrel/CMakeFiles/squirrel.dir/sqmem.cpp.o: squirrel/CMakeFiles/squirrel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object squirrel/CMakeFiles/squirrel.dir/sqmem.cpp.o"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT squirrel/CMakeFiles/squirrel.dir/sqmem.cpp.o -MF CMakeFiles/squirrel.dir/sqmem.cpp.o.d -o CMakeFiles/squirrel.dir/sqmem.cpp.o -c /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqmem.cpp

squirrel/CMakeFiles/squirrel.dir/sqmem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/squirrel.dir/sqmem.cpp.i"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqmem.cpp > CMakeFiles/squirrel.dir/sqmem.cpp.i

squirrel/CMakeFiles/squirrel.dir/sqmem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/squirrel.dir/sqmem.cpp.s"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqmem.cpp -o CMakeFiles/squirrel.dir/sqmem.cpp.s

squirrel/CMakeFiles/squirrel.dir/sqobject.cpp.o: squirrel/CMakeFiles/squirrel.dir/flags.make
squirrel/CMakeFiles/squirrel.dir/sqobject.cpp.o: /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqobject.cpp
squirrel/CMakeFiles/squirrel.dir/sqobject.cpp.o: squirrel/CMakeFiles/squirrel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object squirrel/CMakeFiles/squirrel.dir/sqobject.cpp.o"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT squirrel/CMakeFiles/squirrel.dir/sqobject.cpp.o -MF CMakeFiles/squirrel.dir/sqobject.cpp.o.d -o CMakeFiles/squirrel.dir/sqobject.cpp.o -c /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqobject.cpp

squirrel/CMakeFiles/squirrel.dir/sqobject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/squirrel.dir/sqobject.cpp.i"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqobject.cpp > CMakeFiles/squirrel.dir/sqobject.cpp.i

squirrel/CMakeFiles/squirrel.dir/sqobject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/squirrel.dir/sqobject.cpp.s"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqobject.cpp -o CMakeFiles/squirrel.dir/sqobject.cpp.s

squirrel/CMakeFiles/squirrel.dir/sqstate.cpp.o: squirrel/CMakeFiles/squirrel.dir/flags.make
squirrel/CMakeFiles/squirrel.dir/sqstate.cpp.o: /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqstate.cpp
squirrel/CMakeFiles/squirrel.dir/sqstate.cpp.o: squirrel/CMakeFiles/squirrel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object squirrel/CMakeFiles/squirrel.dir/sqstate.cpp.o"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT squirrel/CMakeFiles/squirrel.dir/sqstate.cpp.o -MF CMakeFiles/squirrel.dir/sqstate.cpp.o.d -o CMakeFiles/squirrel.dir/sqstate.cpp.o -c /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqstate.cpp

squirrel/CMakeFiles/squirrel.dir/sqstate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/squirrel.dir/sqstate.cpp.i"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqstate.cpp > CMakeFiles/squirrel.dir/sqstate.cpp.i

squirrel/CMakeFiles/squirrel.dir/sqstate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/squirrel.dir/sqstate.cpp.s"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqstate.cpp -o CMakeFiles/squirrel.dir/sqstate.cpp.s

squirrel/CMakeFiles/squirrel.dir/sqtable.cpp.o: squirrel/CMakeFiles/squirrel.dir/flags.make
squirrel/CMakeFiles/squirrel.dir/sqtable.cpp.o: /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqtable.cpp
squirrel/CMakeFiles/squirrel.dir/sqtable.cpp.o: squirrel/CMakeFiles/squirrel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object squirrel/CMakeFiles/squirrel.dir/sqtable.cpp.o"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT squirrel/CMakeFiles/squirrel.dir/sqtable.cpp.o -MF CMakeFiles/squirrel.dir/sqtable.cpp.o.d -o CMakeFiles/squirrel.dir/sqtable.cpp.o -c /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqtable.cpp

squirrel/CMakeFiles/squirrel.dir/sqtable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/squirrel.dir/sqtable.cpp.i"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqtable.cpp > CMakeFiles/squirrel.dir/sqtable.cpp.i

squirrel/CMakeFiles/squirrel.dir/sqtable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/squirrel.dir/sqtable.cpp.s"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqtable.cpp -o CMakeFiles/squirrel.dir/sqtable.cpp.s

squirrel/CMakeFiles/squirrel.dir/sqvm.cpp.o: squirrel/CMakeFiles/squirrel.dir/flags.make
squirrel/CMakeFiles/squirrel.dir/sqvm.cpp.o: /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqvm.cpp
squirrel/CMakeFiles/squirrel.dir/sqvm.cpp.o: squirrel/CMakeFiles/squirrel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object squirrel/CMakeFiles/squirrel.dir/sqvm.cpp.o"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT squirrel/CMakeFiles/squirrel.dir/sqvm.cpp.o -MF CMakeFiles/squirrel.dir/sqvm.cpp.o.d -o CMakeFiles/squirrel.dir/sqvm.cpp.o -c /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqvm.cpp

squirrel/CMakeFiles/squirrel.dir/sqvm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/squirrel.dir/sqvm.cpp.i"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqvm.cpp > CMakeFiles/squirrel.dir/sqvm.cpp.i

squirrel/CMakeFiles/squirrel.dir/sqvm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/squirrel.dir/sqvm.cpp.s"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel/sqvm.cpp -o CMakeFiles/squirrel.dir/sqvm.cpp.s

# Object files for target squirrel
squirrel_OBJECTS = \
"CMakeFiles/squirrel.dir/sqapi.cpp.o" \
"CMakeFiles/squirrel.dir/sqbaselib.cpp.o" \
"CMakeFiles/squirrel.dir/sqclass.cpp.o" \
"CMakeFiles/squirrel.dir/sqcompiler.cpp.o" \
"CMakeFiles/squirrel.dir/sqdebug.cpp.o" \
"CMakeFiles/squirrel.dir/sqfuncstate.cpp.o" \
"CMakeFiles/squirrel.dir/sqlexer.cpp.o" \
"CMakeFiles/squirrel.dir/sqmem.cpp.o" \
"CMakeFiles/squirrel.dir/sqobject.cpp.o" \
"CMakeFiles/squirrel.dir/sqstate.cpp.o" \
"CMakeFiles/squirrel.dir/sqtable.cpp.o" \
"CMakeFiles/squirrel.dir/sqvm.cpp.o"

# External object files for target squirrel
squirrel_EXTERNAL_OBJECTS =

lib/libsquirrel.so.0.0.0: squirrel/CMakeFiles/squirrel.dir/sqapi.cpp.o
lib/libsquirrel.so.0.0.0: squirrel/CMakeFiles/squirrel.dir/sqbaselib.cpp.o
lib/libsquirrel.so.0.0.0: squirrel/CMakeFiles/squirrel.dir/sqclass.cpp.o
lib/libsquirrel.so.0.0.0: squirrel/CMakeFiles/squirrel.dir/sqcompiler.cpp.o
lib/libsquirrel.so.0.0.0: squirrel/CMakeFiles/squirrel.dir/sqdebug.cpp.o
lib/libsquirrel.so.0.0.0: squirrel/CMakeFiles/squirrel.dir/sqfuncstate.cpp.o
lib/libsquirrel.so.0.0.0: squirrel/CMakeFiles/squirrel.dir/sqlexer.cpp.o
lib/libsquirrel.so.0.0.0: squirrel/CMakeFiles/squirrel.dir/sqmem.cpp.o
lib/libsquirrel.so.0.0.0: squirrel/CMakeFiles/squirrel.dir/sqobject.cpp.o
lib/libsquirrel.so.0.0.0: squirrel/CMakeFiles/squirrel.dir/sqstate.cpp.o
lib/libsquirrel.so.0.0.0: squirrel/CMakeFiles/squirrel.dir/sqtable.cpp.o
lib/libsquirrel.so.0.0.0: squirrel/CMakeFiles/squirrel.dir/sqvm.cpp.o
lib/libsquirrel.so.0.0.0: squirrel/CMakeFiles/squirrel.dir/build.make
lib/libsquirrel.so.0.0.0: squirrel/CMakeFiles/squirrel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX shared library ../lib/libsquirrel.so"
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/squirrel.dir/link.txt --verbose=$(VERBOSE)
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libsquirrel.so.0.0.0 ../lib/libsquirrel.so.0 ../lib/libsquirrel.so

lib/libsquirrel.so.0: lib/libsquirrel.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libsquirrel.so.0

lib/libsquirrel.so: lib/libsquirrel.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libsquirrel.so

# Rule to build all files generated by this target.
squirrel/CMakeFiles/squirrel.dir/build: lib/libsquirrel.so
.PHONY : squirrel/CMakeFiles/squirrel.dir/build

squirrel/CMakeFiles/squirrel.dir/clean:
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel && $(CMAKE_COMMAND) -P CMakeFiles/squirrel.dir/cmake_clean.cmake
.PHONY : squirrel/CMakeFiles/squirrel.dir/clean

squirrel/CMakeFiles/squirrel.dir/depend:
	cd /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel /home/uj/Documents/C++/pingus_world_tour/external/UFO-Cells/external/squirrel/squirrel /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel /home/uj/Documents/C++/pingus_world_tour/build/external/UFO-Cells/squirrel_project-prefix/src/squirrel_project-build/squirrel/CMakeFiles/squirrel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : squirrel/CMakeFiles/squirrel.dir/depend

