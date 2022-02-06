#include<bits/stdc++.h>
using namespace std;

bool checkIfExist(vector<int>& arr) {
        int currNum;
        for(int i=0; i<arr.size(); i++){
            currNum = arr[i]*2;
            for(int j=0; j<arr.size(); j++){
                if(currNum == arr[j] && i!=j)
                    return true;
            }
        }
        return false;
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
	
	bool ans = checkIfExist(v);
	string x = ans == 0 ? "false" : "True";
	cout<<x;
	
}
