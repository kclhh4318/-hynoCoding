#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void def(){
	cin.tie(0); cout.tie(0);
	ios_base::sync_with_stdio(false);
}

int main(){

	def();

	int n;
	string namae, status;
	cin >> n;
	unordered_set<string> name;

	for(int i = 0; i < n; i++){
		cin >> namae >> status;
		if(status == "enter"){
			name.insert(namae);
		}
		else{
			name.erase(namae);
		}
	}

	vector<string> permut(name.begin(), name.end());

	sort(permut.rbegin(), permut.rend());

	for(const auto& it : permut) cout << it << '\n';

	cout << endl;

	return 0;
}