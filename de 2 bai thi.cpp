#include <stdio.h> 
int main(){
	int row,col;
	printf("Nhap so dong va cot cua mang: ");
	scanf("%d %d", &row,&col);
	int number[row][col]; 
	do {
		printf("\nMENU\n"); 
		printf("1. Nhap gia tri cac phan tu cua mang \n");
		printf("2. In gia tri cac phan tu trong mang theo ma tran \n");
		printf("3. Tinh so luong cac phan tu chia het cho 2 va 3 trong mang \n");
		printf("4. In cac phan tu va tong cac phan tu nam tren duong bien, duong cheo chinh va duong cheo phu \n");
		printf("5. Su dung thuat toan sap xep lua chon sap xep cac phan tu tang dan theo cot cua mang \n");
		printf("6. In ra cac phan tu la so nguyen to trong mang \n");
		printf("7. Su dung thuat toan noi bot sap xep cac phan tu tren duong cheo chinh cua mang giam dan \n");
		printf("8. Nhap gia tri mot mang 1 chieu gom m phan tu va chi so dong muon chen vao mang, thuc hien chen vao mang 2 chieu \n");
		printf("9. Thoat \n");
		int choice;
		printf("Lua chon cua ban la: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				printf("Nhap gia tri cac phan tu cua mang: \n");
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						printf("number[%d][%d] = ", i,j);
						scanf("%d", &number[i][j]); 
					} 
				} 
			break;
			case 2:
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						printf("%d\t", number[i][j]); 
					}
					printf("\n"); 
				} 
			break;
			case 3:
				int count = 0;
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						if(number[i][j] % 2 == 0 && number[i][j] % 3 == 0){
						printf ("so chia het cho 2 va 3 la number[%d][%d]=%d\n",i,j,number[i][j]);
						count++;
						}
					} 
				}
			printf("So luong phan tu chia het cho 2 va 3 la: %d\n", count);
			break;
				 
			case5: 
				for(int j=0;j<col;j++){
					for(int i = 0;i < row-1;i++){
						int minIndex = i;
            			for (int k = i + 1; k < row; ++k) {
                			if (number[k][j] < number[minIndex][j]) {
                    			int temp = number[i][j];
                    			number[i][j] = number[minIndex][j];
                    			number[minIndex][j] = temp;
                			}
            			} 
					} 
				}
			printf("Day tang dan theo cot cua mang la: ",number,row,col);	
			break;
			case6: 
				printf ("trong mang gom cac so nguyen to la :\n");
				for(int i=0;i < row;i++){
					for(int j=0;j < col;j++){
					count=0;
					for(int k=2;k<number[i][j];k++){
						if(number[i][j] % k == 0){
							count=1;
							break;
					    }
					}
						if(count == 0 && number[i][j] >=2){
					        printf ("%d\n",number[i][j]);
						}	
					}
			 	}
			break;	
			case7:
				for (int i = 0; i < row; i++) {
        			for (int j = 0; j < col; j++) {
            			if (i == j) {
                			for (int x = i; x < row - 1; x++) {
                    			for (int y = x + 1; y < row; y++) {
                        			if (number[x][x] < number[y][y]) {
                            			int temp = number[x][x];
                            			number[x][x] = number[y][y];
                            			number[y][y] = temp;
                        			}
                    			}
                			}
            			}
        			}
    			}
			printf ("Day cac phan tu tren duong cheo chinh cua mang giam dan la: ",number,row);
			break;
			case9:
				printf("Ket thuc chuong trinh\n");
                break;
		}
	} while (1==1); 
} 
