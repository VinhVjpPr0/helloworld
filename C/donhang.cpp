//Viết chương trình tạo tệp “sonuyen.dat”chứa n số nguyên nhập vào từ bàn phím.Đọc lại các số nguyên từ tệp và đưa ra màn hình.
/*#include <bits/types/FILE.h>
#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
int main(){
    FILE *f;
    int n,x;
        f=fopen("songuyen.dat","wb");
        printf("Nhap n:"); scanf("%d",&n);
            for (int i=0; i<n; i++){
                printf("a[%d]=",i);
                scanf("%d",&x);
                fwrite(&x,sizeof(x),1,f);
            }
        fclose(f);
        f = fopen("songuyen.dat","rb");
        for (int i=0; i<5; i++){
            fread(&x,sizeof(x),1,f);
            printf("a[%d]=%d\t",i,x);
        }
        fclose(f);
    return 0;    
}*/
//Tạo tệp nhị phân mathang.bin chứathông tin về n mặt hàng, 
//mỗi mặt hàng cóthông tin về tên hàng, số lượng, đơn giá.Đọc tệp và tính tổng tiền của n mặt hàng.
#include <iostream>
#include <stdio.h>
#include <string.h>
//khai bao struct
struct donhang{
    char tenhang[50];
    int soluong;
    float dongia;
};
struct donhang2{
    char tenhang[50];
    int soluong;
    float dongia;
};
int main(){
    FILE *f;
    int n;
        printf("Nhap n:"); scanf("%d",&n);
    donhang dh;
        f = fopen("donhang.dat","wb");
        for (int i=0; i<n; i++){
            printf("Nhap don hang thu %d:\n",i+1);
            printf("Nhap ten hang:"); scanf(" "); fgets(dh.tenhang,sizeof(dh.tenhang),stdin);
            printf("Nhap so luong:"); scanf("%d",&dh.soluong);
            printf("Nhap don gia: "); scanf("%f",&dh.dongia);
            fwrite(&dh,sizeof(struct donhang),1,f);
        }
        fclose(f);
    donhang2 dh2;
        f= fopen("donhang.dat","rb");
        for (int i=0; i<n; i++){
            fread(&dh2, sizeof(struct donhang2), 1, f);
            printf("Don hang thu %d:\n",i+1);
            printf("\tTen hang: %s",dh2.tenhang);
            printf("\tSo luong: %d\n",dh2.soluong);
            printf("\tDon gia: %0.3f\n",dh2.dongia);
        }
        fclose(f);
    return 0;

}