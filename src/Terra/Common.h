#ifndef TERRA_COMMON_H_
#define TERRA_COMMON_H_

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#define TERRA_PLATFORM_WINDOWS
#ifndef _WIN64
#error "64-bit is reqired for Windows"
#endif
#elif defined(__linux__) || defined(__gnu_linux__)
#define TERRA_PLATFORM_LINUX
#else
#error "Unknown platform"
#endif

#ifdef EXPORT_API
#ifdef _MSC_VER
#define API __declspec(dllexport)
#else
#define API __attribute__((visibility("default")))
#endif
#else
#ifdef _MSC_VER
#define API __declspec(dllimport)
#else
#define API
#endif
#endif

#endif  // TERRA_COMMON_H_
