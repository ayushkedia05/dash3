#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int ans=0;
	vector<int> vec;
	unordered_map<int,int> map;
	unordered_map<int,int> map2;

	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		vec.push_back(a);
		map2[a]++;
	}
	sort(vec.begin(),vec.end());

    int ma=*max_element(vec.begin(),vec.end());
    	for (int i = 0; i < n; i++){
		int x = vec[i];
		for (int j = 2 * x; j <= ma; j += x){
		map[j]++;
		}
	}

	// for(auto it:map)
	// cout<<it.first<<" "<<it.second<<"\n";

     for(int i=0;i<n;i++)
	 {
		 if(map[vec[i]]==0 && map2[vec[i]]==1)
		 ans++;
	 }
	

	cout<<ans;
}