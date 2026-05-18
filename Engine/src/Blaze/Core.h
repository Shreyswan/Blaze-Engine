#pragma once
#ifdef _WIN32
    #ifdef ENGINE_BUILD
        #define ENGINE_API __declspec(dllexport)
    #else
        #define ENGINE_API __declspec(dllimport)
    #endif
#else
    #ifdef ENGINE_BUILD
        #define ENGINE_API __attribute__((visibility("default")))
    #else
        #define ENGINE_API
    #endif
#endif
