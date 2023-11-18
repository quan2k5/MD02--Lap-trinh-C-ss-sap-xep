#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("nhap so phan tu n trong mang");
	int n;
	scanf("%d",&n);
	int number[n];
	for(int i=0;i<n;i++){
		printf("mang[%d]",i);
		scanf("%d",&number[i]);
		}
	do{
		printf("\n1.in gia tri cac phan tu cua mang");
		printf("\n2.su dung insertsion  sort de sap xep mang giam dan");
		printf("\n3.su dung selection sort de sap xep mang tang dan va in ra");
		printf("\n4.su dung bubble sort de sap xep mang giam dan va in ra");
		printf("\n5.thoat");
		printf("\nnhap lua chon cua ban");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
			for(int i=0;i<n;i++){
				printf("%d",number[i]);
				}
				break;
			case 3:
				for(int i=0;i<n-1;i++){
	            for(int j=i+1;j<n;j++){
		         if(number[i]>number[j]){
			     int temp=number[i];
			      number[i]=number[j];
			      number[j]=temp;
			    }
			  }
			}
	         for(int i=0;i<n;i++){
		      printf("%d ",number[i]);
		  }
		  break;
		  case 4:
		  	for(int i=0;i<n-1;i++){
	          for(int j=0;j<n-1-i;j++){
		       if(number[j]<number[j+1]){
			    int temp=number[j];
			    number[j]=number[j+1];
			     number[j+1]=temp;
			    }
			   }
			    }
	            for(int i=0;i<n;i++){
		        printf("%d ",number[i]);
		        }
		  	  		break;
		  	case 2:
		  		for(int i=1;i<n;i++){
		  			int key=number[i];
		  			int j=i-1;
		  			while(j>=0 && number[j]<key){
		  				number[j+1]=number[j];
		  				j=j-1;
		  				}
		  				number[j+1]=key;
		  				}
		  		for(int i=0;i<n;i++){
		        printf("%d ",number[i]);
		        }
		  		break;
		  	case 5:
		  		exit(0);
		  	default:
			  printf("\vui long nhap lai tu 1 den 5");	
		  }
		  }while(1==1);
}			
	
