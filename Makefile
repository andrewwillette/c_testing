.PHONY: all test clean build

build:
	mkdir build
	cd build; cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..; make

test: clean build
	cd build; ctest

run: clean build
	cd build; ./ctesting

clean:
	rm -rf build
