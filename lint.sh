#!/bin/bash
find ./ -iname '*.cpp' | xargs astyle
find ./ -iname '*.cpp.orig' | xargs rm -rf
