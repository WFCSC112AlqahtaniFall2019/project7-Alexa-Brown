# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\alexa\CLionProjects\project7-Alexa-Brown

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\alexa\CLionProjects\project7-Alexa-Brown\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/project7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/project7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project7.dir/flags.make

CMakeFiles/project7.dir/main.cpp.obj: CMakeFiles/project7.dir/flags.make
CMakeFiles/project7.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alexa\CLionProjects\project7-Alexa-Brown\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project7.dir/main.cpp.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\project7.dir\main.cpp.obj -c C:\Users\alexa\CLionProjects\project7-Alexa-Brown\main.cpp

CMakeFiles/project7.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project7.dir/main.cpp.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alexa\CLionProjects\project7-Alexa-Brown\main.cpp > CMakeFiles\project7.dir\main.cpp.i

CMakeFiles/project7.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project7.dir/main.cpp.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alexa\CLionProjects\project7-Alexa-Brown\main.cpp -o CMakeFiles\project7.dir\main.cpp.s

# Object files for target project7
project7_OBJECTS = \
"CMakeFiles/project7.dir/main.cpp.obj"

# External object files for target project7
project7_EXTERNAL_OBJECTS =

project7.exe: CMakeFiles/project7.dir/main.cpp.obj
project7.exe: CMakeFiles/project7.dir/build.make
project7.exe: CMakeFiles/project7.dir/linklibs.rsp
project7.exe: CMakeFiles/project7.dir/objects1.rsp
project7.exe: CMakeFiles/project7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\alexa\CLionProjects\project7-Alexa-Brown\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable project7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\project7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project7.dir/build: project7.exe

.PHONY : CMakeFiles/project7.dir/build

CMakeFiles/project7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\project7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/project7.dir/clean

CMakeFiles/project7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\alexa\CLionProjects\project7-Alexa-Brown C:\Users\alexa\CLionProjects\project7-Alexa-Brown C:\Users\alexa\CLionProjects\project7-Alexa-Brown\cmake-build-debug C:\Users\alexa\CLionProjects\project7-Alexa-Brown\cmake-build-debug C:\Users\alexa\CLionProjects\project7-Alexa-Brown\cmake-build-debug\CMakeFiles\project7.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project7.dir/depend
