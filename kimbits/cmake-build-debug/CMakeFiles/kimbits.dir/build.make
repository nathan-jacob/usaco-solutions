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
CMAKE_COMMAND = "/Applications/CLion 2020.3 EAP.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Applications/CLion 2020.3 EAP.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nathanjacob/CLionProjects/kimbits

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nathanjacob/CLionProjects/kimbits/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/kimbits.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/kimbits.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kimbits.dir/flags.make

CMakeFiles/kimbits.dir/main.cpp.o: CMakeFiles/kimbits.dir/flags.make
CMakeFiles/kimbits.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nathanjacob/CLionProjects/kimbits/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kimbits.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kimbits.dir/main.cpp.o -c /Users/nathanjacob/CLionProjects/kimbits/main.cpp

CMakeFiles/kimbits.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kimbits.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nathanjacob/CLionProjects/kimbits/main.cpp > CMakeFiles/kimbits.dir/main.cpp.i

CMakeFiles/kimbits.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kimbits.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nathanjacob/CLionProjects/kimbits/main.cpp -o CMakeFiles/kimbits.dir/main.cpp.s

# Object files for target kimbits
kimbits_OBJECTS = \
"CMakeFiles/kimbits.dir/main.cpp.o"

# External object files for target kimbits
kimbits_EXTERNAL_OBJECTS =

kimbits: CMakeFiles/kimbits.dir/main.cpp.o
kimbits: CMakeFiles/kimbits.dir/build.make
kimbits: CMakeFiles/kimbits.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nathanjacob/CLionProjects/kimbits/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable kimbits"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kimbits.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kimbits.dir/build: kimbits

.PHONY : CMakeFiles/kimbits.dir/build

CMakeFiles/kimbits.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/kimbits.dir/cmake_clean.cmake
.PHONY : CMakeFiles/kimbits.dir/clean

CMakeFiles/kimbits.dir/depend:
	cd /Users/nathanjacob/CLionProjects/kimbits/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nathanjacob/CLionProjects/kimbits /Users/nathanjacob/CLionProjects/kimbits /Users/nathanjacob/CLionProjects/kimbits/cmake-build-debug /Users/nathanjacob/CLionProjects/kimbits/cmake-build-debug /Users/nathanjacob/CLionProjects/kimbits/cmake-build-debug/CMakeFiles/kimbits.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/kimbits.dir/depend

