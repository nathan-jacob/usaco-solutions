# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Applications/CLion 2020.2 EAP.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Applications/CLion 2020.2 EAP.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nathanjacob/CLionProjects/lifegaurds

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nathanjacob/CLionProjects/lifegaurds/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lifegaurds.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lifegaurds.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lifegaurds.dir/flags.make

CMakeFiles/lifegaurds.dir/main.cpp.o: CMakeFiles/lifegaurds.dir/flags.make
CMakeFiles/lifegaurds.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nathanjacob/CLionProjects/lifegaurds/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lifegaurds.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lifegaurds.dir/main.cpp.o -c /Users/nathanjacob/CLionProjects/lifegaurds/main.cpp

CMakeFiles/lifegaurds.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lifegaurds.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nathanjacob/CLionProjects/lifegaurds/main.cpp > CMakeFiles/lifegaurds.dir/main.cpp.i

CMakeFiles/lifegaurds.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lifegaurds.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nathanjacob/CLionProjects/lifegaurds/main.cpp -o CMakeFiles/lifegaurds.dir/main.cpp.s

# Object files for target lifegaurds
lifegaurds_OBJECTS = \
"CMakeFiles/lifegaurds.dir/main.cpp.o"

# External object files for target lifegaurds
lifegaurds_EXTERNAL_OBJECTS =

lifegaurds: CMakeFiles/lifegaurds.dir/main.cpp.o
lifegaurds: CMakeFiles/lifegaurds.dir/build.make
lifegaurds: CMakeFiles/lifegaurds.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nathanjacob/CLionProjects/lifegaurds/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lifegaurds"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lifegaurds.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lifegaurds.dir/build: lifegaurds

.PHONY : CMakeFiles/lifegaurds.dir/build

CMakeFiles/lifegaurds.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lifegaurds.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lifegaurds.dir/clean

CMakeFiles/lifegaurds.dir/depend:
	cd /Users/nathanjacob/CLionProjects/lifegaurds/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nathanjacob/CLionProjects/lifegaurds /Users/nathanjacob/CLionProjects/lifegaurds /Users/nathanjacob/CLionProjects/lifegaurds/cmake-build-debug /Users/nathanjacob/CLionProjects/lifegaurds/cmake-build-debug /Users/nathanjacob/CLionProjects/lifegaurds/cmake-build-debug/CMakeFiles/lifegaurds.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lifegaurds.dir/depend

