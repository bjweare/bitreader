#ifndef _bitreader_h
#define _bitreader_h

#include <stdint.h>

typedef struct BitReader{
  const uint8_t *data;
  uint32_t size;
  uint32_t reservoir;
  uint32_t leftbits;
}BitReader;


int8_t BitReader_init(BitReader *reader, const uint8_t *data, uint32_t size);

/*
 this function return range n value of bits
 uint8_t n: this parameter range is 0 < n <= 32.
*/
uint32_t BitReader_get_bits(BitReader *reader, uint8_t n);

/*
  this function skip bits from current position.
*/
void BitReader_skip_bits(BitReader *reader, uint8_t n);

/*
  this function return num of bits that BitReader contains
*/
uint32_t BitReader_get_size(BitReader *reader);


#endif