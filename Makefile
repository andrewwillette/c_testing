.PHONY: all test clean

test:
	rm -rf build
	mkdir build
	cd build; cmake ..; make; ctest
