 #include<stdio.h>

typedef struct employees
{
    int code;
    char Name[60];
    int dateofjoining[3];
} employees;

int main(){
	int i;
    employees arr[4];
    
    for (i = 0; i < 4; i++)
    {
        
        printf("Enter the Name of employee %d\n",i+1);
        getchar();
        fgets(arr[i].Name,60,stdin);
        printf("Enter the Code of employee %d\n",i+1);
        scanf("%d", &arr[i].code);
        printf("Enter the data of joining employee %d\n",i+1);
        scanf("%d %d %d", &arr[i].dateofjoining[0], &arr[i].dateofjoining[1], &arr[i].dateofjoining[2]);
    }
    int currentdate[3],count=0;
    printf("Enter the current date");
    scanf("%d %d %d",&currentdate[0],&currentdate[1],&currentdate[2]);
    for(i = 0; i < 4; i++)
    {
     int years = currentdate[2] - arr[i].dateofjoining[2];
        int months = currentdate[1] - arr[i].dateofjoining[1];
        int days = currentdate[0] - arr[i].dateofjoining[0];

        if (years > 3 || (years == 3 && months > 0) || (years == 3 && months == 0 && days >= 0)){
    				printf("%s \n %d \n %d-%d-%d\n",arr[i].Name,arr[i].code,arr[i].dateofjoining[0],arr[i].dateofjoining[1],arr[i].dateofjoining[2]);
    				count++;
				}
	}
	printf("Number of employees tenure of more than three years : %d", count);
    
}