#include <stdio.h>
#include <string.h>

struct player {
    char name[20];
    char team[20];
};

void createData();
void readData();
void updateData();
void deleteData();

int main() {
    int choice;
    
    do {
        printf("\n CRUD Operations:\n");
        printf("1. Create (Add Players)\n");
        printf("2. Read (View Players)\n");
        printf("3. Update (Edit Player)\n");
        printf("4. Delete (Remove Player)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createData();
                break;
            case 2:
                readData();
                break;
            case 3:
                updateData();
                break;
            case 4:
                deleteData();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

void createData() {
    FILE *fptr;
    struct player newPlayer;
    int i;

    fptr = fopen("players.txt", "a"); 
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter data for 5 players:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEnter Player %d Name: ", i + 1);
        scanf("%s", newPlayer.name);
        printf("Enter Player %d Team: ", i + 1);
        scanf("%s", newPlayer.team);

        fprintf(fptr, "%s %s\n", newPlayer.name, newPlayer.team); 
    }

    fclose(fptr);
    printf("5 players added successfully!\n");
}

void readData() {
    FILE *fptr;
    struct player playerData;

    fptr = fopen("players.txt", "r"); 
    if (fptr == NULL) {
        printf("No data found. File does not exist!\n");
        return;
    }

    printf("\n--- Player List ---\n");
    while (fscanf(fptr, "%s %s", playerData.name, playerData.team) != EOF) {
        printf("Name: %s, Team: %s\n", playerData.name, playerData.team);
    }

    fclose(fptr);
}

void updateData() {
    FILE *fptr, *tempFile;
    struct player playerData;
    char searchName[20], newTeam[20];
    int found = 0;

    printf("Enter the name of the player to update: ");
    scanf("%s", searchName);
    printf("Enter the new team name: ");
    scanf("%s", newTeam);

    fptr = fopen("players.txt", "r");
    tempFile = fopen("temp.txt", "w"); 
    if (fptr == NULL || tempFile == NULL) {
        printf("Error opening file!\n");
        return;
    }

    while (fscanf(fptr, "%s %s", playerData.name, playerData.team) != EOF) {
        if (strcmp(playerData.name, searchName) == 0) {
            fprintf(tempFile, "%s %s\n", playerData.name, newTeam); 
            found = 1;
        } else {
            fprintf(tempFile, "%s %s\n", playerData.name, playerData.team); 
        }
    }

    fclose(fptr);
    fclose(tempFile);

    remove("players.txt");
    rename("temp.txt", "players.txt");

    if (found) {
        printf("Player updated successfully!\n");
    } else {
        printf("Player not found!\n");
    }
}


void deleteData() {
    FILE *fptr, *tempFile;
    struct player playerData;
    char deleteName[20];
    int found = 0;

    printf("Enter the name of the player to delete: ");
    scanf("%s", deleteName);

    fptr = fopen("players.txt", "r"); 
    tempFile = fopen("temp.txt", "w"); 
    if (fptr == NULL || tempFile == NULL) {
        printf("Error opening file!\n");
        return;
    }

    while (fscanf(fptr, "%s %s", playerData.name, playerData.team) != EOF) {
        if (strcmp(playerData.name, deleteName) != 0) {
            fprintf(tempFile, "%s %s\n", playerData.name, playerData.team); 
        } else {
            found = 1;
        }
    }

    fclose(fptr);
    fclose(tempFile);

    remove("players.txt"); 
    rename("temp.txt", "players.txt"); 

    if (found) {
        printf("Player deleted successfully!\n");
    } else {
        printf("Player not found!\n");
    }
}