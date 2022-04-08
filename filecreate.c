#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
FILE *fp;
fp = fopen("numbers1mil","w");
int number;
char buffer[20];
char numstr[10];
int upper = 1000;
int lower = 1;




//make file of numbers
for(int i = 0; i <1000000; i++){

        number =( rand()%(upper - lower +1)) + lower;
        sprintf(numstr,"%d",number);
        fputs(numstr , fp);


        fputs("\n",fp);
}

fclose(fp);

}

