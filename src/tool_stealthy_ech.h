#ifndef STEALTHY_ECH
#define STEALTHY_ECH

typedef enum {
  SECH_VERSION_1,
  SECH_VERSION_INVALID
} sech_version_t; 

sech_version_t sech_version(const char * arg);

#endif
