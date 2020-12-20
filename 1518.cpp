class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int a=0;
        a+=numBottles;
        while(numBottles>=numExchange){
            int x=numBottles%numExchange;
            
            numBottles/=numExchange;
            a+=numBottles;
            numBottles+=x;
            
        }
        return a;
    }
};