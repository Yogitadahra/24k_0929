
#include <stdio.h>
#include <string.h>
#define movies_available 10
struct movies_detail {
 char title[100];
 char genre[50];
 char d_name[50];
 int year;
 float rating;

};

struct movies_detail movies[movies_available]=
{{"Forrest Gump","Romance","Robert Zemeckis",2022,8.8},
{"Titanic","Romance","James Cameron",2020,7.9},
{"joker","crime","Todd Phillips",2023,8.4},
{"The Matrix","action","Lana & Lilly Wachowski",2000,8.7},
{"Inception","thriller","Christopher Nolan",2013,8.8}};

int movie_count=5;

void add_movie();
void display_movies();
void search_movies();

int main()
{
    int choice;
    do{
    printf("enter your choice\n1 adding a movie\n2 for display movies\n3 for searching a movie\n0 to exit:");
    scanf("%d",&choice);
    switch (choice)
    {
        case 0:
        break;

        case 1:
        add_movie();
        break;

        case 2:
        display_movies();
        break;

        case 3:
        search_movies();
        break;

        default:
        printf("\nplease enter valid choice\n");
    }

    }while(choice!=0);

}

void add_movie(){
    if(movie_count<movies_available)
    {
        printf("\nmovie title:");
        getchar();
        fgets(movies[movie_count].title,sizeof(movies[movie_count]).title,stdin);
        movies[movie_count].title[strcspn(movies[movie_count].title, "\n")]='\0';
        printf("\nmovie genre:");
        scanf(" %s",&movies[movie_count].genre);
        printf("\ndirector name:");
        getchar();
        fgets(movies[movie_count].d_name,sizeof(movies[movie_count].d_name),stdin);
        movies[movie_count].d_name[strcspn(movies[movie_count].d_name, "\n")]='\0';
        printf("\nrelease year:");
        scanf("%d",&movies[movie_count].year);
        printf("\nmovie ratings:");
        scanf("%f",&movies[movie_count].rating);
        movie_count++;
    }

}

void display_movies(){
    int i;
    for (i=0;i<movie_count;i++)
    {
      printf("\nmovie title:%s",movies[i].title);
      printf("\nmovie genre:%s",movies[i].genre);
      printf("\ndirector name:%s",movies[i].d_name);
      printf("\nrelease year:%d",movies[i].year);
      printf("\nmovies ratings:%.2f",movies[i].rating);
    }
}


void search_movies(){
    char search_genre[50];
    int i,n=0;
    printf("\nenter the genre of the movie you want to search: ");
    scanf(" %s",&search_genre);

    for (i=0;i<movie_count;i++)
    {
        if(strcmp(movies[i].genre,search_genre)==0)
        {
        n++;
        printf("\nhere is the movie you have searched for");
        printf("\nmovie title:%s",movies[i].title);
        printf("\nmovie genre:%s",movies[i].genre);
        printf("\ndirector name:%s",movies[i].d_name);
        printf("\nrelease year:%d",movies[i].year);
        printf("\nmovies ratings:%f",movies[i].rating);
    }
    }
    
    if(n==0)
    {
        printf("\nno movie available of this genre\n");
    }

}