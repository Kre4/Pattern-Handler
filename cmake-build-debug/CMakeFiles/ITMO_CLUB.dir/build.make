# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\JetBrains\Projects\ITMO-CLUB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\JetBrains\Projects\ITMO-CLUB\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ITMO_CLUB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ITMO_CLUB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ITMO_CLUB.dir/flags.make

CMakeFiles/ITMO_CLUB.dir/main.cpp.obj: CMakeFiles/ITMO_CLUB.dir/flags.make
CMakeFiles/ITMO_CLUB.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\JetBrains\Projects\ITMO-CLUB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ITMO_CLUB.dir/main.cpp.obj"
	C:\MINGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ITMO_CLUB.dir\main.cpp.obj -c C:\JetBrains\Projects\ITMO-CLUB\main.cpp

CMakeFiles/ITMO_CLUB.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ITMO_CLUB.dir/main.cpp.i"
	C:\MINGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\JetBrains\Projects\ITMO-CLUB\main.cpp > CMakeFiles\ITMO_CLUB.dir\main.cpp.i

CMakeFiles/ITMO_CLUB.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ITMO_CLUB.dir/main.cpp.s"
	C:\MINGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\JetBrains\Projects\ITMO-CLUB\main.cpp -o CMakeFiles\ITMO_CLUB.dir\main.cpp.s

CMakeFiles/ITMO_CLUB.dir/ExpandedText.cpp.obj: CMakeFiles/ITMO_CLUB.dir/flags.make
CMakeFiles/ITMO_CLUB.dir/ExpandedText.cpp.obj: ../ExpandedText.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\JetBrains\Projects\ITMO-CLUB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ITMO_CLUB.dir/ExpandedText.cpp.obj"
	C:\MINGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ITMO_CLUB.dir\ExpandedText.cpp.obj -c C:\JetBrains\Projects\ITMO-CLUB\ExpandedText.cpp

CMakeFiles/ITMO_CLUB.dir/ExpandedText.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ITMO_CLUB.dir/ExpandedText.cpp.i"
	C:\MINGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\JetBrains\Projects\ITMO-CLUB\ExpandedText.cpp > CMakeFiles\ITMO_CLUB.dir\ExpandedText.cpp.i

CMakeFiles/ITMO_CLUB.dir/ExpandedText.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ITMO_CLUB.dir/ExpandedText.cpp.s"
	C:\MINGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\JetBrains\Projects\ITMO-CLUB\ExpandedText.cpp -o CMakeFiles\ITMO_CLUB.dir\ExpandedText.cpp.s

# Object files for target ITMO_CLUB
ITMO_CLUB_OBJECTS = \
"CMakeFiles/ITMO_CLUB.dir/main.cpp.obj" \
"CMakeFiles/ITMO_CLUB.dir/ExpandedText.cpp.obj"

# External object files for target ITMO_CLUB
ITMO_CLUB_EXTERNAL_OBJECTS =

ITMO_CLUB.exe: CMakeFiles/ITMO_CLUB.dir/main.cpp.obj
ITMO_CLUB.exe: CMakeFiles/ITMO_CLUB.dir/ExpandedText.cpp.obj
ITMO_CLUB.exe: CMakeFiles/ITMO_CLUB.dir/build.make
ITMO_CLUB.exe: CMakeFiles/ITMO_CLUB.dir/linklibs.rsp
ITMO_CLUB.exe: CMakeFiles/ITMO_CLUB.dir/objects1.rsp
ITMO_CLUB.exe: CMakeFiles/ITMO_CLUB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\JetBrains\Projects\ITMO-CLUB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ITMO_CLUB.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ITMO_CLUB.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ITMO_CLUB.dir/build: ITMO_CLUB.exe

.PHONY : CMakeFiles/ITMO_CLUB.dir/build

CMakeFiles/ITMO_CLUB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ITMO_CLUB.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ITMO_CLUB.dir/clean

CMakeFiles/ITMO_CLUB.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\JetBrains\Projects\ITMO-CLUB C:\JetBrains\Projects\ITMO-CLUB C:\JetBrains\Projects\ITMO-CLUB\cmake-build-debug C:\JetBrains\Projects\ITMO-CLUB\cmake-build-debug C:\JetBrains\Projects\ITMO-CLUB\cmake-build-debug\CMakeFiles\ITMO_CLUB.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ITMO_CLUB.dir/depend
