#include <stdio.h>
#include <stdlib.h>


int main(){
   
FILE *fd = fopen("numbers2","r");

int lines;
printf("Please enter the amount of integers in the txt file: ");
scanf("%d", &lines);
int *arr = (int*)malloc(lines * sizeof(int));


char line[10];
//int arr[3000];

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

        //printf("%d\n",num);
   }

   avg = sum/lines;

   printf("The average is %d\n", avg);

   int foundmax = 0;
   int maxind;
   for(int i = 0; i < lines; i++){
        if(arr[i] == -1){
                printf("Hidden key has been found in line %d\n",i+1);
                continue;
        }
        if(arr[i] == max){
                if(foundmax){
                        continue;
                }

                maxind = i;
                foundmax = 1;
                continue;
        }

        //need to case for average



   }
printf("First instance of max number found at %d\n",maxind+1);
printf("Please note the positions for each integer starts at 1 and not 0");

    return 0;
}

