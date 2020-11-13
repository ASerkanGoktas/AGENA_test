# Building a Shape Library and writing unit tests for it

Tested on OSX (Catalina 10.15.6) and Linux (Ubuntu 16.04).

# Download

```git clone https://github.com/ASerkanGoktas/AGENA_test.git --recursive```

# Usage

First you should ```mkdir build && cd build```. Then, to run cmake you should ```cmake ..```. After this, the make file is built.
You can run ```make``` and build the library. To build the tests, ```cd test``` and run ```make```. You can now uses ctest to run the tests. You can use below shell scripts to automatize these instructions.

# Build

Run ```bash run_build.sh```

# Run tests

Run ```bash run_tests.sh```

# Clean

Run ```bash clean_build.sh```

# Dependencies

* CMake version 3.17 or higher
* Default compiler support for C++11
