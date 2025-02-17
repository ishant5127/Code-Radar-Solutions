#include <stdio.h>
int main(){
    char name[50],hobby[50];
    int age; 
    scanf("%s %d %s",&name,&age,&hobby);
    printf("Name: %s\n",name);
    printf("age: %d\n",age);
    printf("hobby: %s\n",hobby);
    return 0;
}