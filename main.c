#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "min.h" 
#include "max.h"
#include "var.h"

int main (){
     int n = 7;
     int maxx;
     int minn; 
     float floornumber; 
     float  ceilnumber;
     float  var; 
     int t [7] = {13, 12, 5,1,19,13,17};
    
     max(t, n, &maxx);
     min(t, n,&minn); 
     variance(t, n, &var);
     floornumber = floor(var);
     ceilnumber  = ceil(var);

    printf(" la valeur arrondie de la variance est : pour floor: %f\n pour ceil est :  %f\n ",floornumber,ceilnumber);
     
    
     
     return 0;
} 
