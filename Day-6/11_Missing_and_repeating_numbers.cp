pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here
	int repeating, missing;
	long expected_sum = n*(n+1)/2, actual_sum = accumulate(arr.begin(), arr.end(), 0);

	for(int i = 0; i < n; i++){
		if(arr[abs(arr[i])-1] < 0){
			repeating = abs(arr[i]);
			break;
		}
		arr[abs(arr[i])-1] *= -1;
	}

	
	missing = int(expected_sum - actual_sum+repeating);
	return make_pair(missing, repeating);
	
}
