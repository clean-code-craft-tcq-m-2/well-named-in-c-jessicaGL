#include "functions.h"

void PrintColorPairTable( )
{
    int minColor, majColor,cont = 1;

    //minColor = 2;
    for(majColor = 0; majColor < numberOfMajorColors ; majColor++){
        for(minColor = 0 ; minColor < numberOfMinorColors ; minColor++)
        {
            if(majColor > 2)
                {
                    printf("%d \t %s  %s\n", cont, MajorColorNames[majColor], MinorColorNames[minColor]);
                    cont++;
                }
                else
                {
                    printf("%d \t %s \t %s\n", cont, MajorColorNames[majColor], MinorColorNames[minColor]);
                    cont++; 
                }
        }
    }    
    
}
