#include <stdio.h>
/*
 *
 *main: takes in the arguments and prints them out
 *@av: the arguments
 *@ac: number of arguments 
 *
 * Return:void 
 */

   int main(int ac, char **av)
{ 
    int i =0;
    while(av[i])
	    {
	    printf("%s\n", av[i]);
	    i++;
	    }
       return 0;
}
