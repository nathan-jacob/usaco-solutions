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
CMAKE_SOURCE_DIR = /Users/nathanjacob/CLionProjects/dualpal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nathanjacob/CLionProjects/dualpal/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/dualpal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dualpal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dualpal.dir/flags.make

CMakeFiles/dualpal.dir/main.cpp.o: CMakeFiles/dualpal.dir/flags.make
CMakeFiles/dualpal.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nathanjacob/CLionProjects/dualpal/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dualpal.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dualpal.dir/main.cpp.o -c /Users/nathanjacob/CLionProjects/dualpal/main.cpp

CMakeFiles/dualpal.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dualpal.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nathanjacob/CLionProjects/dualpal/main.cpp > CMakeFiles/dualpal.dir/main.cpp.i

CMakeFiles/dualpal.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dualpal.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nathanjacob/CLionProjects/dualpal/main.cpp -o CMakeFiles/dualpal.dir/main.cpp.s

# Object files for target dualpal
dualpal_OBJECTS = \
"CMakeFiles/dualpal.dir/main.cpp.o"

# External object files for target dualpal
dualpal_EXTERNAL_OBJECTS =

dualpal: CMakeFiles/dualpal.dir/main.cpp.o
dualpal: CMakeFiles/dualpal.dir/build.make
dualpal: CMakeFiles/dualpal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nathanjacob/CLionProjects/dualpal/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dualpal"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dualpal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dualpal.dir/build: dualpal

.PHONY : CMakeFiles/dualpal.dir/build

CMakeFiles/dualpal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dualpal.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dualpal.dir/clean

CMakeFiles/dualpal.dir/depend:
	cd /Users/nathanjacob/CLionProjects/dualpal/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nathanjacob/CLionProjects/dualpal /Users/nathanjacob/CLionProjects/dualpal /Users/nathanjacob/CLionProjects/dualpal/cmake-build-debug /Users/nathanjacob/CLionProjects/dualpal/cmake-build-debug /Users/nathanjacob/CLionProjects/dualpal/cmake-build-debug/CMakeFiles/dualpal.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dualpal.dir/depend

