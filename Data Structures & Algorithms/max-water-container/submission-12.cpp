class Solution {
public:
    int maxArea(vector<int>& heights) {

        int small,max,product=0,n=heights.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            
            {
                small=min(heights[i],heights[j]);
                product=small*(j-i);
                if(product>max)
                {
                    max=product;
                }
            }
        }
        return max;
        
    }
};
