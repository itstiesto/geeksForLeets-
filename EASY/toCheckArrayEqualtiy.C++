class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        unordered_map<int,int>mp1;
        for(int i =0;i<N;i++){
            mp1[A[i]]++;
        }
        unordered_map<int, int>mp2;
        for(int i =0;i<N;i++){
            mp2[B[i]]++;
        }
        if(mp1==mp2){
            return true;
        }
        else{
            return false;
        }
    }
};
