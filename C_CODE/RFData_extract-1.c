#include <stdio.h>
#include <stdlib.h> 

int main()
{
   FILE *fptr, *fptr1;
   char c[1000];
   int a[128]={0};
   float b[128]={0},count=0.0;
   int i;
   fptr1 = fopen("../MATLAB_CODE/data-1.txt","w");
   fptr = fopen("../RF-SENSORDATA/RFData-Day1.txt","r");

   if(fptr == NULL || fptr1 == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
   else
   {	
   	  while(fscanf(fptr,"%[a-zA-Z 0-9:]%*[\n]", c) != EOF)
        {   
            count++;
            for(i = 0; c[i] != '\0'; i++)
            {
               printf("%c\n", c[i]);
               switch(c[i])
               {
                  case '0':
                           a[i]=a[i]+0;
                           break;
                  case '1':
                           a[i]=a[i]+1;
                           break;
                  case '2':
                           a[i]=a[i]+2;
                           break;
                  case '3':
                           a[i]=a[i]+3;
                           break;
                  case '4':
                           a[i]=a[i]+4;
                           break;
                  case '5':
                           a[i]=a[i]+5;
                           break;
                  case '6':
                           a[i]=a[i]+6;
                           break;
                  case '7':
                           a[i]=a[i]+7;
                           break;
                  case '8':
                           a[i]=a[i]+8;
                           break;
                  case '9':
                           a[i]=a[i]+9;
                           break;
                  case 'a':
                           a[i]=a[i]+10;
                           break;
                  case 'b':
                           a[i]=a[i]+11;
                           break;
                  case 'c':
                           a[i]=a[i]+12;
                           break;
                  case 'd':
                           a[i]=a[i]+13;
                           break;
                  case 'e':
                           a[i]=a[i]+14;
                           break;
                  case 'f':
                           a[i]=a[i]+15;
                           break;
                  default: 
                           printf("ERROR\n");
                           break;
                                                                                          
               }
               
            } 
        }
	}
   printf("\n");
   printf("%f\n", count);
   printf("\n");
   for(i = 0; i < 128; i++)
   {
      b[i]=a[i]/count;
      fprintf(fptr1,"%f,%d\n", b[i],i+1);
   }
   
   fclose(fptr);
   fclose(fptr1);
   
   return 0;
}