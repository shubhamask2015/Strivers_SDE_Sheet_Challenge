vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	for (int i = m - 1; i >= 0; i--) {
		arr1[i + n] = arr1[i];
		arr1[i] = 0;
	}

	int i = 0, j = n, k = 0;
	while(k < n && j< m+n){
		if(arr1[j] < arr2[k]){
			arr1[i] = arr1[j];
			i++; j++; 
		}
		else{
			arr1[i] = arr2[k];
			i++; k++;
		}
	}
	while(k != n){
		arr1[i] = arr2[k];
		i++; k++;
	}
	return arr1;

}