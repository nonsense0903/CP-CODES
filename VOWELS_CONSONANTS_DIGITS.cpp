#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
char str[50];
int vowels=0,consonants=0,digits=0,spaces=0;
printf("Enter a String: ");
fgets(str,sizeof(str),stdin);
for(int i=0;str[i] !='\0';i++) {
char ch=str[i];
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
vowels++;
}
 else if(isalpha(ch)){
 consonants++;
 }
 else if(isdigit(ch)){
 digits++;
 }
 else if(ch==' '){
 spaces++;
 }
 }
 printf("Vowels: %d\n",vowels);
 printf("Consonants: %d\n",consonants);
 printf("Digits: %d\n",digits);
 printf("White spaces: %d\n",spaces);
 return 0;
 }
