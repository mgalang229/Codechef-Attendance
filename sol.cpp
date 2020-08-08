#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string f[n], l[n];
		for(int i=0; i<n; ++i)
			cin >> f[i] >> l[i];
		for(int i=0; i<n; ++i) {
			bool ok=0;
			for(int j=0; j<n; ++j) 
				if(f[i]==f[j]||l[i]==l[j])
					if(j!=i)
						ok=1;
			if(ok)
				cout << f[i] << " " << l[i] << "\n";
			else
				cout << f[i] << "\n";
		}
	}
}
