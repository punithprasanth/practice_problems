//an araay of size 501 is created and index equal to the element of given array is
// incremented the index corresponding to the value 0 in array a is returned
int missing_no(int *arr){
	int a[501]={0};
	int index;
	for(index=0;index<len;index++)
	(a[arr[index]])++;
	for(index=1;index<len;index++){
		if(a[index]==0)return index;
	}
}

