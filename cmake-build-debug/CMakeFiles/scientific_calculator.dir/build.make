# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\FLORIN\Desktop\scientific_calculator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\FLORIN\Desktop\scientific_calculator\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/scientific_calculator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/scientific_calculator.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/scientific_calculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/scientific_calculator.dir/flags.make

CMakeFiles/scientific_calculator.dir/main.cpp.obj: CMakeFiles/scientific_calculator.dir/flags.make
CMakeFiles/scientific_calculator.dir/main.cpp.obj: ../main.cpp
CMakeFiles/scientific_calculator.dir/main.cpp.obj: CMakeFiles/scientific_calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\FLORIN\Desktop\scientific_calculator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/scientific_calculator.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scientific_calculator.dir/main.cpp.obj -MF CMakeFiles\scientific_calculator.dir\main.cpp.obj.d -o CMakeFiles\scientific_calculator.dir\main.cpp.obj -c C:\Users\FLORIN\Desktop\scientific_calculator\main.cpp

CMakeFiles/scientific_calculator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scientific_calculator.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\FLORIN\Desktop\scientific_calculator\main.cpp > CMakeFiles\scientific_calculator.dir\main.cpp.i

CMakeFiles/scientific_calculator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scientific_calculator.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\FLORIN\Desktop\scientific_calculator\main.cpp -o CMakeFiles\scientific_calculator.dir\main.cpp.s

CMakeFiles/scientific_calculator.dir/Calculator.cpp.obj: CMakeFiles/scientific_calculator.dir/flags.make
CMakeFiles/scientific_calculator.dir/Calculator.cpp.obj: ../Calculator.cpp
CMakeFiles/scientific_calculator.dir/Calculator.cpp.obj: CMakeFiles/scientific_calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\FLORIN\Desktop\scientific_calculator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/scientific_calculator.dir/Calculator.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scientific_calculator.dir/Calculator.cpp.obj -MF CMakeFiles\scientific_calculator.dir\Calculator.cpp.obj.d -o CMakeFiles\scientific_calculator.dir\Calculator.cpp.obj -c C:\Users\FLORIN\Desktop\scientific_calculator\Calculator.cpp

CMakeFiles/scientific_calculator.dir/Calculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scientific_calculator.dir/Calculator.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\FLORIN\Desktop\scientific_calculator\Calculator.cpp > CMakeFiles\scientific_calculator.dir\Calculator.cpp.i

CMakeFiles/scientific_calculator.dir/Calculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scientific_calculator.dir/Calculator.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\FLORIN\Desktop\scientific_calculator\Calculator.cpp -o CMakeFiles\scientific_calculator.dir\Calculator.cpp.s

CMakeFiles/scientific_calculator.dir/Shunting_Yard.cpp.obj: CMakeFiles/scientific_calculator.dir/flags.make
CMakeFiles/scientific_calculator.dir/Shunting_Yard.cpp.obj: ../Shunting_Yard.cpp
CMakeFiles/scientific_calculator.dir/Shunting_Yard.cpp.obj: CMakeFiles/scientific_calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\FLORIN\Desktop\scientific_calculator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/scientific_calculator.dir/Shunting_Yard.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scientific_calculator.dir/Shunting_Yard.cpp.obj -MF CMakeFiles\scientific_calculator.dir\Shunting_Yard.cpp.obj.d -o CMakeFiles\scientific_calculator.dir\Shunting_Yard.cpp.obj -c C:\Users\FLORIN\Desktop\scientific_calculator\Shunting_Yard.cpp

CMakeFiles/scientific_calculator.dir/Shunting_Yard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scientific_calculator.dir/Shunting_Yard.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\FLORIN\Desktop\scientific_calculator\Shunting_Yard.cpp > CMakeFiles\scientific_calculator.dir\Shunting_Yard.cpp.i

CMakeFiles/scientific_calculator.dir/Shunting_Yard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scientific_calculator.dir/Shunting_Yard.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\FLORIN\Desktop\scientific_calculator\Shunting_Yard.cpp -o CMakeFiles\scientific_calculator.dir\Shunting_Yard.cpp.s

CMakeFiles/scientific_calculator.dir/Stack.cpp.obj: CMakeFiles/scientific_calculator.dir/flags.make
CMakeFiles/scientific_calculator.dir/Stack.cpp.obj: ../Stack.cpp
CMakeFiles/scientific_calculator.dir/Stack.cpp.obj: CMakeFiles/scientific_calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\FLORIN\Desktop\scientific_calculator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/scientific_calculator.dir/Stack.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scientific_calculator.dir/Stack.cpp.obj -MF CMakeFiles\scientific_calculator.dir\Stack.cpp.obj.d -o CMakeFiles\scientific_calculator.dir\Stack.cpp.obj -c C:\Users\FLORIN\Desktop\scientific_calculator\Stack.cpp

CMakeFiles/scientific_calculator.dir/Stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scientific_calculator.dir/Stack.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\FLORIN\Desktop\scientific_calculator\Stack.cpp > CMakeFiles\scientific_calculator.dir\Stack.cpp.i

CMakeFiles/scientific_calculator.dir/Stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scientific_calculator.dir/Stack.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\FLORIN\Desktop\scientific_calculator\Stack.cpp -o CMakeFiles\scientific_calculator.dir\Stack.cpp.s

CMakeFiles/scientific_calculator.dir/EquationSolver.cpp.obj: CMakeFiles/scientific_calculator.dir/flags.make
CMakeFiles/scientific_calculator.dir/EquationSolver.cpp.obj: ../EquationSolver.cpp
CMakeFiles/scientific_calculator.dir/EquationSolver.cpp.obj: CMakeFiles/scientific_calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\FLORIN\Desktop\scientific_calculator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/scientific_calculator.dir/EquationSolver.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scientific_calculator.dir/EquationSolver.cpp.obj -MF CMakeFiles\scientific_calculator.dir\EquationSolver.cpp.obj.d -o CMakeFiles\scientific_calculator.dir\EquationSolver.cpp.obj -c C:\Users\FLORIN\Desktop\scientific_calculator\EquationSolver.cpp

CMakeFiles/scientific_calculator.dir/EquationSolver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scientific_calculator.dir/EquationSolver.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\FLORIN\Desktop\scientific_calculator\EquationSolver.cpp > CMakeFiles\scientific_calculator.dir\EquationSolver.cpp.i

CMakeFiles/scientific_calculator.dir/EquationSolver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scientific_calculator.dir/EquationSolver.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\FLORIN\Desktop\scientific_calculator\EquationSolver.cpp -o CMakeFiles\scientific_calculator.dir\EquationSolver.cpp.s

CMakeFiles/scientific_calculator.dir/FileHandler.cpp.obj: CMakeFiles/scientific_calculator.dir/flags.make
CMakeFiles/scientific_calculator.dir/FileHandler.cpp.obj: ../FileHandler.cpp
CMakeFiles/scientific_calculator.dir/FileHandler.cpp.obj: CMakeFiles/scientific_calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\FLORIN\Desktop\scientific_calculator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/scientific_calculator.dir/FileHandler.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scientific_calculator.dir/FileHandler.cpp.obj -MF CMakeFiles\scientific_calculator.dir\FileHandler.cpp.obj.d -o CMakeFiles\scientific_calculator.dir\FileHandler.cpp.obj -c C:\Users\FLORIN\Desktop\scientific_calculator\FileHandler.cpp

CMakeFiles/scientific_calculator.dir/FileHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scientific_calculator.dir/FileHandler.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\FLORIN\Desktop\scientific_calculator\FileHandler.cpp > CMakeFiles\scientific_calculator.dir\FileHandler.cpp.i

CMakeFiles/scientific_calculator.dir/FileHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scientific_calculator.dir/FileHandler.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\FLORIN\Desktop\scientific_calculator\FileHandler.cpp -o CMakeFiles\scientific_calculator.dir\FileHandler.cpp.s

CMakeFiles/scientific_calculator.dir/TextFileHandler.cpp.obj: CMakeFiles/scientific_calculator.dir/flags.make
CMakeFiles/scientific_calculator.dir/TextFileHandler.cpp.obj: ../TextFileHandler.cpp
CMakeFiles/scientific_calculator.dir/TextFileHandler.cpp.obj: CMakeFiles/scientific_calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\FLORIN\Desktop\scientific_calculator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/scientific_calculator.dir/TextFileHandler.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scientific_calculator.dir/TextFileHandler.cpp.obj -MF CMakeFiles\scientific_calculator.dir\TextFileHandler.cpp.obj.d -o CMakeFiles\scientific_calculator.dir\TextFileHandler.cpp.obj -c C:\Users\FLORIN\Desktop\scientific_calculator\TextFileHandler.cpp

CMakeFiles/scientific_calculator.dir/TextFileHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scientific_calculator.dir/TextFileHandler.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\FLORIN\Desktop\scientific_calculator\TextFileHandler.cpp > CMakeFiles\scientific_calculator.dir\TextFileHandler.cpp.i

CMakeFiles/scientific_calculator.dir/TextFileHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scientific_calculator.dir/TextFileHandler.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\FLORIN\Desktop\scientific_calculator\TextFileHandler.cpp -o CMakeFiles\scientific_calculator.dir\TextFileHandler.cpp.s

CMakeFiles/scientific_calculator.dir/BinaryFileHandler.cpp.obj: CMakeFiles/scientific_calculator.dir/flags.make
CMakeFiles/scientific_calculator.dir/BinaryFileHandler.cpp.obj: ../BinaryFileHandler.cpp
CMakeFiles/scientific_calculator.dir/BinaryFileHandler.cpp.obj: CMakeFiles/scientific_calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\FLORIN\Desktop\scientific_calculator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/scientific_calculator.dir/BinaryFileHandler.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scientific_calculator.dir/BinaryFileHandler.cpp.obj -MF CMakeFiles\scientific_calculator.dir\BinaryFileHandler.cpp.obj.d -o CMakeFiles\scientific_calculator.dir\BinaryFileHandler.cpp.obj -c C:\Users\FLORIN\Desktop\scientific_calculator\BinaryFileHandler.cpp

CMakeFiles/scientific_calculator.dir/BinaryFileHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scientific_calculator.dir/BinaryFileHandler.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\FLORIN\Desktop\scientific_calculator\BinaryFileHandler.cpp > CMakeFiles\scientific_calculator.dir\BinaryFileHandler.cpp.i

CMakeFiles/scientific_calculator.dir/BinaryFileHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scientific_calculator.dir/BinaryFileHandler.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\FLORIN\Desktop\scientific_calculator\BinaryFileHandler.cpp -o CMakeFiles\scientific_calculator.dir\BinaryFileHandler.cpp.s

# Object files for target scientific_calculator
scientific_calculator_OBJECTS = \
"CMakeFiles/scientific_calculator.dir/main.cpp.obj" \
"CMakeFiles/scientific_calculator.dir/Calculator.cpp.obj" \
"CMakeFiles/scientific_calculator.dir/Shunting_Yard.cpp.obj" \
"CMakeFiles/scientific_calculator.dir/Stack.cpp.obj" \
"CMakeFiles/scientific_calculator.dir/EquationSolver.cpp.obj" \
"CMakeFiles/scientific_calculator.dir/FileHandler.cpp.obj" \
"CMakeFiles/scientific_calculator.dir/TextFileHandler.cpp.obj" \
"CMakeFiles/scientific_calculator.dir/BinaryFileHandler.cpp.obj"

# External object files for target scientific_calculator
scientific_calculator_EXTERNAL_OBJECTS =

scientific_calculator.exe: CMakeFiles/scientific_calculator.dir/main.cpp.obj
scientific_calculator.exe: CMakeFiles/scientific_calculator.dir/Calculator.cpp.obj
scientific_calculator.exe: CMakeFiles/scientific_calculator.dir/Shunting_Yard.cpp.obj
scientific_calculator.exe: CMakeFiles/scientific_calculator.dir/Stack.cpp.obj
scientific_calculator.exe: CMakeFiles/scientific_calculator.dir/EquationSolver.cpp.obj
scientific_calculator.exe: CMakeFiles/scientific_calculator.dir/FileHandler.cpp.obj
scientific_calculator.exe: CMakeFiles/scientific_calculator.dir/TextFileHandler.cpp.obj
scientific_calculator.exe: CMakeFiles/scientific_calculator.dir/BinaryFileHandler.cpp.obj
scientific_calculator.exe: CMakeFiles/scientific_calculator.dir/build.make
scientific_calculator.exe: CMakeFiles/scientific_calculator.dir/linklibs.rsp
scientific_calculator.exe: CMakeFiles/scientific_calculator.dir/objects1.rsp
scientific_calculator.exe: CMakeFiles/scientific_calculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\FLORIN\Desktop\scientific_calculator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable scientific_calculator.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\scientific_calculator.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/scientific_calculator.dir/build: scientific_calculator.exe
.PHONY : CMakeFiles/scientific_calculator.dir/build

CMakeFiles/scientific_calculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\scientific_calculator.dir\cmake_clean.cmake
.PHONY : CMakeFiles/scientific_calculator.dir/clean

CMakeFiles/scientific_calculator.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\FLORIN\Desktop\scientific_calculator C:\Users\FLORIN\Desktop\scientific_calculator C:\Users\FLORIN\Desktop\scientific_calculator\cmake-build-debug C:\Users\FLORIN\Desktop\scientific_calculator\cmake-build-debug C:\Users\FLORIN\Desktop\scientific_calculator\cmake-build-debug\CMakeFiles\scientific_calculator.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/scientific_calculator.dir/depend

