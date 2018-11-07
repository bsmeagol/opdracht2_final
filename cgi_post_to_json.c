#include <stdio.h>				// You need this #include to define the printf function
#include <stdlib.h>


int test = 5;

void main(int argc, char *argv[])
{
    printf("Content-type: text/html\n\n");

	


    printf("<html>");
    printf("<head>");
    printf("<title>...</title>");
    printf("</head>");
    printf("<body>");
    printf("<p>wrote to json !</p>");
    
    printf("</body>");
    printf("</html>");
    return;
}