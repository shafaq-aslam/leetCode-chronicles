class Solution {
public:
    int maxArea(vector<int>& height) {  //O(n)
  
        int lp = 0, rp = height.size()-1, maxWater = 0;

        while(lp < rp){
            int wd = rp-lp;
            int ht = min(height[lp], height[rp]);
            int currWater = wd*ht;
            maxWater = max(maxWater, currWater);

            // if(height[lp] < height[rp]){
            //     lp++;
            // }else{
            //     rp--;
            // } OR

            height[lp] < height[rp] ? lp++ : rp--;

        }
        return maxWater;
        // int maxWater = 0;
        
        // for(int i=0; i<height.size(); i++){
        //     for(int j=i+1; j<height.size(); j++){
        //         int wd = j - i;
        //         int ht = min(height[i], height[j]);
        //         int curWater = wd * ht;
        //         maxWater = max(maxWater, curWater);
        //     }
        // }
        // return maxWater;
    }
};