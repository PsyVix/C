													//**Simple Calculator**//
#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
	float v1,v2,ans; 	//Declartion for values 
	char opr; 			//Declartion for opreator
	printf("Enter your Equation:");
	scanf("%f %s %f",&v1,&opr,&v2);      //Accepting value from user
	switch(opr)
	{
		case'+': ans=v1+v2;    //Addition operation
				 printf("Addition of %.1f and %.1f is:%.4f",v1,v2,ans);    //Addition operation output
		          break;
		case'-': ans=v1-v2;    //Subtraction operation
				 printf("Subtraction of %.1f and %.1f is:%.4f",v1,v2,ans);    //Subtraction operation output
		          break;
		case'*': ans=v1*v2;    //Multiplication operation
				 printf("Multiplication of %.1f and %.1f is:%.4f",v1,v2,ans);    //Multiplication operation output
		          break;
		case'/': ans=v1/v2;    //Division operation
				 printf("Division of %.4f and %.4f is:%.4f",v1,v2,ans);    //Division operation output
		          break;
		case'^': ans=pow(v1,v2);    //Addition operation
				 printf("%.1f^%.1f is:%.4f",v1,v2,ans);    //Power operation output
		          break;
		
				

	}

}