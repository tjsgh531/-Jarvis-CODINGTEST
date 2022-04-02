#include<stdio.h>
#include<string.h>

char* vps(char* str){
   int count = 0;
   for (int i = 0; i < strlen(str); i++) {
      if (str[i] == '(' ){
         count++;
      }
      else{
         count--;
         if (count < 0) {
            return "NO";
         }
      }
   }
   if (count > 0) return "NO";
   return "YES";
}

int main(){
   int num;
   scanf("%d", &num);

   for(int i=0; i< num; i++){
      char temp[50];
      scanf("%s", temp);
      printf("%s\n", vps(temp));
   }
   return 0;
}