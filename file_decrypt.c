#include <stdio.h>
#include <string.h>
#include "header.h"

void file_decryption(char key[])
{
    FILE *f1 = fopen("cipher.txt", "r");

    if (f1 == NULL)
        printf("error in opening the file");

    else
    {
        char ch;
        int keyLen = strlen(key), i, j;

        int ciphertext_len = 0;
        for (int i = 0; (ch = fgetc(f1)) != EOF; i++)
        {
            if (!(ch == ' ') || (ch == '\n') || (ch == '\t'))
                ciphertext_len++;
        }
        printf("cipher text length: %d\n", ciphertext_len);

        char newKey[ciphertext_len];

        //generating new key
        for (i = 0, j = 0; i < ciphertext_len; ++i, ++j)
        {
            if (j == keyLen)
                j = 0;

            newKey[i] = key[j];
        }
        newKey[i] = '\0';
        printf("\nNew Generated Key: %s\n", newKey);
        //strupr(newKey);

        rewind(f1);
        char c;
        for (int i = 0; (ch = fgetc(f1)) != '\n'; i++)
        {
            if ((ch >= 'A') && (ch <= 'Z'))
            {
                //ch=ch-32;
                c = (((ch - newKey[i]) + 26) % 26) + 'A';
                fputc(c, stdout);
            }
            else if ((ch == ' ') || (ch == '\t'))
            {
                //printf(" 2 %d", ch);
                fputc(ch, stdout);
            }
        }
    }
    fclose(f1);
}