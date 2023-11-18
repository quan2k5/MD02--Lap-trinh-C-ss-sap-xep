#include <stdio.h>
int main (){
	printf("nhap so phan tu n trong mang");
	int n;
	scanf("%d",&n);
	int number[n];
	for(int i=0;i<n;i++){
		printf("mang[%d]",i);
		scanf("%d",&number[i]);
		}
		do{
			printf("\n1.in ra gia tri cac phan tu co trong mang");
			printf("\n2.nhap lua chon cua ban");
			int choice,findNumber,check=0;
			int start=0,end=n,mid;
			scanf("%d",&choice);
			switch(choice){
				case 1:
			for(int i=0;i<n;i++){
				printf("%d",number[i]);
				}
				break;
			case 2:
			printf("nhap 1 so ngau nhien");	
			scanf("%d",&findNumber);
			for(int i=0;i<n;i++){
				if(number[i]==findNumber){
					printf("mang[%d]=",i);
					printf("%d  ",number[i]);
					check=1;
				}		
				}
				if(check==0){
					printf("khong hop le");	
				}
				break;
			case 3:
					for(int i=0;i<n-1;i++){
						for(int j=0;j<n-i-1;j++){
							if(number[j]>number[j+1]){
								int temp=number[j];
								number[j]=number[j+1];
								number[j+1]=temp;
							}
						}
					}
				printf("nhap 1 so ngau nhien");	
		        scanf("%d",&findNumber);
		      while(start<=end){
		        	int mid=(end+start)/2;
		        	if(number[mid]>findNumber){
						end=mid-1;
					}else if(number[mid]==findNumber){
						break;
					}else{
						start=mid+1;
					}
				}
					printf("\nphan tu co gia tri bang findNumber la %d ",mid);
		}			
		}while(1==1);
}
