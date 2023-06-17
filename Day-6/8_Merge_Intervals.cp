vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>> res;
    sort(intervals.begin(), intervals.end());
    for(int i = 0; i < intervals.size(); i++){
        if(res.empty()){
            res.push_back({intervals[i][0], intervals[i][1]});
        }
        else{
            if(intervals[i][0] <= res.back()[1]){
                res.back()[1] = max(intervals[i][1], res.back()[1]);
            }else{
                res.push_back({intervals[i][0], intervals[i][1]});
            }
        }
    }
    return res;
}