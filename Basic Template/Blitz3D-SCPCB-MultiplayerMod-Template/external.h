#pragma once

#include <iostream>

#define EXTERNAL(datatype) extern "C" __declspec(dllexport) datatype __stdcall

EXTERNAL(void) TestFunc1();

EXTERNAL(void) TestFunc2(const char* message);