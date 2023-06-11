/*
 * log.h
 * Project joyc
 *
 * Logger system
 * ������־��io��д ʱ�亯�����
 */

#pragma once

//#include <tchar.h> // _T()

#ifdef _DEBUG
#define Error(fmt, ...) error_print(__FILE__, __LINE__, fmt, ##__VA_ARGS__)
#else
#define Error ((void)0)
#endif // _DEBUG

// exports c language
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

	void error_print(const char*, int, const char*, ...);

#ifdef __cplusplus
}
#endif // __cplusplus





