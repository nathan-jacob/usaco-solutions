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
CMAKE_SOURCE_DIR = /Users/nathanjacob/CLionProjects/stamps

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nathanjacob/CLionProjects/stamps/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stamps.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stamps.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stamps.dir/flags.make

CMakeFiles/stamps.dir/main.cpp.o: CMakeFiles/stamps.dir/flags.make
CMakeFiles/stamps.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nathanjacob/CLionProjects/stamps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stamps.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stamps.dir/main.cpp.o -c /Users/nathanjacob/CLionProjects/stamps/main.cpp

CMakeFiles/stamps.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stamps.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nathanjacob/CLionProjects/stamps/main.cpp > CMakeFiles/stamps.dir/main.cpp.i

CMakeFiles/stamps.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stamps.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nathanjacob/CLionProjects/stamps/main.cpp -o CMakeFiles/stamps.dir/main.cpp.s

# Object files for target stamps
stamps_OBJECTS = \
"CMakeFiles/stamps.dir/main.cpp.o"

# External object files for target stamps
stamps_EXTERNAL_OBJECTS =

stamps: CMakeFiles/stamps.dir/main.cpp.o
stamps: CMakeFiles/stamps.dir/build.make
stamps: CMakeFiles/stamps.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nathanjacob/CLionProjects/stamps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stamps"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stamps.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stamps.dir/build: stamps

.PHONY : CMakeFiles/stamps.dir/build

CMakeFiles/stamps.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stamps.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stamps.dir/clean

CMakeFiles/stamps.dir/depend:
	cd /Users/nathanjacob/CLionProjects/stamps/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nathanjacob/CLionProjects/stamps /Users/nathanjacob/CLionProjects/stamps /Users/nathanjacob/CLionProjects/stamps/cmake-build-debug /Users/nathanjacob/CLionProjects/stamps/cmake-build-debug /Users/nathanjacob/CLionProjects/stamps/cmake-build-debug/CMakeFiles/stamps.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stamps.dir/depend

