#include <stdio.h>
#include "lab24functs.h"

int main() {

CadetInfoStructType cinfo[121];

char fname[100];
scanf("%s", fname);

int NumRecs = getNumRecs(fname);
printf("Reading number of records in the data file.\n");
printf("%d records in the data file.\n", NumRecs);

printf("The first cadet is:\n");
getDataText(cinfo, NumRecs, fname);


printf("The last cadet is:\n");
getDataText(cinfo, NumRecs, fname);



//malloc() statements

//malloc( * sizeof(CadetInfoStructType));











    return 0;
}