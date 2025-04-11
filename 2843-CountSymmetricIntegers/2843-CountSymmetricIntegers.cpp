// Last updated: 4/12/2025, 1:52:18 AM
class Solution {
public:
    int calc(string s){
        int num=stoi(s);
        int sum=0;
        while(num!=0){
            sum+=num%10;
            num=num/10;
        }
        return sum;
    }
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            int num=i;
            string s=to_string(num);
            if(s.size()%2!=0){
                continue;
            }
            string first="";
            for(int j=0;j<s.size()/2;j++){
                first.push_back(s[j]);
            }
            string second="";
            for(int j=s.size()/2;j<s.size();j++){
                second.push_back(s[j]);
            }
           
            int num1=calc(first);
            int num2=calc(second);
            if(num1==num2){
                count++;
            }
        }
        return count;
    }
};