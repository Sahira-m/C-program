#include <stdio.h>
#include <string.h>
#include<conio.h>
int main(void)
{
char name[20];
 int length;
printf("Enter Your Name : "); 
scanf("%s",&name);  
printf("Your name is : %s", name);  
length = strlen(name);
printf("Length of the name is = %d\n", length);
getch();
return 0;
}