CMake Version: 3.24.2


Valid Targets: 
    all (the default if no target is provided)
    clean
    depend
    edit_cache
    rebuild_cache
    hello_world
    hello.o
    hello.i
    hello.s


What Targets Produce:
    all: builds first valid target
    clean: gets rid of all object files
    hello.o: builds the object file
    hello.i: preprocesses c++ source file
    hello.s compiles c++ source code to assembly



The paths used by target-sources and target_include_directories are relative to the folder CMakeLists.txt is contained in, so the Lab 1 folder

CMake is a meta-build system that supports and can produce many different build systems, whereas ninja is a build system that produces an executable file. 

CMake should be run in its own directory so that the files it generates are contained and don't make a mess of our source code folder