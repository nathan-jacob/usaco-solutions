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
CMAKE_SOURCE_DIR = /Users/nathanjacob/CLionProjects/nqueens

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nathanjacob/CLionProjects/nqueens/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/nqueens.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nqueens.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nqueens.dir/flags.make

CMakeFiles/nqueens.dir/main.cpp.o: CMakeFiles/nqueens.dir/flags.make
CMakeFiles/nqueens.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nathanjacob/CLionProjects/nqueens/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nqueens.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nqueens.dir/main.cpp.o -c /Users/nathanjacob/CLionProjects/nqueens/main.cpp

CMakeFiles/nqueens.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nqueens.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nathanjacob/CLionProjects/nqueens/main.cpp > CMakeFiles/nqueens.dir/main.cpp.i

CMakeFiles/nqueens.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nqueens.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nathanjacob/CLionProjects/nqueens/main.cpp -o CMakeFiles/nqueens.dir/main.cpp.s

# Object files for target nqueens
nqueens_OBJECTS = \
"CMakeFiles/nqueens.dir/main.cpp.o"

# External object files for target nqueens
nqueens_EXTERNAL_OBJECTS =

nqueens: CMakeFiles/nqueens.dir/main.cpp.o
nqueens: CMakeFiles/nqueens.dir/build.make
nqueens: CMakeFiles/nqueens.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nathanjacob/CLionProjects/nqueens/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nqueens"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nqueens.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nqueens.dir/build: nqueens

.PHONY : CMakeFiles/nqueens.dir/build

CMakeFiles/nqueens.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nqueens.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nqueens.dir/clean

CMakeFiles/nqueens.dir/depend:
	cd /Users/nathanjacob/CLionProjects/nqueens/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nathanjacob/CLionProjects/nqueens /Users/nathanjacob/CLionProjects/nqueens /Users/nathanjacob/CLionProjects/nqueens/cmake-build-debug /Users/nathanjacob/CLionProjects/nqueens/cmake-build-debug /Users/nathanjacob/CLionProjects/nqueens/cmake-build-debug/CMakeFiles/nqueens.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nqueens.dir/depend
