# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/googletest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/build_gtest

# Include any dependencies generated for this target.
include googletest/CMakeFiles/sample10_unittest.dir/depend.make

# Include the progress variables for this target.
include googletest/CMakeFiles/sample10_unittest.dir/progress.make

# Include the compile flags for this target's objects.
include googletest/CMakeFiles/sample10_unittest.dir/flags.make

googletest/CMakeFiles/sample10_unittest.dir/samples/sample10_unittest.cc.o: googletest/CMakeFiles/sample10_unittest.dir/flags.make
googletest/CMakeFiles/sample10_unittest.dir/samples/sample10_unittest.cc.o: /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/googletest/googletest/samples/sample10_unittest.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/build_gtest/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object googletest/CMakeFiles/sample10_unittest.dir/samples/sample10_unittest.cc.o"
	cd /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/build_gtest/googletest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sample10_unittest.dir/samples/sample10_unittest.cc.o -c /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/googletest/googletest/samples/sample10_unittest.cc

googletest/CMakeFiles/sample10_unittest.dir/samples/sample10_unittest.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sample10_unittest.dir/samples/sample10_unittest.cc.i"
	cd /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/build_gtest/googletest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/googletest/googletest/samples/sample10_unittest.cc > CMakeFiles/sample10_unittest.dir/samples/sample10_unittest.cc.i

googletest/CMakeFiles/sample10_unittest.dir/samples/sample10_unittest.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sample10_unittest.dir/samples/sample10_unittest.cc.s"
	cd /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/build_gtest/googletest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/googletest/googletest/samples/sample10_unittest.cc -o CMakeFiles/sample10_unittest.dir/samples/sample10_unittest.cc.s

# Object files for target sample10_unittest
sample10_unittest_OBJECTS = \
"CMakeFiles/sample10_unittest.dir/samples/sample10_unittest.cc.o"

# External object files for target sample10_unittest
sample10_unittest_EXTERNAL_OBJECTS =

googletest/sample10_unittest: googletest/CMakeFiles/sample10_unittest.dir/samples/sample10_unittest.cc.o
googletest/sample10_unittest: googletest/CMakeFiles/sample10_unittest.dir/build.make
googletest/sample10_unittest: lib/libgtest.a
googletest/sample10_unittest: googletest/CMakeFiles/sample10_unittest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/build_gtest/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sample10_unittest"
	cd /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/build_gtest/googletest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sample10_unittest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
googletest/CMakeFiles/sample10_unittest.dir/build: googletest/sample10_unittest

.PHONY : googletest/CMakeFiles/sample10_unittest.dir/build

googletest/CMakeFiles/sample10_unittest.dir/clean:
	cd /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/build_gtest/googletest && $(CMAKE_COMMAND) -P CMakeFiles/sample10_unittest.dir/cmake_clean.cmake
.PHONY : googletest/CMakeFiles/sample10_unittest.dir/clean

googletest/CMakeFiles/sample10_unittest.dir/depend:
	cd /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/build_gtest && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/googletest /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/googletest/googletest /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/build_gtest /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/build_gtest/googletest /home/eleve/Documents/MEDEVCMAKE/CMAKE-TP/build_gtest/googletest/CMakeFiles/sample10_unittest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : googletest/CMakeFiles/sample10_unittest.dir/depend

