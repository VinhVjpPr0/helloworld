//Viết chương trình tạo tệp “sonuyen.dat”chứa n số nguyên nhập vào từ bàn phím.
//Đọc lại các số nguyên từ tệp và đưa ramàn hình.	
#include <iostream>
#include <stdio.h>

int main(){
	FILE *f;
	int n,i;
		printf("Nhap n: ");scanf("%d",&n);
	int a[n];
		f=fopen("songuyen.dat","wb+");
		for ( i=0; i<n; i++){
			printf("a[%d]=",i); 
			scanf("%d",&a[i]);
			fprintf(f, "%d",a[i] );
		}
		for (i=0; i<n; i++){
			fscanf(f,"%d",&a[i]);
			printf("a[%d]=%d \t",i,a[i]);
		}
		fclose(f);
	return 0;

}
