#include <stdio.h>
#include <string.h>

int main(){
    char name[30];
    int x;
    printf("Enter name: ");
    gets(name);     //Function to read string from user.
	x = strlen(name);
    printf("Name: ");
    puts(name);    //Function to display string.
    printf("Longitud del string: %d\n",x);
    return 0;
}
