#include<iostream>
using namespace std;

int main(){
	int sortArray[]={5,3,1,2,4,6,12,14,15,16,16};
	int length = sizeof(sortArray)/sizeof(int);
	cout<<sizeof(int)<<endl;
	cout<<length<<endl;
	cout<<"======"<<endl;
	for(int j=1;j<length;j++){

		int temp = sortArray[j];
		for(int i=j-1;i>=0;i--){
			if(sortArray[i]<temp){
				break;
			}else{
				sortArray[i+1]=sortArray[i];
				sortArray[i]=temp;
			}
			
		}
	}
	for(int i=0;i<length;i++){
		cout<<sortArray[i]<<endl;
	}
}

sdfsdfwe{wewewe}