#include <time.h>
#include <wiringPi.h>
#include <stdint.h>
#include <unistd.h>
#include <stdio.h>				
#include <stdlib.h>
#include <string.h>


void main(int argc, char *argv[])
{
    
printf("Content-type: text/html;charset=utf-8\n\n");


char Buffer[512]={0};
fread( Buffer, 50, 1, stdin );

if(strlen(Buffer)!=0)
{
printf("post received!\r\n");
//write to json

time_t t = time(NULL);
struct tm tm = *localtime(&t);
printf("now: %d-%d-%d %d:%d:%d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);


}
else
{
printf("no post received...\r\n");
}




}