#ifdef  COLOR_MSG_RED
#undef  COLOR_MSG_RED
#endif
#define COLOR_MSG_RED       "\x1B[1;31m"

#ifdef  COLOR_MSG_GREEN
#undef  COLOR_MSG_GREEN
#endif
#define COLOR_MSG_GREEN     "\x1B[1;32m"

#ifdef  COLOR_MSG_YELLOW
#undef  COLOR_MSG_YELLOW
#endif
#define COLOR_MSG_YELLOW    "\x1B[1;33m"

#ifdef  COLOR_MSG_BLUE
#undef  COLOR_MSG_BLUE
#endif
#define COLOR_MSG_BLUE      "\x1B[1;34m"

#ifdef  COLOR_MSG_RESET
#undef  COLOR_MSG_RESET
#endif
#define COLOR_MSG_RESET     "\x1B[0m"

#ifdef  COLOR_MSG_ERROR
#undef  COLOR_MSG_ERROR
#endif
#define COLOR_MSG_ERROR     COLOR_MSG_RED "[ERROR]" COLOR_MSG_RESET

#ifdef  COLOR_MSG_SUCCESS
#undef  COLOR_MSG_SUCCESS
#endif
#define COLOR_MSG_SUCCESS   COLOR_MSG_GREEN "[SUCCESS]" COLOR_MSG_RESET

#ifdef  COLOR_MSG_WARNING
#undef  COLOR_MSG_WARNING
#endif
#define COLOR_MSG_WARNING   COLOR_MSG_YELLOW "[WARNING]" COLOR_MSG_RESET

/**
 * Examples

#include "colormsg.h"
int main(void) {
   printf(COLOR_MSG_ERROR " Tried %d times, giving up!\n", 9);
   printf(COLOR_MSG_SUCCESS " Tried %d times, success!\n", 9);
   printf(COLOR_MSG_WARNING " Tried %d times, then %d, what's happening?\n", 9, 10);
   return 0;
}

 */
