#include "lab24functs.h"


int getNumRecs(char fname[]) {
FILE* inFile = NULL;
    inFile = fopen("lab24data.txt", "r");

    if (inFile == NULL) {
        printf("Error reading file.\n");
        return -1;
    }

int num = 0;

fscanf(inFile, "%d", &num);
    return num;

    fclose(inFile);
}

void getDataText(CadetInfoStructType cinfo[], int numRecs, char fname[]) {

    FILE* inFile = NULL;
    inFile = fopen("lab24data.txt", "r");

    if (inFile == NULL) {
        printf("Error reading file.\n");
    }
    
    char firstName[50];
    char lastName[50];
    int age = 0;
    int squad = 0;
    int year = 0; 
    int numRead = 1; 

    while (numRead < 121 && !feof(inFile)) {
        fscanf(inFile, "%s %s %d %d %d", firstName, lastName, &cinfo[numRead].age, &cinfo[numRead].squad, &cinfo[numRead].year);
        strcat(firstName, " ");
        strcpy(cinfo[numRead].name, strcat(firstName, lastName));
        numRead++;
        }
    
    fclose(inFile);
}
