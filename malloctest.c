#include <stdio.h> 
#include <stdlib.h> 

int main(int argc, char *argv[], char *envp[]) { 
    char *pMem; 
    long i = 0; 
    do { 
        printf("Mb allocated:%ld\n", ++i); 
//        pMem = (char *) malloc(1000000); 
        pMem = new char[1000000]; 
    } while (pMem); 

    printf("heap exhausted after %ld Mbyte mallocs\n", i); 
    return !printf("exits normally\n"); 
}  
