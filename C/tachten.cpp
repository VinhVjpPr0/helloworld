#include <string.h>
#include <stdio.h>
    
int main()
{
   char hoten[80];
   printf("nhap ho ten: ");
   gets(hoten);
   char *token;
   token = strtok(hoten, " ");
   int c=0;
   char mang[5][15];
   while( token != NULL )
   {
      printf( " %s\n", token );
      strcpy(mang[c],token);
      c++;
      token = strtok(NULL, " ");
   }
   printf("Ho : %s\n",mang[0]);
   printf("Chu lot: ");
   for(int i=1;i<c-1;i++){
    printf("%s ",mang[i]);
   }
   printf("\nTen: %s\n",mang[c-1]); 
   printf("---------------------------\n");
   return(0);
}

