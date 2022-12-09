/*//Nhap vao ho ten sau do tach ten va in ra.
#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	char *s2;
	int i;

		printf("Nhap vao ho ten: ");
		gets(s);
			for ( i=strlen(s)-2; i>=0; i--){
				if (s[i-1]==' '){ 
					s2=&s[i];
					break;
				}
			}
		printf("Ten sau khi duoc tach la: ");
		for (;s2<=&s[strlen(s)];s2++){
			printf("%c",*s2);
		}
		printf("\n");
	return 0;
}*/
/*//De: Nhập vào 1 dãy số nguyên có n phần tử.Viết hàm xóa phần tử thứ m trong dãy (1 <=m <=n).
#include<iostream>
#include<stdio.h>

void xoapt(int* arr, int x, int z);

int main(){
	int n,m;
		printf("Nhap n: ");
			scanf("%d",&n);
		printf("Nhap m: ");
			scanf("%d",&m);	
	int a[n];
		for (int i=0; i<=n; i++){
			printf("a[%d]=",i);
			scanf("%d",&a[i]);
	    }
	    xoapt(a,n,m-1);
		printf("Ham sau khi xoa la: \n");
			for (int i=0; i<n; i++) 	
				printf("a[%d]=%d\n",i,a[i]);
	return 0;
}
void xoapt(int* arr, int x, int z){
	for (int i=z; i<x; i++)
		arr[i]=arr[i+1];
	

}*/
/*//Viết chương trình tính tổng, hiệu, tíchvà thương của hai số nguyên nhập vào từ bànphím. 
//Chương trình yêu cầu người sử dụnglựa chọn một trong các cách tính.
#include<iostream>
#include<stdio.h>

int tinhtong(int m, int n);
int tinhhieu(int m, int n);
float tinhthuong(int m, int n);
int tinhtich(int m, int n);

int main(){
	int a,b,c;
	float  kq;
		printf("Nhap a: ");
			scanf("%d",&a);
		printf("Nhap b: ");
			scanf("%d",&b);
		printf("Chon phep tinh ban muon lam duoi day:\n");
		printf("1.%d + %d\n",a,b);
		printf("2.%d - %d\n",a,b);
		printf("3.%d x %d\n",a,b);
		printf("4.%d / %d\n",a,b);
			scanf("%d",&c);
				if (c==1) kq=tinhtong(a,b);
				if (c==2) kq=tinhhieu(a,b);
				if (c==3) kq=tinhtich(a,b);
				if (c==4) kq=tinhthuong(a,b);
		printf("Ket qua la: %.0f\n",kq);
	return 0;
}

int tinhtong(int m, int n){
	return (m+n);
}
int tinhhieu(int m, int n){
	return (m-n);
}
int tinhtich(int m, int n){
	return (m*n);
}
float tinhthuong(int m, int n){
	return (m/n);
}*/
//test thư viện tự tạo 
#include<iostream>
#include<mylibrary.h>
#include<stdio.h>

int main(){
	int a[100];
	int n,i,r,l;
	printf("nhap n:");
		scanf("%d",&n);
		scanf("%d",&r);
		scanf("%d",&l);
			for (i=0; i<=n; i++){
				printf("a[%d]=",i);
					scanf("%d",&a[i]);
			}

		quickSort(a,r,l);
		for (i=1; i<=n ; i++)
		printf("%d ",a[i]);
	return 0;
}

