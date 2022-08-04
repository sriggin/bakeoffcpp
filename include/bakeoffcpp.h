#pragma once

#ifdef _WIN32
  #define bakeoffcpp_EXPORT __declspec(dllexport)
#else
  #define bakeoffcpp_EXPORT
#endif

bakeoffcpp_EXPORT void bakeoffcpp();
