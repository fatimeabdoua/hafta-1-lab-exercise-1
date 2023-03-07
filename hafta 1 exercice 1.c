#include<stdio.h>

int calculate(int number, int passing_grade){
	
	int array[100];
	int passed = 0;
	int failed = 0;
	int sum=0;
	int i;
	
	for(i= 0; i<number; i++){
		
		printf("enter each student grade");
		scanf("%d",&array[i]);
		
		if(array[i] > passing_grade){
			
			passed++;
		}
		else{
			
			failed ++;
		}
		
		sum = sum + array[i];
		 
	}
	
	printf(" the average is %d:",sum/number);
	
	return failed;
	
}

int main(){
	

	int number;
	printf("enter number of students");
	scanf("%d",&number);
	
	int passing_grade;
	printf("enter passing grade");
	scanf("%d",&passing_grade);
	
	int failed = calculate(number,passing_grade);
	
	printf("number of failed student is %d:",failed);
	
}


