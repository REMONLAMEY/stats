#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

void main()
{
    char DATA_Base[DATA_LENGTH]= { 55,69,44,66,77,88,22,11
                                   ,33,99,78,51,15,34,2,5
                                   ,7,49,75,77,27,57,43,26
                                   ,13,72,76,64,48,49,59,19
                                   ,25,35,75,45,16,60,80,50
                                 };



//printf("%d",swa(5,6));
    // find_minimum(DATA_Base,DATA_LENGTH);
     sort_array(DATA_Base,DATA_LENGTH);
print_Array(DATA_Base,DATA_LENGTH);
}


void print_Array(unsigned char*PTR,unsigned int x)
{
    for(int i=0; i<x; i++)
    {
        printf("%d\n",*PTR);
        PTR++;
    }
}

int find_median(unsigned char*PTR,unsigned int x)
{
    int median;
    if(x&1==0) //for checking if the array has an odd number of charachters or even
    {
        int y=x/2;
        for (int i=0; i<=y; i++) PTR++;
        median= ((*PTR)+(*(PTR++)))/2;
        //  printf("%d",median); ==> for testing code
    }
    else
    {
        int y=x/2;
        for (int i=0; i<=y; i++) PTR++;
        median= (*PTR);
        //  printf("%d",median); }
        return median;
    }
}

int find_mean(unsigned char*PTR,unsigned int x)
{
    int mean;
    int sum=(*PTR);
    for(int i=0; i<x; i++)
    {
        sum +=(*(++PTR));
    }
    mean=sum/x;
    // printf("%d",mean);
    return mean;

}

int find_maximum(unsigned char*PTR,unsigned int x)
{
    int maximum=(*PTR);
    for(int i=0; i<x; i++)
    {
        if(maximum<(*(++PTR))) maximum=(*PTR);
    }
    //printf("%d",maximum);
    return maximum;
}
int find_minimum(unsigned char*PTR,unsigned int x)
{
    int minimum=(*PTR);
    for(int i=0; i<x; i++)
    {
        if(minimum>(*(++PTR))) minimum=(*PTR);
    }
    //  printf("%d",minimum);
    return minimum;
}

/*void swa(int x,int y)
{
    x+=y;
    y=x-y;
    x-=y;

}*/

void sort_array(char arr[],unsigned int x)
{
 //char arr[]={10,55,78,12,4};
    int z;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<n-1;){
    for(int i=0;i<n-1;i++)
    {  if(arr[i]>arr[i+1]) continue;
     else {z=i+1;
     arr[z]=arr[z]+arr[j];
    arr[j]=arr[z]-arr[j];
    arr[z]=arr[z]-arr[j];}

   }
j++;

    }
}


/*void sort_array(unsigned char*Pointer,unsigned int x)
{
    unsigned char*PTR;
    int y=x;

    for(int j=0; j<x-1; j++)
    {  //Pointer=PTR;
        for(int i=0; i<y; i++)
        {  if((*PTR)<(*(++PTR)))
            {(*PTR)=(*PTR)+(*(PTR-1));
             (*(PTR-1))=(*PTR)-(*(PTR-1));
             (*PTR)=(*PTR)-(*(PTR-1));}}
    y--;}

}*/




