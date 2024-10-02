// RegisteringDynamic Symbols
#ifndef R_NO_REMAP
#  define R_NO_REMAP
#endif

#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>

void R_init_BRISC(DllInfo* info) {
  R_registerRoutines(info, NULL, NULL, NULL, NULL);
  R_useDynamicSymbols(info, TRUE);
}
