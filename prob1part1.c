
#include <stdio.h>
#include <stdlib.h>

int main(){

char line[10];

   int ind = 0;
   int num;
   char *str;
   int max = -2;
   int avg;
   int sum = 0;
   while(fgets(line,sizeof(line),fd)){

        str = line;
        num = atoi(str);

        if(max < num){
                max = num;
        }
        sum += num;
        arr[ind] = num;
        ind++;

         printf("%s\n",line);
   }

   avg = sum/lines;

   printf("The average is %d\n", avg);

   int foundmax = 0;
   int maxind;
   for(int i = 0; i < lines; i++){
        if(arr[i] == -1){
                printf("Hidden key has been found in line %d\n",i);
                continue;
        }
        if(arr[i] = max){
                if(foundmax){
                        continue;
                }

                maxind = i;
                foundmax = 1;
                continue;
        }

        //need to case for average



   }
printf("First instance of max number found at %d\n",maxind);


    return 0;
}
