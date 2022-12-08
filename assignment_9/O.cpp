#include<iostream>
#include<map>
using namespace std;
int n, m;
map<string, string> q;
int main(){
	cin >> n;
    string login, password;
	for(int i = 0; i < n; ++i){
		cin >> login >> password;
		q[login] = password;
	}
	cin >> m;
	while(m--){
		cin >> login >> password;
		if(!q.count(login))
			cout << "login error\n";
		else if(q[login] != password)
			cout << "password error\n";
		else
			cout << "correct password\n";	
	}               
	return 0;
}