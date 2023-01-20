
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int randchar(int a){


int low=65;
int high=90;

int jen= (rand() % (high-low +1)) +low;

char random= (char)jen;


return random;

}



