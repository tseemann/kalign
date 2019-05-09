#ifndef ALIGN_IO_H
#define ALIGN_IO_H

#include <unistd.h>
#include "parameters.h"

#define SEEK_START 0
#define SEEK_END 2




extern struct alignment* read_alignment(char* infile);
extern struct alignment* detect_and_read_sequences(struct parameters* param);
extern int make_dna(struct alignment* aln);
extern void free_aln(struct alignment* aln);

extern int convert_alignment_to_internal(struct alignment* aln, int type);


extern int output(struct alignment* aln,struct parameters* param);

extern int make_aliged_seq(uint8_t* aligned, uint8_t* unaligned, int* gaps,int len);

#endif
