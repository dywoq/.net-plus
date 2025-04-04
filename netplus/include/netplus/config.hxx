#ifndef _NETPLUS_CONFIG_HXX
#define _NETPLUS_CONFIG_HXX

#if defined(_MSC_VER)
#define _NETPLUS_EXPORT __declspec(dllexport)
#elif defined(__clang__) && defined(__GNUC__)
#define _NETPLUS_EXPORT __attribute__((visibility("default")))
#endif

#if defined(_MSC_VER)
#define _NETPLUS_HIDE
#elif defined(__clang__) && defined(__GNUC__)
#define _NETPLUS_HIDE __attribute__((visibility("hidden")))
#endif

#if __cplusplus >= 202002L
#define _NETPLUS_HAS_CXX20_MINIMUM_SUPPORT 1
#else
#define _NETPLUS_HAS_CXX20_MINIMUM_SUPPORT 0
#endif

#endif