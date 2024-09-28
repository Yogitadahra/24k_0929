   #include <stdio.h>
   int main()
{
   char c;
   int key;
   printf("do you want to do encryption or decryption(1 for encrypt and 0 for decrypt):");
   scanf(" %d",&key);
    
   if (key==1)
{
    printf("\nenter the character tou want to encrypt:");
    scanf(" %c",&c);

    c=~c;
    printf("\nthe character after encryption:%c",c);
}
   else
{
    printf("\nenter the character you want to decrypt:");
    scanf(" %c",&c);
     c=~c;
    printf("\nthe character after decryption:%c",c);
}

    return 0;
}