#include <iostream>

using namespace std;

void newBubble(int arr[], int N){
int boundaryUp=N-1;
int boundaryDown=0;
int max=0;
int min=0;
int times=N/2;

while (times>0){
	int maxIndex=boundaryDown;
	for (int i=boundaryDown+1; i<=boundaryUp; i++){
		if(arr[maxIndex]>arr[i]){
			max=arr[maxIndex];
			arr[maxIndex]=arr[i];
			arr[i]=max;
			maxIndex=i;
			
		}
		else{
			maxIndex=i;
		}
	}
	boundaryUp --;

	int minIndex=boundaryUp;
	for(int i=boundaryUp-1; i>=boundaryDown; i--){
		if (arr[minIndex]<arr[i]){
			min=arr[minIndex];
			arr[minIndex]=arr[i];
			arr[i]=min;
			minIndex=i;
		}
		else{
			minIndex=i;
		}	
	}
	
	boundaryDown++;	
	times --;

}

}

int main(){
	int array[]={99,55,44,22,66,88,33,11};
	newBubble(array,8);
	for (int j=0; j<8; j++){
		cout<<array[j]<<" "<<endl;
	}

return 0;
	
}
