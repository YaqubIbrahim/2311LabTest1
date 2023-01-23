#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main(int argc,char *argv[]) {

    int id,code;

    float salary;

    char name[50], address[50];

    char input[50];

    typedef struct {

        int ID;

        char name[50];

        char  address[50];

        int code;

        float salary;

    } PERSON;



    PERSON p;

    FILE *fp;

    fp=fopen("data.txt", "r");

    int op,i,j,count=0;

    if(strcmp(argv[1],"-ID")==0)op=1;

    else if(strcmp(argv[1],"-s")==0)op=2;

    else if(strcmp(argv[1],"-count")==0)op=3;

    else if(strcmp(argv[1],"-name")==0)op=4;

    char fname[20], lname[20];

    sscanf(p.name,"%s%s", fname, lname);

    switch (op) {
	
        case 3:

	if( strcmp(fname, argv[2]) == 0)

	   printf("%d", p.ID);

	break;

        }

}

  
