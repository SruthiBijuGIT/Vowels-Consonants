#include<stdio.h>    
int main()
{    
char alp;    
printf("Enter an alphabet:");    
scanf("%c",&alp);
switch(alp)     
{
  case'a':    
    printf("a is a vowel\n"); 
    break;   
    
  case'e':    
    printf("e is a vowel\n"); 
    break;

  case'i':   
    printf("i is a vowel\n"); 
    break;   
  case'o':    
    printf("o is a vowel\n"); 
    break;   
  case'u':    
    printf("u is a vowel\n"); 
    break;   
  
  case'A':    
    printf("A is a vowel\n"); 
    break;   
  case'E':    
    printf("E is a vowel\n"); 
    break;   
  case'I':    
    printf("I is a vowel\n"); 
    break;   
  case'O':    
    printf("O is a voweln"); 
    break;   
  case'U':    
    printf("U is a vowel\n"); 
    break;
  default:
    printf("It is a consonant\n"); 
  }
  return 0;
}
