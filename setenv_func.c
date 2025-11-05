#include<stdlib.h>
#include<stdio.h>
int main(){
   if(setenv("MY_VARIABLE","monachopsis",1) == 0){
    printf("my variable is succesfull\n");
   }else{
    printf("error !");
   }
   char *my_var = getenv("MY_VARIABLE");
   if(my_var != NULL){
    printf("my variable is %s\n",my_var);
   }else{
    printf("variable is not finding\n");
   }



    return 0;
}