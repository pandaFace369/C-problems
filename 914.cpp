class Solution {
    
    private:
    int gcd(int a, int b){
        while(a%b!=0){
            int x=a%b;
            a=b;
            b=x;
            
        }
        return b;
    }
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        
    
        
        int n=deck.size();
        if(n<2){
            return false;
        }
        int i=1;
        sort(deck.begin(),deck.end());
       while(i<n){
           if(deck[i]==deck[i-1]){
               i++;
           }
           else{
               break;
           }
           
       }
        
    int a=i;
    int b=1;
        
        while(i<deck.size()){
            if(i+1==n || deck[i]!=deck[i+1]){
                
                a=gcd(a,b);
                if(a<2){
                    return false;
                }
                i++;
                b=1;
                
            }
            else{
                i++;
                b++;
            }
        }
        return true;
    
        
    }
};
