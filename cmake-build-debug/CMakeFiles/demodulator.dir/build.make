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
CMAKE_COMMAND = /snap/clion/139/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/139/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/artem/CLionProjects/demodulator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/artem/CLionProjects/demodulator/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/demodulator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/demodulator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/demodulator.dir/flags.make

CMakeFiles/demodulator.dir/main.cpp.o: CMakeFiles/demodulator.dir/flags.make
CMakeFiles/demodulator.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/artem/CLionProjects/demodulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/demodulator.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/demodulator.dir/main.cpp.o -c /home/artem/CLionProjects/demodulator/main.cpp

CMakeFiles/demodulator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demodulator.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/artem/CLionProjects/demodulator/main.cpp > CMakeFiles/demodulator.dir/main.cpp.i

CMakeFiles/demodulator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demodulator.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/artem/CLionProjects/demodulator/main.cpp -o CMakeFiles/demodulator.dir/main.cpp.s

# Object files for target demodulator
demodulator_OBJECTS = \
"CMakeFiles/demodulator.dir/main.cpp.o"

# External object files for target demodulator
demodulator_EXTERNAL_OBJECTS =

demodulator: CMakeFiles/demodulator.dir/main.cpp.o
demodulator: CMakeFiles/demodulator.dir/build.make
demodulator: CMakeFiles/demodulator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/artem/CLionProjects/demodulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable demodulator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/demodulator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/demodulator.dir/build: demodulator

.PHONY : CMakeFiles/demodulator.dir/build

CMakeFiles/demodulator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/demodulator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/demodulator.dir/clean

CMakeFiles/demodulator.dir/depend:
	cd /home/artem/CLionProjects/demodulator/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/artem/CLionProjects/demodulator /home/artem/CLionProjects/demodulator /home/artem/CLionProjects/demodulator/cmake-build-debug /home/artem/CLionProjects/demodulator/cmake-build-debug /home/artem/CLionProjects/demodulator/cmake-build-debug/CMakeFiles/demodulator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/demodulator.dir/depend

