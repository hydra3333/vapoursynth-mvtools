#ifndef COPYCODE_H
#define COPYCODE_H


#include <cstdint>


typedef void (*COPYFunction)(uint8_t *pDst, intptr_t nDstPitch,
                             const uint8_t *pSrc, intptr_t nSrcPitch);


COPYFunction selectCopyFunction(unsigned width, unsigned height, unsigned bits);


#endif // COPYCODE_H