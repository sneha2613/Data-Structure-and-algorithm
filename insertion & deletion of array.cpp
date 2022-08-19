#include<stdio.h>
int main(){
	int 10;
	scanf("%d", &n);
	int arr[10];
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	//insert element at middle
	int position,element;
	printf("Enter the position you want to insert: ");
	scanf("%d", &position);
	pritf("\nEnter the element: ");
	scanf("%d", element)
	for(int i=n;i>position;i--){
		arr[i]=arr[i-1]
	}
	arr[position]=element;
}
