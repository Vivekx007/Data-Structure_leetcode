#include<bits/stdc++.h>
using namespace std;

int Water(vector<int>& height){
	int max = INT_MIN;
	int i=0, j = height.size() - 1;
	int Area;
	
	while(i<j){
		Area = min(height[i], height[j]) * (j-i);
				if(max < Area){
					max  = Area;
				}
				if(height[i] < height[j]){
					i++;
				}
				else{
					j--;
				}
	}
			
		return max;		
			
			
			
		
	
	
}

int main(){
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0; i<n; i++){
		int k;
		cin>>k;
		v.push_back(k);
	}
	
	cout<<Water(v);
	
}
