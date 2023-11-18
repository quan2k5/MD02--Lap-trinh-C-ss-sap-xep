#include<stdio.h>
#include<stdlib.h>
int main(){
      printf("nhap cot doc cua mang");
      int n;
      scanf("%d",&n);
      printf("\nnhap hang ngang cua mang");
      int m;
      scanf("%d",&m);
      int numbers[n][m];
      for(int i=0;i<n;i++){
      	for(int j=0;j<m;j++){
      		printf("mang[%d][%d]",i,j);
      		scanf("%d",&numbers[i][j]);
      		}
      		}
      	do{
      		printf("nhap vao lua chon cua ban");
      		int choice;
      		int k;
      		scanf("%d",&choice);
      		switch(choice){
      			case 1:
      			 for(int i=0;i<n;i++){
      	          for(int j=0;j<m;j++){
					printf("%d  ",numbers[i][j]);
					}
					printf("\n");
					}
					break;
				case 3:
					k=m*n;
				for(int i=0;i<k-1;i++){
      	          for(int j=i+1;j<k;j++){
      	          		if(numbers[i/n][i%n]>numbers[j/m][j%m]){
      	          			int temp=numbers[i/n][i%n];
      	          			numbers[i/n][i%n]=numbers[j/m][j%m];
      	          			numbers[j/m][j%m]=temp;
      	          			}
      	          			}
      	          			}
      	        for(int j=0;j<n;j++){
      	          for(int i=0;i<m;i++){
					printf("%d  ",numbers[i][j]);
					}
					printf("\n");
					}
					break;
      	       case 2:
      	       	k=m*n;
				for(int i=0;i<k-1;i++){
      	          for(int j=i+1;j<k;j++){
      	          		if(numbers[i/n][i%n]>numbers[j/m][j%m]){
      	          			int temp=numbers[i/n][i%n];
      	          			numbers[i/n][i%n]=numbers[j/m][j%m];
      	          			numbers[j/m][j%m]=temp;
      	          			}
      	          			}
      	          			}
      	        for(int i=0;i<m;i++){
      	          for(int j=0;j<n;j++){
					printf("%d  ",numbers[i][j]);
					}
					printf("\n");
					}
					break;
				case 4:
					exit(0);
				default:
					printf("vui long nhap lai  tu 1 den 4\n");			
		  }	
		  }while(1==1);
}			
		

