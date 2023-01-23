#include <stdio.h>

#include <stdlib.h>

#include <string.h>

    struct person  {

        int ID;

        char name[50];

        char  address[50];

        int code;

        float salary;

    };



int main(int argc,char *argv[]) {

    FILE *fp;

    struct person p;

    fp=fopen("data.txt", "r");

    char fname[20];

    char lname[20];

    if (fp == NULL)

    {

        fprintf(stderr, "\nError opening file\n");

        exit (1);

    }

    while(fread(&p, sizeof(struct person), 1, fp))

         sscanf(p.name,"%s%s", fname, lname);;



    // close file

    fclose (fp);

    int op,i,j,count=0;

    if(strcmp(argv[1],"-ID")==0)op=1;

    else if(strcmp(argv[1],"-s")==0)op=2;

    else if(strcmp(argv[1],"-count")==0)op=3;

    else if(strcmp(argv[1],"-name")==0)op=4;

    sscanf(p.name,"%s%s", fname, lname);

    switch (op) {

    case 2:

	  if( strcmp(fname, argv[2]) == 0)

	   printf("%s", p.name);

	break;

        case 3:

	if( strcmp(fname, argv[2]) == 0)

	   printf("%f", p.salary);

	break;

        }

}
