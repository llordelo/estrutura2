#include <stdio.h>
#include <time.h>
 
int main(void)
{
  time_t currentTime;
  struct tm *timeinfo;
  char stringTime[51];
 
  currentTime= time(NULL);
  timeinfo= localtime(&currentTime);
 
  strftime(stringTime, 51, "%d/%m/%Y - ", timeinfo);
 
  printf("%s %s\n",stringTime,__TIME__);
 
  return 0;
}
