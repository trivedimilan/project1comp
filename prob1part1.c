#include <stdio.h>
#include <stdlib.h>


int main(){
   
FILE *fd = fopen("numbers2","r");
FILE *fc = fopen("output.txt","w");

fprintf(fc,"Hi im process 1\n");

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

   fprintf(fc,"Average = %d\n", avg);
   fprintf(fc,"Max = %d\n", max);

   int foundmax = 0;
   int maxind;
   for(int i = 0; i < lines; i++){
        if(arr[i] == -1){
                fprintf(fc,"Hi I am process 1 and I found the hidden key in position A[%d].\n",i);
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
fprintf(fc,"First instance of max number found at %d\n",maxind);
//fprintf(fc,"Please note the positions for each integer starts at 1 and not 0");

    return 0;
}
