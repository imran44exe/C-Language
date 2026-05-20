// W.A.P to Enter a Character from Keyboard and Check the input Character is vowel or Not
#include <stdio.h>
void main()
{
    char x;
    printf("\n Enter any Character = ");
    scanf("%c",&x);
    switch (x)
           {
            case 'a' : printf("%c is Vovel",x); break;
            case 'e' : printf("%c is Vovel",x); break;
            case 'i' : printf("%c is Vovel",x); break;
            case 'o' : printf("%c is Vovel",x); break;
            case 'u' : printf("%c is Vovel",x); break;
            default  : printf("%c is Not Vovel",x);
           }
}