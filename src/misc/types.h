#ifndef TYPEDEF_H
#define TYPEDEF_H

#include <stdint.h>

/* Primitives */
typedef uint8_t byte_t;
typedef uint16_t hword_t;
typedef uint32_t word_t;
typedef uint64_t dwford_t;

typedef word_t bitset_t;

/* Data Structures */
typedef struct File File;
typedef struct Folder Folder;
typedef struct Directory Directory;
typedef struct Display Display;
typedef struct ht_entry ht_entry;
typedef struct Table Table;
typedef struct State State;

#endif