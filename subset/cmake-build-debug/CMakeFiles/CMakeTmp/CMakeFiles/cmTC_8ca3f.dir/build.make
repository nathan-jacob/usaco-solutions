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


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /Users/nathanjacob/CLionProjects/subset/cmake-build-debug/CMakeFiles/CMakeTmp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nathanjacob/CLionProjects/subset/cmake-build-debug/CMakeFiles/CMakeTmp

# Include any dependencies generated for this target.
include CMakeFiles/cmTC_8ca3f.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cmTC_8ca3f.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmTC_8ca3f.dir/flags.make

CMakeFiles/cmTC_8ca3f.dir/testCCompiler.c.o: CMakeFiles/cmTC_8ca3f.dir/flags.make
CMakeFiles/cmTC_8ca3f.dir/testCCompiler.c.o: testCCompiler.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/Users/nathanjacob/CLionProjects/subset/cmake-build-debug/CMakeFiles/CMakeTmp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cmTC_8ca3f.dir/testCCompiler.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cmTC_8ca3f.dir/testCCompiler.c.o   -c /Users/nathanjacob/CLionProjects/subset/cmake-build-debug/CMakeFiles/CMakeTmp/testCCompiler.c

CMakeFiles/cmTC_8ca3f.dir/testCCompiler.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/cmTC_8ca3f.dir/testCCompiler.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/nathanjacob/CLionProjects/subset/cmake-build-debug/CMakeFiles/CMakeTmp/testCCompiler.c > CMakeFiles/cmTC_8ca3f.dir/testCCompiler.c.i

CMakeFiles/cmTC_8ca3f.dir/testCCompiler.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/cmTC_8ca3f.dir/testCCompiler.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/nathanjacob/CLionProjects/subset/cmake-build-debug/CMakeFiles/CMakeTmp/testCCompiler.c -o CMakeFiles/cmTC_8ca3f.dir/testCCompiler.c.s

# Object files for target cmTC_8ca3f
cmTC_8ca3f_OBJECTS = \
"CMakeFiles/cmTC_8ca3f.dir/testCCompiler.c.o"

# External object files for target cmTC_8ca3f
cmTC_8ca3f_EXTERNAL_OBJECTS =

cmTC_8ca3f: CMakeFiles/cmTC_8ca3f.dir/testCCompiler.c.o
cmTC_8ca3f: CMakeFiles/cmTC_8ca3f.dir/build.make
cmTC_8ca3f: CMakeFiles/cmTC_8ca3f.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/Users/nathanjacob/CLionProjects/subset/cmake-build-debug/CMakeFiles/CMakeTmp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cmTC_8ca3f"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmTC_8ca3f.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmTC_8ca3f.dir/build: cmTC_8ca3f

.PHONY : CMakeFiles/cmTC_8ca3f.dir/build

CMakeFiles/cmTC_8ca3f.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cmTC_8ca3f.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cmTC_8ca3f.dir/clean

CMakeFiles/cmTC_8ca3f.dir/depend:
	cd /Users/nathanjacob/CLionProjects/subset/cmake-build-debug/CMakeFiles/CMakeTmp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nathanjacob/CLionProjects/subset/cmake-build-debug/CMakeFiles/CMakeTmp /Users/nathanjacob/CLionProjects/subset/cmake-build-debug/CMakeFiles/CMakeTmp /Users/nathanjacob/CLionProjects/subset/cmake-build-debug/CMakeFiles/CMakeTmp /Users/nathanjacob/CLionProjects/subset/cmake-build-debug/CMakeFiles/CMakeTmp /Users/nathanjacob/CLionProjects/subset/cmake-build-debug/CMakeFiles/CMakeTmp/CMakeFiles/cmTC_8ca3f.dir/DependInfo.cmake
.PHONY : CMakeFiles/cmTC_8ca3f.dir/depend

