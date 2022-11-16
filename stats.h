#ifndef STATE_H_INCLUDED
#define STATE_H_INCLUDED

#define DATA_LENGTH 40
#define NULL  0

 void print_Array(unsigned char*PTR,unsigned int);
int find_median(unsigned char*PTR,unsigned int x);
int find_mean(unsigned char*PTR,unsigned int x) ;
int find_maximum(unsigned char*PTR,unsigned int x);
int find_minimum(unsigned char*PTR,unsigned int x);
int swa(int x,int y);
void sort_array(unsigned char*Pointer,unsigned int x);

#endif // STATE_H_INCLUDED
