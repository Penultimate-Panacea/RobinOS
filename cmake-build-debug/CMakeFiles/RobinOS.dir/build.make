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
include CMakeFiles/RobinOS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RobinOS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RobinOS.dir/flags.make

CMakeFiles/RobinOS.dir/main.cpp.o: CMakeFiles/RobinOS.dir/flags.make
CMakeFiles/RobinOS.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RobinOS.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RobinOS.dir/main.cpp.o -c /cygdrive/c/Users/Rian/CLionProjects/RobinOS/main.cpp

CMakeFiles/RobinOS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RobinOS.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Rian/CLionProjects/RobinOS/main.cpp > CMakeFiles/RobinOS.dir/main.cpp.i

CMakeFiles/RobinOS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RobinOS.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Rian/CLionProjects/RobinOS/main.cpp -o CMakeFiles/RobinOS.dir/main.cpp.s

CMakeFiles/RobinOS.dir/Processor.cpp.o: CMakeFiles/RobinOS.dir/flags.make
CMakeFiles/RobinOS.dir/Processor.cpp.o: ../Processor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RobinOS.dir/Processor.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RobinOS.dir/Processor.cpp.o -c /cygdrive/c/Users/Rian/CLionProjects/RobinOS/Processor.cpp

CMakeFiles/RobinOS.dir/Processor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RobinOS.dir/Processor.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Rian/CLionProjects/RobinOS/Processor.cpp > CMakeFiles/RobinOS.dir/Processor.cpp.i

CMakeFiles/RobinOS.dir/Processor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RobinOS.dir/Processor.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Rian/CLionProjects/RobinOS/Processor.cpp -o CMakeFiles/RobinOS.dir/Processor.cpp.s

CMakeFiles/RobinOS.dir/Process.cpp.o: CMakeFiles/RobinOS.dir/flags.make
CMakeFiles/RobinOS.dir/Process.cpp.o: ../Process.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RobinOS.dir/Process.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RobinOS.dir/Process.cpp.o -c /cygdrive/c/Users/Rian/CLionProjects/RobinOS/Process.cpp

CMakeFiles/RobinOS.dir/Process.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RobinOS.dir/Process.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Rian/CLionProjects/RobinOS/Process.cpp > CMakeFiles/RobinOS.dir/Process.cpp.i

CMakeFiles/RobinOS.dir/Process.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RobinOS.dir/Process.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Rian/CLionProjects/RobinOS/Process.cpp -o CMakeFiles/RobinOS.dir/Process.cpp.s

CMakeFiles/RobinOS.dir/CodeObject.cpp.o: CMakeFiles/RobinOS.dir/flags.make
CMakeFiles/RobinOS.dir/CodeObject.cpp.o: ../CodeObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RobinOS.dir/CodeObject.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RobinOS.dir/CodeObject.cpp.o -c /cygdrive/c/Users/Rian/CLionProjects/RobinOS/CodeObject.cpp

CMakeFiles/RobinOS.dir/CodeObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RobinOS.dir/CodeObject.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Rian/CLionProjects/RobinOS/CodeObject.cpp > CMakeFiles/RobinOS.dir/CodeObject.cpp.i

CMakeFiles/RobinOS.dir/CodeObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RobinOS.dir/CodeObject.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Rian/CLionProjects/RobinOS/CodeObject.cpp -o CMakeFiles/RobinOS.dir/CodeObject.cpp.s

CMakeFiles/RobinOS.dir/MemoryManager.cpp.o: CMakeFiles/RobinOS.dir/flags.make
CMakeFiles/RobinOS.dir/MemoryManager.cpp.o: ../MemoryManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/RobinOS.dir/MemoryManager.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RobinOS.dir/MemoryManager.cpp.o -c /cygdrive/c/Users/Rian/CLionProjects/RobinOS/MemoryManager.cpp

CMakeFiles/RobinOS.dir/MemoryManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RobinOS.dir/MemoryManager.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Rian/CLionProjects/RobinOS/MemoryManager.cpp > CMakeFiles/RobinOS.dir/MemoryManager.cpp.i

CMakeFiles/RobinOS.dir/MemoryManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RobinOS.dir/MemoryManager.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Rian/CLionProjects/RobinOS/MemoryManager.cpp -o CMakeFiles/RobinOS.dir/MemoryManager.cpp.s

CMakeFiles/RobinOS.dir/Strand.cpp.o: CMakeFiles/RobinOS.dir/flags.make
CMakeFiles/RobinOS.dir/Strand.cpp.o: ../Strand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/RobinOS.dir/Strand.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RobinOS.dir/Strand.cpp.o -c /cygdrive/c/Users/Rian/CLionProjects/RobinOS/Strand.cpp

CMakeFiles/RobinOS.dir/Strand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RobinOS.dir/Strand.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Rian/CLionProjects/RobinOS/Strand.cpp > CMakeFiles/RobinOS.dir/Strand.cpp.i

CMakeFiles/RobinOS.dir/Strand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RobinOS.dir/Strand.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Rian/CLionProjects/RobinOS/Strand.cpp -o CMakeFiles/RobinOS.dir/Strand.cpp.s

CMakeFiles/RobinOS.dir/MasterController.cpp.o: CMakeFiles/RobinOS.dir/flags.make
CMakeFiles/RobinOS.dir/MasterController.cpp.o: ../MasterController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/RobinOS.dir/MasterController.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RobinOS.dir/MasterController.cpp.o -c /cygdrive/c/Users/Rian/CLionProjects/RobinOS/MasterController.cpp

CMakeFiles/RobinOS.dir/MasterController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RobinOS.dir/MasterController.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Rian/CLionProjects/RobinOS/MasterController.cpp > CMakeFiles/RobinOS.dir/MasterController.cpp.i

CMakeFiles/RobinOS.dir/MasterController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RobinOS.dir/MasterController.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Rian/CLionProjects/RobinOS/MasterController.cpp -o CMakeFiles/RobinOS.dir/MasterController.cpp.s

# Object files for target RobinOS
RobinOS_OBJECTS = \
"CMakeFiles/RobinOS.dir/main.cpp.o" \
"CMakeFiles/RobinOS.dir/Processor.cpp.o" \
"CMakeFiles/RobinOS.dir/Process.cpp.o" \
"CMakeFiles/RobinOS.dir/CodeObject.cpp.o" \
"CMakeFiles/RobinOS.dir/MemoryManager.cpp.o" \
"CMakeFiles/RobinOS.dir/Strand.cpp.o" \
"CMakeFiles/RobinOS.dir/MasterController.cpp.o"

# External object files for target RobinOS
RobinOS_EXTERNAL_OBJECTS =

RobinOS.exe: CMakeFiles/RobinOS.dir/main.cpp.o
RobinOS.exe: CMakeFiles/RobinOS.dir/Processor.cpp.o
RobinOS.exe: CMakeFiles/RobinOS.dir/Process.cpp.o
RobinOS.exe: CMakeFiles/RobinOS.dir/CodeObject.cpp.o
RobinOS.exe: CMakeFiles/RobinOS.dir/MemoryManager.cpp.o
RobinOS.exe: CMakeFiles/RobinOS.dir/Strand.cpp.o
RobinOS.exe: CMakeFiles/RobinOS.dir/MasterController.cpp.o
RobinOS.exe: CMakeFiles/RobinOS.dir/build.make
RobinOS.exe: CMakeFiles/RobinOS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable RobinOS.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RobinOS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RobinOS.dir/build: RobinOS.exe

.PHONY : CMakeFiles/RobinOS.dir/build

CMakeFiles/RobinOS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RobinOS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RobinOS.dir/clean

CMakeFiles/RobinOS.dir/depend:
	cd /cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Rian/CLionProjects/RobinOS /cygdrive/c/Users/Rian/CLionProjects/RobinOS /cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug /cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug /cygdrive/c/Users/Rian/CLionProjects/RobinOS/cmake-build-debug/CMakeFiles/RobinOS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RobinOS.dir/depend
