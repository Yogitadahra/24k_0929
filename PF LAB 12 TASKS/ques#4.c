#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book{
  char title[30];
  char author[50];
  int p_year;
};

struct library{
  struct book *books;
};

void input(struct library *l);
void display(struct library *l);
 
int main()
{
    struct library *l;
    l=(struct library*)malloc(sizeof(struct library)); 

    (*l).books=(struct book*)malloc(5*sizeof(struct book));

    input(l);
    display(l);

    return 0;
}

void input(struct library *l){
    int i;
    for(i=0;i<5;i++)
    {
        printf("enter the detail of book no:%d\n",i+1);
        printf("book title:");
        scanf("%s",(*l).books[i].title);
        printf("book author:");
        scanf("%s",(*l).books[i].author);
        printf("publication year:");
        scanf("%d",&(*l).books[i].p_year);
    }
}

void display(struct library *l)
{
    int i,n=0;
    for(i=0;i<5;i++)
    {
        if((*l).books[i].p_year>2000)
        {
            n++;
            printf("\nthe book that is published after 2000 is %s",(*l).books[i].title);
        }
    }

    if(n==0)
    {
      printf("\nno book found which is published after 2000! ");
    }
}