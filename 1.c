/*Implement Euclid’s, consecutive integer checking and modified Euclid’s algorithms to find GCD of two nonnegative integers and perform comparative analysis.*/
#include<stdio.h>

int main(){
    // int a,b,rem;
    
    // printf("Enter two numbers:");
    // scanf("%d%d",&a,&b);
    // rem = a % b;
    // while(rem != 0){
    //     a = b;
	//     b = rem;
    //     rem = a % b;
       
    // }
    // printf("GCD is: %d",b);
    // return 0;

    // int m,n,min,count=0;;
	// printf("Enter m and n>> ");
	// scanf("%d %d",&m,&n);
	
	// min = (m>n) ? n : m;
	
	// while(min>0){
	// 	count++;
	// 	if (m%min==0 && n%min==0)
	// 		break;
	// 	min--;
	// }
	
	// printf("GCD: %d\nCount: %d\n",min, count);
    // return 0;
    int m,n, count=0;;
	printf("Enter m and n>> ");
	scanf("%d %d",&m,&n);
	
	while(n>0){
		count++;
		if (m>n)
			m=m-n;
		else
			n=n-m;
	}
	
	printf("GCD: %d\nCount: %d\n",m, count);
    

}
