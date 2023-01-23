#include<stdio.h>
#include <stdlib.h>
#include <string.h>



void main(int argc, char  *argv[]) {

typedef struct {

      int id;
      char name[20];
      char address[50];
      int code;
      float salary;

      } Person;

 Person a1,b1,c1,x;

int op,i,j, count=0;

if( strcmp(argv[1], "-ID") == 0) op=1;

else if (strcmp(argv[1], "-s") == 0) op=2;

else if (strcmp(argv[1], "-name") == 0) op=3;
else if (strcmp(argv[1],"-count")==0) op=4;

else op=-1;



char fname[20], lname[20],gg;

 FILE *fp;

 fp=fopen("data1.txt","r");

 if(fp == NULL) {printf("can not open file\n"); exit(1);}

 while ( fread(&a1, sizeof(a1), 1, fp) != 0) {

    //printf("%d    %c    %s\n", a1.name, a1.address, a1.name);

    sscanf(a1.name,"%s%s", fname, lname);

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

	  if(gg == a1.code) printf("%d\t%s\n",a1.id, a1.name);

	break;

	case 3:

	if( strcmp(fname, argv[2]) == 0)

	   printf("%d\n", a1.id);

	break;

        }

 }



if(count != 0) printf("%d\n",count);



}
