/*//Nhập vào dãy số nguyên có n phần tử. Tìm vị
//trí của phần tử có giá trị lớn nhất. Y/c sửdụng mảng động để chứa dãy số.
#include <iostream>
#include <stdio.h>

int main() {
	int n;
		printf("Nhap n:"); 
		scanf("%d",&n);
	int *a=(int*)calloc(n,sizeof(int));
		for (int i=0; i<n; i++){
			printf("a[%d]=",i);
			scanf("%d",&a[i]);
		}
	int max=a[1];
		for (int i=0; i<n; i++){
			if (a[i]>max) max=a[i];
		}
		printf("Gia tri lon nhat la: %d\n",max);
	free(a);
	return 0;	
}*/
/*//Nhập vào dãy số nguyên có n phần tử. Chènthêm phần tử x vào cuối dãy. Yêu cầu sửdụng mảng động chứa dãy số
#include <iostream>
#include <stdio.h>

int main(){
	int n,x,c;
		printf("nhap so luong phan tu:");
			scanf("%d",&n);
		printf("nhap x:");
			scanf("%d",&x);
		int *a=(int*)calloc(n,sizeof(int));
			for (int i=0; i<n; i++){
				printf("a[%d]=",i);
				scanf("%d",&a[i]);
			}
		c=n+1;
		a=(int*)realloc(a,c*sizeof(int));
			a[n]=x;
		for (int i=0; i<=n; i++){
			printf("a[%d]=%d\t",i,a[i]);
		}
	free(a);
	return 0;
}*/
//Cho ma trận nguyên có m hàng, n cột. Tìmphần tử nhỏ nhất trên từng hàng và đổi vềcuối hàng. Y/c sử dụng mảng động
#include <iostream>
#include <stdio.h>
 
int main(){
	int m,n;
		printf("nhap m:");
			scanf("%d",&m);
		printf("nhap n:");
			scanf("%d",&n);
	int min[m],vallue[m];
	int **a=(int**)calloc(m,sizeof(m));
		for (int i=0; i<m; i++){
			a[i]=(int*)calloc(n,sizeof(n));
		}
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				printf("a[%d][%d]=",i,j);
				scanf("%5d",&a[i][j]);
			}
		}
		for (int i=0; i<m; i++){
			min[i]=a[i][0];
			vallue[i]=0;
		}
		for (int i=0; i<m; i++){
			for (int j=0; j<m; j++){
				if (min[i]>a[i][j]){
					min[i]=a[i][j];
					vallue[i]=j;
				}
			}
		}
		for (int i=0; i<m; i++){
			for (int j=vallue[i]; j<n; j++){
				a[i][j]=a[i][j+1];
			}
			a[i][m-1]=min[i];
		}
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			printf("a[%d][%d]=%d ",i,j,a[i][j]);
		}
		printf("\n-------------------------------\n");
	}
	return 0;
}