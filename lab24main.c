#include <stdio.h>
#include "lab24functs.h"

int main() {

int* ptr = NULL; 
CadetInfoStructType cinfo[121];

int NumRecs = getNumRecs("lab24data.txt");
printf("Reading number of records in the data file.\n");
printf("%d records in the data file.\n", NumRecs);

ptr = (int*)malloc(NumRecs * sizeof(int));


printf("The first cadet is:\n");
getDataText(cinfo, 0, "lab24data.txt");
    
    printf("Cadet name = %s\n", cinfo[0].name);
    printf("Cadet age = %d\n", cinfo[0].age); 
    printf("Cadet squad = %d\n", cinfo[0].squad);
    printf("Cadet year = %d\n", cinfo[0].year);

printf("The last cadet is:\n");
getDataText(cinfo, NumRecs - 1, "lab24data.txt");
    printf("Cadet name = %s\n", cinfo[NumRecs - 1].name);
    printf("Cadet age = %d\n", cinfo[NumRecs -1].age); 
    printf("Cadet squad = %d\n", cinfo[NumRecs-1].squad);
    printf("Cadet year = %d\n", cinfo[NumRecs-1].year);

    return 0;
free(ptr); 

}