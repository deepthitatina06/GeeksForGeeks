class Solution {
  public:
    void print_divisors(int n) {
        
       vector<int>ls; // Code here.
       for(int i=1;i<=sqrt(n);i++)
       {
           if(n%i==0)
           {
               ls.push_back(i);
               if((n / i) != i)
               {
                  ls.push_back(n/i); 
               }
               
           }
       }
       sort(ls.begin(),ls.end());
       for(auto it : ls)cout<< it <<" ";
    }
    int main()
    {
        int n;
        cin>>n;
        print_divisors(n);
        return 0;
    }
};