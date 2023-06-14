int maximumProfit(vector<int> &prices){
    // Write your code here.....
    int maxAmnt = 0, minEle = prices[0];
    for(int i = 1; i < prices.size();i++){
        if(prices[i] < minEle) minEle = prices[i];
        int profit = prices[i] - minEle;
        if(profit > maxAmnt) maxAmnt = profit;
    }

    return maxAmnt;

}