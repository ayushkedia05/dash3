    #include<bits/stdc++.h>
    using namespace std;

   

    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
           int n;
           cin>>n;
           int arr[n];
           map<int,int> mp;
           for(int i=0;i<n;i++)
           {
               cin>>arr[i];
               mp[arr[i]]++;
           }
           vector<int> vec,vec1;
           int c=0,d=0;
           for(auto it:mp)
            {
                if(it.second>2)
                c++;
                else if(it.second==2)
                {
                    d++;
                    vec.push_back(it.first);
                    vec1.push_back(it.first);
                }
                else
                vec1.push_back(it.first);
            }

            if(c!=0)
            {
                cout<<"-1"<<"\n";
                continue;
            }

            if(d==0)
            {
                continue;
            }
            sort(vec.begin(),vec.end(),greater<int>());
            sort(vec1.begin(),vec1.end());

            for(int i=0;i<vec1.size();i++)
            cout<<vec1[i]<<" ";

            for(int i=0;i<vec.size();i++)
            cout<<vec[i]<<" ";


            cout<<"\n";




        }
        return 0;
    }