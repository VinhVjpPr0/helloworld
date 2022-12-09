/*#include <iostream>
#include <stdio.h>
 
struct threeNum
{
   int n1, n2, n3;
};
 
int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;
 
   if ((fptr = fopen("C:\\program.bin","wb")) == NULL){
       printf("Error! opening file");
 
       // Program exits if the file pointer returns NULL.
       exit(1);
   }
 
   for(n = 1; n < 5; ++n)
   {
      num.n1 = n;
      num.n2 = 5*n;
      num.n3 = 5*n + 1;
      fwrite(&num, sizeof(struct threeNum), 1, fptr); 
   }
   fclose(fptr); 
  
   return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int* a;
int n,i;
printf("Nhap vao so phan tu cua mang: ");scanf("%i",&n);
a = (int*) calloc(n, sizeof(int));//Cap phat bo nho cho mang n phan tu nguyenif(!a)
/*{
printf("Cap phat bo nho bi loi");
return 1;
}*/
//Nhap cac gia tri vao mang
printf("Nhap vao mang so nguyen:\n" );
for(i=0;i<n;i++)
{
printf("Nhap vao so thu %i: ",i+1); scanf("%i",&a[i]);
}
//Mo rong kich thuoc mang them 10 phan tu
a = (int*) realloc(a, n + 10);
//Dua cac so nhap vao ra man hinh
printf("Cac so da nhap la:\n");
for(i=0;i<n;i++) printf("%i ",a[i]);
free(a); //Giai phong vung nho cap phat cho mang
return 0;
}