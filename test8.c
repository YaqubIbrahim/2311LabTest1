#include<stdio.h>

#include <stdlib.h>

#include <string.h>



void main(int argc, char  *argv[]) {

typedef struct {

      int x;

      int g;

      char z[20];

      } Student;

 Student a1,b1,c1,x;

int op,i,j, count=0;

if( strcmp(argv[1], "-count") == 0) op=1;

else if (strcmp(argv[1], "-grade") == 0) op=2;

else if (strcmp(argv[1], "-name") == 0) op=3;

else op=-1;



char fname[20], lname[20],gg;

 FILE *fp;

 fp=fopen("dat.txt","r");

 if(fp == NULL) {printf("can not open file\n"); exit(1);}

 while ( fread(&a1, sizeof(a1), 1, fp) != 0) {

    //printf("%d    %c    %s\n", a1.x, a1.g, a1.z);

    sscanf(a1.z,"%s%s", fname, lname);

    //printf("----  %s  -----  %s ----\n",fname,lname);

    switch (op) {

	case -1:

       	  printf("No such flag\n");

	break;

	case 1:

	  count++;

	break;

	case 2:

	  sscanf(argv[2],"%c",&gg);

	  if(gg == a1.g) printf("%d\t%s\n",a1.x, a1.z);

	break;

	case 3:

	if( strcmp(fname, argv[2]) == 0)

	   printf("%d\t%s\t%c\n", a1.x, a1.z, a1.g);

	break;

        }

 }



if(count != 0) printf("%d\n",count);



}
