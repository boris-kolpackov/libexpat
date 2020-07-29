#ifndef EXPAT_CONFIG_H
#define EXPAT_CONFIG_H

/* Endianess.
 */
#ifdef __FreeBSD__
#  include <sys/endian.h> /* BYTE_ORDER */
#else
#  if defined(_WIN32)
#    ifndef BYTE_ORDER
#      define BIG_ENDIAN    4321
#      define LITTLE_ENDIAN 1234
#      define BYTE_ORDER    LITTLE_ENDIAN
#    endif
#  else
#    include <sys/param.h>  /* BYTE_ORDER/__BYTE_ORDER */
#    ifndef BYTE_ORDER
#      ifdef __BYTE_ORDER
#        define BYTE_ORDER    __BYTE_ORDER
#        define BIG_ENDIAN    __BIG_ENDIAN
#        define LITTLE_ENDIAN __LITTLE_ENDIAN
#      else
#        error no BYTE_ORDER/__BYTE_ORDER define
#      endif
#    endif
#  endif
#endif

#if BYTE_ORDER == BIG_ENDIAN
#  define BYTEORDER 4321
#else
#  define BYTEORDER 1234
#endif

#define XML_NS            1
#define XML_DTD           1
#define XML_CONTEXT_BYTES 1024
/* #define XML_FREESTANDING  1 */

#define UNUSED(x) (void)x;

/* Specific for Windows.
 */
#ifdef _WIN32
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>
#  undef WIN32_LEAN_AND_MEAN

#  define COMPILED_FROM_DSP 1
#endif

/* Common for all supported OSes/compilers.
 */
#define HAVE_MEMMOVE 1

#endif /* EXPAT_CONFIG_H */
