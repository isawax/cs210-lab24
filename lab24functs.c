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
        exit(-1); 
    }
    
    char firstName[50];
    char lastName[50];
    int numRead = 0; 

    while (numRead < 123 && !feof(inFile)) {
        fscanf(inFile, "%s %s %d %d %d", lastName, firstName, &cinfo[numRead].age, &cinfo[numRead].squad, &cinfo[numRead].year);
        strcat(firstName, " ");
        strcpy(cinfo[numRead].name, strcat(firstName, lastName));
        numRead++;
        }
    
    fclose(inFile);
}
