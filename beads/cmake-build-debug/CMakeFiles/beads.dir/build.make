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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nathanjacob/CLionProjects/beads

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nathanjacob/CLionProjects/beads/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/beads.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/beads.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/beads.dir/flags.make

CMakeFiles/beads.dir/main.cpp.o: CMakeFiles/beads.dir/flags.make
CMakeFiles/beads.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nathanjacob/CLionProjects/beads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/beads.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/beads.dir/main.cpp.o -c /Users/nathanjacob/CLionProjects/beads/main.cpp

CMakeFiles/beads.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/beads.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nathanjacob/CLionProjects/beads/main.cpp > CMakeFiles/beads.dir/main.cpp.i

CMakeFiles/beads.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/beads.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nathanjacob/CLionProjects/beads/main.cpp -o CMakeFiles/beads.dir/main.cpp.s

# Object files for target beads
beads_OBJECTS = \
"CMakeFiles/beads.dir/main.cpp.o"

# External object files for target beads
beads_EXTERNAL_OBJECTS =

beads: CMakeFiles/beads.dir/main.cpp.o
beads: CMakeFiles/beads.dir/build.make
beads: CMakeFiles/beads.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nathanjacob/CLionProjects/beads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable beads"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/beads.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/beads.dir/build: beads

.PHONY : CMakeFiles/beads.dir/build

CMakeFiles/beads.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/beads.dir/cmake_clean.cmake
.PHONY : CMakeFiles/beads.dir/clean

CMakeFiles/beads.dir/depend:
	cd /Users/nathanjacob/CLionProjects/beads/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nathanjacob/CLionProjects/beads /Users/nathanjacob/CLionProjects/beads /Users/nathanjacob/CLionProjects/beads/cmake-build-debug /Users/nathanjacob/CLionProjects/beads/cmake-build-debug /Users/nathanjacob/CLionProjects/beads/cmake-build-debug/CMakeFiles/beads.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/beads.dir/depend
