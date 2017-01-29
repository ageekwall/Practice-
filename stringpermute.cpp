#include<iostream>
using namespace std;
int count = 0;
void permute(string s, int index)
 {
 	
 	
 	if(index+2 == s.size()) {
 		count++;
 		cout<<s<<endl;
 		char c = s[index];
 		s[index] = s[index+1];
 		s[index+1] = c;
 		count++;
 		cout<<s<<endl;
 		return;
 	}	
 	for(int i =index;i<s.size();i++) {
 		char c = s[index];
 		s[index] = s[i];
 		s[i] = c;
 		permute(s, index+1);
 	
 	}
 	
 }
 int main() {
 	string s;
 	cin>>s;
 	permute(s,0);
 	
 	cout<<count<<endl;
}
