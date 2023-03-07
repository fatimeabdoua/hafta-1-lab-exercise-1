#include<stdio.h>

int bodyindex(int height, int weight){
	
	int body_mass_index;
	body_mass_index= weight/(height * height);
	
	if(0<body_mass_index<18){
		
		return 1;
	}
	
	else if(19<body_mass_index<25){
		
		return 2;
	}
	
	else if(26<body_mass_index<30){
		
		return 3;
	}
	
	else{
		
		return 4;
	}
		
}

int main(){
	
	int height;
	printf("enter the height");
	scanf("%d",&height);
	
	int weight;
	printf("enter the weight");
	scanf("%d",&weight);
	
	int body_mass_index= bodyindex(height,weight);
	
	if(body_mass_index==1){
		
		printf("thin");
	}
	
	else if(body_mass_index==2){
		
		printf("normal");
	}
	
	else if(body_mass_index==3){
		
		printf("overweight");
	}
	
	else{
		
		printf("obese");
	}
}
