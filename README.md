# c_testing

A repository to test C code. The initial setup was based off of [this document](https://notes.eatonphil.com/unit-testing-c-code-with-gtest.html).

To run the tests:

```
rm -rf build
mkdir build
cd build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..
make
ctest
```
