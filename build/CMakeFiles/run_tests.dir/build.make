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
CMAKE_SOURCE_DIR = /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/build

# Include any dependencies generated for this target.
include CMakeFiles/run_tests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/run_tests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/run_tests.dir/flags.make

CMakeFiles/run_tests.dir/tests/gtests.cpp.o: CMakeFiles/run_tests.dir/flags.make
CMakeFiles/run_tests.dir/tests/gtests.cpp.o: ../tests/gtests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/run_tests.dir/tests/gtests.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_tests.dir/tests/gtests.cpp.o -c /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/tests/gtests.cpp

CMakeFiles/run_tests.dir/tests/gtests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_tests.dir/tests/gtests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/tests/gtests.cpp > CMakeFiles/run_tests.dir/tests/gtests.cpp.i

CMakeFiles/run_tests.dir/tests/gtests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_tests.dir/tests/gtests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/tests/gtests.cpp -o CMakeFiles/run_tests.dir/tests/gtests.cpp.s

CMakeFiles/run_tests.dir/src/Bateau.cpp.o: CMakeFiles/run_tests.dir/flags.make
CMakeFiles/run_tests.dir/src/Bateau.cpp.o: ../src/Bateau.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/run_tests.dir/src/Bateau.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_tests.dir/src/Bateau.cpp.o -c /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/src/Bateau.cpp

CMakeFiles/run_tests.dir/src/Bateau.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_tests.dir/src/Bateau.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/src/Bateau.cpp > CMakeFiles/run_tests.dir/src/Bateau.cpp.i

CMakeFiles/run_tests.dir/src/Bateau.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_tests.dir/src/Bateau.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/src/Bateau.cpp -o CMakeFiles/run_tests.dir/src/Bateau.cpp.s

CMakeFiles/run_tests.dir/src/Grille.cpp.o: CMakeFiles/run_tests.dir/flags.make
CMakeFiles/run_tests.dir/src/Grille.cpp.o: ../src/Grille.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/run_tests.dir/src/Grille.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_tests.dir/src/Grille.cpp.o -c /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/src/Grille.cpp

CMakeFiles/run_tests.dir/src/Grille.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_tests.dir/src/Grille.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/src/Grille.cpp > CMakeFiles/run_tests.dir/src/Grille.cpp.i

CMakeFiles/run_tests.dir/src/Grille.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_tests.dir/src/Grille.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/src/Grille.cpp -o CMakeFiles/run_tests.dir/src/Grille.cpp.s

CMakeFiles/run_tests.dir/src/flotte.cpp.o: CMakeFiles/run_tests.dir/flags.make
CMakeFiles/run_tests.dir/src/flotte.cpp.o: ../src/flotte.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/run_tests.dir/src/flotte.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_tests.dir/src/flotte.cpp.o -c /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/src/flotte.cpp

CMakeFiles/run_tests.dir/src/flotte.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_tests.dir/src/flotte.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/src/flotte.cpp > CMakeFiles/run_tests.dir/src/flotte.cpp.i

CMakeFiles/run_tests.dir/src/flotte.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_tests.dir/src/flotte.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/src/flotte.cpp -o CMakeFiles/run_tests.dir/src/flotte.cpp.s

CMakeFiles/run_tests.dir/src/tir_util.cpp.o: CMakeFiles/run_tests.dir/flags.make
CMakeFiles/run_tests.dir/src/tir_util.cpp.o: ../src/tir_util.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/run_tests.dir/src/tir_util.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_tests.dir/src/tir_util.cpp.o -c /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/src/tir_util.cpp

CMakeFiles/run_tests.dir/src/tir_util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_tests.dir/src/tir_util.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/src/tir_util.cpp > CMakeFiles/run_tests.dir/src/tir_util.cpp.i

CMakeFiles/run_tests.dir/src/tir_util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_tests.dir/src/tir_util.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/src/tir_util.cpp -o CMakeFiles/run_tests.dir/src/tir_util.cpp.s

# Object files for target run_tests
run_tests_OBJECTS = \
"CMakeFiles/run_tests.dir/tests/gtests.cpp.o" \
"CMakeFiles/run_tests.dir/src/Bateau.cpp.o" \
"CMakeFiles/run_tests.dir/src/Grille.cpp.o" \
"CMakeFiles/run_tests.dir/src/flotte.cpp.o" \
"CMakeFiles/run_tests.dir/src/tir_util.cpp.o"

# External object files for target run_tests
run_tests_EXTERNAL_OBJECTS =

run_tests: CMakeFiles/run_tests.dir/tests/gtests.cpp.o
run_tests: CMakeFiles/run_tests.dir/src/Bateau.cpp.o
run_tests: CMakeFiles/run_tests.dir/src/Grille.cpp.o
run_tests: CMakeFiles/run_tests.dir/src/flotte.cpp.o
run_tests: CMakeFiles/run_tests.dir/src/tir_util.cpp.o
run_tests: CMakeFiles/run_tests.dir/build.make
run_tests: /usr/lib/x86_64-linux-gnu/libGL.so
run_tests: /usr/lib/x86_64-linux-gnu/libGLU.so
run_tests: /usr/lib/x86_64-linux-gnu/libglut.so
run_tests: ../build_gtest/lib/libgtest.a
run_tests: CMakeFiles/run_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable run_tests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/run_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/run_tests.dir/build: run_tests

.PHONY : CMakeFiles/run_tests.dir/build

CMakeFiles/run_tests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/run_tests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/run_tests.dir/clean

CMakeFiles/run_tests.dir/depend:
	cd /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/build /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/build /home/eleve/Documents/MEDEV/TP_BatailleNavale/TP_BatailleNavale/build/CMakeFiles/run_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/run_tests.dir/depend

