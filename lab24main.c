#include <stdio.h>
#include "lab24functs.h"

int main() {

CadetInfoStructType cinfo[121];

int* ptr = (int*)malloc(123 * sizeof(int));

int NumRecs = getNumRecs("lab24data.txt");
printf("Reading number of records in the data file.\n");
printf("%d records in the data file.\n", NumRecs);

printf("The first cadet is:\n");
getDataText(cinfo, 1, "lab24data.txt");
    
    printf("Cadet name = %s\n", cinfo[1].name);
    printf("Cadet age = %d\n", cinfo[1].age); 
    printf("Cadet squad = %d\n", cinfo[1].squad);
    printf("Cadet year = %d\n", cinfo[1].year);

printf("The last cadet is:\n");
getDataText(cinfo, NumRecs - 1, "lab24data.txt");
    printf("Cadet name = %s\n", cinfo[NumRecs].name);
    printf("Cadet age = %d\n", cinfo[NumRecs].age); 
    printf("Cadet squad = %d\n", cinfo[NumRecs].squad);
    printf("Cadet year = %d\n", cinfo[NumRecs].year);

    return 0;
free(ptr); 

}