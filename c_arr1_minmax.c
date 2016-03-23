//functions takes an array, its length and adress of max and min
#include<stdio.h>
void maxmin(int *arr,int len,int *max,int *min){
	if(arr==NULL||max==NULL||min==NULL||len<=0)
    max=min=NULL;
	else{	
	*max=*min=arr[0];
	int index;
	for(index=1;index<len;index++){
		if(arr[index]<*min)*min=arr[index];
		else if(arr[index]>*max)*max=arr[index];
	}
}
}

