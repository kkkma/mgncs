/**
 * This file includes all the declaration of ncs windows.
 *
 * Please don't modify it.
 * 
 * This file is autogenerated by mStudio.
 *
 * NOTE: ANY WORD WRITTEN BY USER WOULD BE DELETE BY MSTUDIO !
 *
 */

#ifndef NCS_MAINWNDS_H
#define NCS_MAINWNDS_H

#ifdef __cpluspus
extern "C" {
#endif

/**
 * If you want to export these ncs main window function
 * to other libraries, please predefined marco NCS_WND_EXPORT, 
 */
#ifndef NCS_WND_EXPORT
#define NCS_WND_EXPORT
#endif

/**
 * If you want to pass a speical structure pointer by 'user_data'
 * to a main window, please modify the ncs-window-types.h.
 *
 */
#include "ncs-window-types.h"



/** define the function for ID_OPENDS */
extern NCS_WND_EXPORT 
mMainWnd * ntCreateOpendsEx(HPACKAGE package, HWND hParent, HICON h_icon, HMENU h_menu, DWORD user_dat);
#define ntCreateOpends(package, hParent, user_data) \
	ntCreateOpendsEx(package, hParent, (HICON)0, (HMENU)0, (DWORD)(user_data))


/** define the function for ID_MAINSELECT */
extern NCS_WND_EXPORT 
mMainWnd * ntCreateMainselectEx(HPACKAGE package, HWND hParent, HICON h_icon, HMENU h_menu, DWORD user_dat);
#define ntCreateMainselect(package, hParent, user_data) \
	ntCreateMainselectEx(package, hParent, (HICON)0, (HMENU)0, (DWORD)(user_data))


/** define the function for ID_MAINWND1 */
extern NCS_WND_EXPORT 
mMainWnd * ntCreateMainwnd1Ex(HPACKAGE package, HWND hParent, HICON h_icon, HMENU h_menu, DWORD user_dat);
#define ntCreateMainwnd1(package, hParent, user_data) \
	ntCreateMainwnd1Ex(package, hParent, (HICON)0, (HMENU)0, (DWORD)(user_data))


/** define the start window */
#define ntStartWindowEx  ntCreateMainwnd1Ex
#define ntStartWindow(package, hParent, user_data) \
	ntStartWindowEx(package, hParent, (HICON)0, (HMENU)0, (DWORD)(user_data))


#ifdef __cplusplus
}
#endif

#endif /* end of window list */

