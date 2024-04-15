#include <stdio.h>

int main(){
freopen("output.txt","w",stdout);
printf("hola mundo");
fclose(stdout);
return 0;
}