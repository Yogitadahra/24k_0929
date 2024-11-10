 #include <stdio.h>
 #include <string.h>
 int main()
{ int rows,col,i;
printf("enter the rows:");
scanf("%d",&rows);
printf("\nenter the col:");
scanf("%d",&col);
char arr[rows][col];
char word[col];
printf("\nenter the word:");
scanf("%s",&word);
printf("\nenter the array values:");
for(i=0;i<rows;i++)
{
    scanf("%s",&arr[i]);
}

 for(i=0;i<rows;i++)
 {
    if(strcmp(word,arr[i])==0)
    {
        printf("found");
        break;
    }
     
 }
   if(i==rows)
    {
        printf("\nnot found");
    }

  return 0;
}