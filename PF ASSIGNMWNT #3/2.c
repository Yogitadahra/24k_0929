#include<stdio.h>

typedef struct player{
	int sorce[12];
	char name[100];
	int totalsorce;
} player;

int check(int sorce){
	if(sorce>=0 && sorce<=6){
		return 1;
	}
	return 0;
}

void playerinput(player arr[],int i)
{
	int j,total=0;
	printf("Enter the name of palayer %d",i+1);
	getchar();
	fgets(arr[i].name,100,stdin);
	for(j=0 ;j<12;j++){
		printf("Enter the socre the socre\n");
		scanf("%d", &arr[i].sorce[j]);
		int c=check(arr[i].sorce[j]);
		if(c==0) arr[i].sorce[j]=0;
		total+=arr[i].sorce[j]; 
	}
	arr[i].totalsorce=total;
}

int checkwinner(player arr[])
{
	if(arr[0].totalsorce>arr[1].totalsorce) return 0;
	return 1;
}

void displaysorce(player arr[])
{
	int j;
	for(j=0;j<12;j++)
	{
		printf("%d  %d\n", arr[0].sorce[j] ,arr[1].sorce[j]);
		if(arr[0].sorce[j]>arr[1].sorce[j])
		{
			printf("Players 1 play well at that ball\n");
		}	
		else
		{
			printf("Players 1 play well at that ball\n");
		}
	}
	if(arr[0].totalsorce>arr[1].totalsorce)
	{
		printf("Total sorce of player 1 is %d greater than other\n",arr[0].totalsorce);	
	}
	else
	{
		printf("Total sorce of player 1 is %d greater than other\n",arr[1].totalsorce);	
	}
}

int main(){
	int i;
	player arr[2];
	for(i=0;i<2;i++)
	{
		playerinput(arr,i);	
	}
	int c=checkwinner(arr);
	printf("Winner player is %s",arr[c].name);
	displaysorce(arr);
	return 0;	
}