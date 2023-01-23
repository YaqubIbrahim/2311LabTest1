#include <stdio.h>

#include <string.h>



struct Record 

{

    int id;

    char encrypted;

    char name[20];

    float balance;

};



int main()

{

    FILE *f = fopen("data1.txt", "rb");

    if(f == NULL)

    {



        printf("File cannot be opened.\n");

        return -1;

    }



    while(1)

    {

        struct Record rec;

        char *cp;



        /*

         * We first read 1 byte, to check if end of file is reached.

         */

        char ch = getc(f);

        if(ch == EOF)

        {

            break;

        }



        /*

         * Else, we first set the just read as the first byte of the record.

         */

        cp = (char*) &rec;

        *cp = ch;



        /*

         * Also, we read remaining bytes of the record.

         */

        fread(cp + 1, 1, sizeof(struct Record) - 1, f);



        /*

         * We invert the bits of name, if encrypted field is not 'E'

         */

        if(rec.encrypted != 'E')

        {

            int i = 0;

            int len = strlen(rec.name);



            for(i = 0; i <= len; i++)

            {

                /*

                 * We invert bits by XORing with 0xFF.

                 */

                rec.name[i] = rec.name[i] ^ 0xFF;

            }

        }





        /*

         * Finally, we display the record.

         */

        printf("%d\t%s\t%f\n", rec.id, rec.name, rec.balance);

    }





    fclose(f);

    return 0;

}
