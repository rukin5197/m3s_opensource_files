/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* whether memory barriers are needed around atomic operations */
#undef ATOMIC_OP_NEEDS_MEMORY_BARRIER

/* define if glitz backend can be tested against agl */
#undef CAIRO_CAN_TEST_GLITZ_AGL_SURFACE

/* define if glitz backend can be tested against egl */
#undef CAIRO_CAN_TEST_GLITZ_EGL_SURFACE

/* define if glitz backend can be tested against glx */
#undef CAIRO_CAN_TEST_GLITZ_GLX_SURFACE

/* define if glitz backend can be tested against wgl */
#undef CAIRO_CAN_TEST_GLITZ_WGL_SURFACE

/* Define to 1 if the PDF backend can be tested (need poppler and other
   dependencies for pdf2png) */
#undef CAIRO_CAN_TEST_PDF_SURFACE

/* Define to 1 if the PS backend can be tested (needs ghostscript) */
#undef CAIRO_CAN_TEST_PS_SURFACE

/* Define to 1 if the SVG backend can be tested */
#undef CAIRO_CAN_TEST_SVG_SURFACE

/* Define to 1 if the Win32 Printing backend can be tested (needs ghostscript)
   */
#undef CAIRO_CAN_TEST_WIN32_PRINTING_SURFACE

/* Define to 1 if libspectre is available */
#undef CAIRO_HAS_SPECTRE

/* Define to 1 to enable cairo's test surfaces feature */
#undef CAIRO_HAS_TEST_SURFACES

/* Define to 1 to disable certain code paths that rely heavily on double
   precision floating-point calculation */
#undef DISABLE_SOME_FLOATING_POINT

/* Define to 1 if your system stores words within floats with the most
   significant word first */
#undef FLOAT_WORDS_BIGENDIAN

/* Define to 1 if you have the <byteswap.h> header file. */
#undef HAVE_BYTESWAP_H

/* Define to 1 if you have the `ctime_r' function. */
#undef HAVE_CTIME_R

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the `drand48' function. */
#undef HAVE_DRAND48

/* Define to 1 if you have the `FcFini' function. */
#undef HAVE_FCFINI

/* Define to 1 if you have the <fcntl.h> header file. */
#undef HAVE_FCNTL_H

/* Define to 1 if you have the `fedisableexcept' function. */
#undef HAVE_FEDISABLEEXCEPT

/* Define to 1 if you have the `feenableexcept' function. */
#undef HAVE_FEENABLEEXCEPT

/* Define to 1 if you have the `flockfile' function. */
#undef HAVE_FLOCKFILE

/* FT_Bitmap_Size structure includes y_ppem field */
#undef HAVE_FT_BITMAP_SIZE_Y_PPEM

/* Define to 1 if you have the `FT_GlyphSlot_Embolden' function. */
#define HAVE_FT_GLYPHSLOT_EMBOLDEN 1

/* Define to 1 if you have the `FT_Library_SetLcdFilter' function. */
#undef HAVE_FT_LIBRARY_SETLCDFILTER

/* Define to 1 if you have the `FT_Load_Sfnt_Table' function. */
#define HAVE_FT_LOAD_SFNT_TABLE 1

/* Whether you have gcov */
#undef HAVE_GCOV

/* Enable if your compiler supports the Intel __sync_* atomic primitives */
#undef HAVE_INTEL_ATOMIC_PRIMITIVES

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have the <libgen.h> header file. */
#undef HAVE_LIBGEN_H

/* Define to 1 if you have the `link' function. */
#undef HAVE_LINK

/* Define to 1 if you have the Valgrind lockdep tool */
#undef HAVE_LOCKDEP

/* Define to 1 if you have the Valgrind memfault tool */
#undef HAVE_MEMFAULT

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the `poppler_page_render' function. */
#undef HAVE_POPPLER_PAGE_RENDER

/* Define to 1 if you have the <pthread.h> header file. */
#undef HAVE_PTHREAD_H

/* Define to 1 if you have the `rsvg_pixbuf_from_file' function. */
#undef HAVE_RSVG_PIXBUF_FROM_FILE

/* Define to 1 if you have the `sched_getaffinity' function. */
#undef HAVE_SCHED_GETAFFINITY

/* Define to 1 if you have the <sched.h> header file. */
#undef HAVE_SCHED_H

/* Define to 1 if you have the <setjmp.h> header file. */
#undef HAVE_SETJMP_H

/* Define to 1 if you have the <signal.h> header file. */
#undef HAVE_SIGNAL_H

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H

/* Define to 1 if you have the <sys/int_types.h> header file. */
#undef HAVE_SYS_INT_TYPES_H

/* Define to 1 if you have the <sys/poll.h> header file. */
#undef HAVE_SYS_POLL_H

/* Define to 1 if you have the <sys/socket.h> header file. */
#undef HAVE_SYS_SOCKET_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H

/* Define to 1 if you have the <sys/un.h> header file. */
#undef HAVE_SYS_UN_H

/* Define to 1 if the system has the type `uint128_t'. */
#undef HAVE_UINT128_T

/* Define to 1 if the system has the type `uint64_t'. */
#undef HAVE_UINT64_T

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have Valgrind */
#undef HAVE_VALGRIND

/* Define to 1 if you have the `vasnprintf' function. */
#undef HAVE_VASNPRINTF

/* Define to 1 if you have the <windows.h> header file. */
#undef HAVE_WINDOWS_H

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#undef LT_OBJDIR

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
#undef NO_MINUS_C_MINUS_O

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Define to the value your compiler uses to support the warn-unused-result
   attribute */
#undef WARN_UNUSED_RESULT

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif


/* Deal with multiple architecture compiles on Mac OS X */
#ifdef __APPLE_CC__
#ifdef __BIG_ENDIAN__
#define WORDS_BIGENDIAN 1
#define FLOAT_WORDS_BIGENDIAN 1
#else
#undef WORDS_BIGENDIAN
#undef FLOAT_WORDS_BIGENDIAN
#endif
#endif


/* Define to 1 if the X Window System is missing or not being used. */
#undef X_DISPLAY_MISSING

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#undef inline
#endif