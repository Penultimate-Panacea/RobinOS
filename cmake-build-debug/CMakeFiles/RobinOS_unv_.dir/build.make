# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /cygdrive/c/Users/Rian/.CLion2018.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Rian/.CLion2018.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/Rian/CLionProjects/RobinOS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RobinOS_unv_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RobinOS_unv_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RobinOS_unv_.dir/flags.make

CMakeFiles/RobinOS_unv_.dir/main.cpp.o: CMakeFiles/RobinOS_unv_.dir/flags.make
CMakeFiles/RobinOS_unv_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RobinOS_unv_.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RobinOS_unv_.dir/main.cpp.o -c /cygdrive/c/Users/Rian/CLionProjects/RobinOS/main.cpp

CMakeFiles/RobinOS_unv_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RobinOS_unv_.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Rian/CLionProjects/RobinOS/main.cpp > CMakeFiles/RobinOS_unv_.dir/main.cpp.i

CMakeFiles/RobinOS_unv_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RobinOS_unv_.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Rian/CLionProjects/RobinOS/main.cpp -o CMakeFiles/RobinOS_unv_.dir/main.cpp.s

CMakeFiles/RobinOS_unv_.dir/processor.cpp.o: CMakeFiles/RobinOS_unv_.dir/flags.make
CMakeFiles/RobinOS_unv_.dir/processor.cpp.o: ../processor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RobinOS_unv_.dir/processor.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RobinOS_unv_.dir/processor.cpp.o -c /cygdrive/c/Users/Rian/CLionProjects/RobinOS/processor.cpp

CMakeFiles/RobinOS_unv_.dir/processor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RobinOS_unv_.dir/processor.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Rian/CLionProjects/RobinOS/processor.cpp > CMakeFiles/RobinOS_unv_.dir/processor.cpp.i

CMakeFiles/RobinOS_unv_.dir/processor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RobinOS_unv_.dir/processor.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Rian/CLionProjects/RobinOS/processor.cpp -o CMakeFiles/RobinOS_unv_.dir/processor.cpp.s

# Object files for target RobinOS_unv_
RobinOS_unv__OBJECTS = \
"CMakeFiles/RobinOS_unv_.dir/main.cpp.o" \
"CMakeFiles/RobinOS_unv_.dir/processor.cpp.o"

# External object files for target RobinOS_unv_
RobinOS_unv__EXTERNAL_OBJECTS =

RobinOS_unv_.exe: CMakeFiles/RobinOS_unv_.dir/main.cpp.o
RobinOS_unv_.exe: CMakeFiles/RobinOS_unv_.dir/processor.cpp.o
RobinOS_unv_.exe: CMakeFiles/RobinOS_unv_.dir/build.make
RobinOS_unv_.exe: CMakeFiles/RobinOS_unv_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable RobinOS_unv_.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RobinOS_unv_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RobinOS_unv_.dir/build: RobinOS_unv_.exe

.PHONY : CMakeFiles/RobinOS_unv_.dir/build

CMakeFiles/RobinOS_unv_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RobinOS_unv_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RobinOS_unv_.dir/clean

CMakeFiles/RobinOS_unv_.dir/depend:
	cd /cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Rian/CLionProjects/RobinOS /cygdrive/c/Users/Rian/CLionProjects/RobinOS /cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug /cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug /cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug/CMakeFiles/RobinOS_unv_.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RobinOS_unv_.dir/depend

