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
CMAKE_COMMAND = /var/lib/snapd/snap/clion/139/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /var/lib/snapd/snap/clion/139/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adem/Bureau/programmation-linaire-en-nombres-entiers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adem/Bureau/programmation-linaire-en-nombres-entiers/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/programmation-linaire-en-nombres-entiers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/programmation-linaire-en-nombres-entiers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/programmation-linaire-en-nombres-entiers.dir/flags.make

CMakeFiles/programmation-linaire-en-nombres-entiers.dir/main.c.o: CMakeFiles/programmation-linaire-en-nombres-entiers.dir/flags.make
CMakeFiles/programmation-linaire-en-nombres-entiers.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adem/Bureau/programmation-linaire-en-nombres-entiers/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/programmation-linaire-en-nombres-entiers.dir/main.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/programmation-linaire-en-nombres-entiers.dir/main.c.o   -c /home/adem/Bureau/programmation-linaire-en-nombres-entiers/main.c

CMakeFiles/programmation-linaire-en-nombres-entiers.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/programmation-linaire-en-nombres-entiers.dir/main.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adem/Bureau/programmation-linaire-en-nombres-entiers/main.c > CMakeFiles/programmation-linaire-en-nombres-entiers.dir/main.c.i

CMakeFiles/programmation-linaire-en-nombres-entiers.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/programmation-linaire-en-nombres-entiers.dir/main.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adem/Bureau/programmation-linaire-en-nombres-entiers/main.c -o CMakeFiles/programmation-linaire-en-nombres-entiers.dir/main.c.s

# Object files for target programmation-linaire-en-nombres-entiers
programmation__linaire__en__nombres__entiers_OBJECTS = \
"CMakeFiles/programmation-linaire-en-nombres-entiers.dir/main.c.o"

# External object files for target programmation-linaire-en-nombres-entiers
programmation__linaire__en__nombres__entiers_EXTERNAL_OBJECTS =

programmation-linaire-en-nombres-entiers: CMakeFiles/programmation-linaire-en-nombres-entiers.dir/main.c.o
programmation-linaire-en-nombres-entiers: CMakeFiles/programmation-linaire-en-nombres-entiers.dir/build.make
programmation-linaire-en-nombres-entiers: CMakeFiles/programmation-linaire-en-nombres-entiers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adem/Bureau/programmation-linaire-en-nombres-entiers/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable programmation-linaire-en-nombres-entiers"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/programmation-linaire-en-nombres-entiers.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/programmation-linaire-en-nombres-entiers.dir/build: programmation-linaire-en-nombres-entiers

.PHONY : CMakeFiles/programmation-linaire-en-nombres-entiers.dir/build

CMakeFiles/programmation-linaire-en-nombres-entiers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/programmation-linaire-en-nombres-entiers.dir/cmake_clean.cmake
.PHONY : CMakeFiles/programmation-linaire-en-nombres-entiers.dir/clean

CMakeFiles/programmation-linaire-en-nombres-entiers.dir/depend:
	cd /home/adem/Bureau/programmation-linaire-en-nombres-entiers/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adem/Bureau/programmation-linaire-en-nombres-entiers /home/adem/Bureau/programmation-linaire-en-nombres-entiers /home/adem/Bureau/programmation-linaire-en-nombres-entiers/cmake-build-debug /home/adem/Bureau/programmation-linaire-en-nombres-entiers/cmake-build-debug /home/adem/Bureau/programmation-linaire-en-nombres-entiers/cmake-build-debug/CMakeFiles/programmation-linaire-en-nombres-entiers.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/programmation-linaire-en-nombres-entiers.dir/depend

