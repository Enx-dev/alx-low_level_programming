#include "main.h"
/**
 * rot13 - encodes string using rot13
 * @s: a string;
*/
char *rot13(char *s)
{
        int i, j;
        char alp[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        char rep[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

        for (i = 0; *(s + i) != '\0'; i++)
        {
                if ((*(s + i) >= 65 && *(s + i) <= 90) || (*(s + i) >= 97 && *(s + i) <= 122))
                {
                        j = 0;
                        while (*(s + i) != alp[j])
                        {
                                j++;
                        }
                        *(s + i) = rep[j];
                }
        }
        return (s);
}