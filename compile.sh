#!/bin/bash

rm -rf build
cmake -G Ninja -S . -B build
cmake --build build
