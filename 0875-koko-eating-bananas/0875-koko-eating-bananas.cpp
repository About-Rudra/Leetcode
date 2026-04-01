class Solution {

    bool caneatintime(vector<int>& piles, int h, int speed){
        int hours = 0;

        for(int pile : piles){
            hours += (pile + speed - 1) / speed;
        }

        return hours <= h;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int minsp = 1, maxsp = 0;

        for(int pile : piles){
            maxsp = max(maxsp, pile);
        }

        while(minsp < maxsp){
            int mid = minsp + (maxsp - minsp) /2;

            if(caneatintime(piles, h, mid)){
                maxsp = mid;
            }else{
                minsp = mid+1;
            }
        }

        return minsp;
        
    }
};