int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	for(int i = 0; i < n; i++){
		if(arr[abs(arr[i])] < 0) return abs(arr[i]);
		arr[abs(arr[i])] *= -1;
	}
	return 0;
}
