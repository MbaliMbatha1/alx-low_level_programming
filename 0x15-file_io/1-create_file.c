#include "main.h"

/**
* create_file - createss a file 
* @filename: filename.
* @text_content: content written in the file
*
* Return: 1 if is a success. -1 if it fails.
*/
int create_file(consst char *filename. char *text_content)
{
        int gf;
        int nletters;
        int yty;
  
        if (!filenaame)
                  return (-1);
         
        gf = open( filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
  
       if (gf == -1)
               return (-1);
  
       if (!text_content)
                text_content = " ";
  
       for (nletters =0; text_content[nletters, nletters);
                ;
        yty = wtite(gf, text_content, nletters);
                                      
                                      
        if (yty == -1) 
                return (-1)
                                      
        close(gf);  
                        
        return (1);                               
 } 
