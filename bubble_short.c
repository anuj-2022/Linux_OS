#include<stdio.h> 
   
void display(int arr[], int n);
void bubble_short(int arr[], int n);

int main ()    
{    
	int i,j,temp,n=0;     
	int a[10]={15,14,12,11,77,45,41,59,52,19};     
	n=sizeof(a)/sizeof(a[0]);   
	printf("Before sorting array elements are\n");  
	display(a, n);  
	bubble_short(a, n);  
	printf("\nAfter sorting array elements are:\n");    
	display(a, n);  
}    

void display(int arr[], int n) 
{  
	int i;  
	for(i=0;i<n;i++)        
		printf("%d ",arr[i]);    
	        
}  
void bubble_short(int arr[], int n)   
{  
	int i, j, temp;  
	for(i=0;i<n;i++)    
	{    
		for(j=i+1;j<n;j++) 
		{
			if(arr[j]<arr[i])    
			{    
				temp=arr[i];    
				arr[i]=arr[j];    
				arr[j]=temp;     
			}     
		}     
	}     
}  
