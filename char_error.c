#include "main.h"

int char_error(FILE *stream)
{
  char buf[BUFSIZ];
  char *p;
  long int i;
  
  if (fgets(buf, sizeof(buf), stdin) != NULL)
  {
    i = strtol(buf, &p, 10);
    
    if (buf[0] != '\n' && (*p == '\n' || *p == '\0'))
         return( (int) i);
    
  }  
  return ((int) 0);
}