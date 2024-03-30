{
	// Place your snippets for cpp here. Each snippet is defined under a snippet name and has a prefix, body and 
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the 
	// same ids are connected.
	// Example:
	"boilerplate": {
		"prefix": "boilerplate",
		"body": [
			"#define sz size",
			"#define ll long long",
			"#define cy cout << \"YES\" << endl",
			"#define cn cout << \"NO\" << endl",
			"#define pb push_back",
			"#define ff first",
			"#define ss second",
			"const int M = 1e9+7;",
			"#include <bits/stdc++.h>",
			"using namespace std;",
			"void solve()",
			"{",
			"$1",
			"}",
			"int32_t main()",
			"{",
			"ios_base::sync_with_stdio(false);",
			"cin.tie(NULL);",
			"//int t;",
			"//cin >> t;",
			"//while(t--){",
			"//solve();",
			"//}",
			"return 0;",
			"}",
		],
		"description": "Log output to console"
	},
	"binexp": {
		"prefix": "binexp",
		"body": [
			"ll binary_exponention(ll a, ll b)",
			"{",
			"ll ans = 1;",
			"while (b> 0)",
			"{",
			"if (b & 1)",
			"{",
			"ans = (ans* a)%M;",
			"}",
			"a = (a * a)%M;",
			"b >>= 1;",
			"}",
			"return ans;",
			"}",
		],
		"description": "Binary exponetial function"
	},
	"printBinary": {
		"prefix": "printBinary",
		"body": [
			"void printBin(long long n)",
			"{",
			"for (int i = 10; i >= 0; i--)",
			"{",
			"cout << ((n >> i) & 1);",
			"}",
			"cout << endl;",
			"}",
		],
		"description": "To print binary numbers"
	},
	"Bit manipulation": {
		"prefix": "bitManipulation",
		"body": [
			"// Important Binary Functions For CP Created By Bhaumil Panchal",
			"// int a = 13;",
			"// int i = 3;",
			"// *For Checking Bit is Set or not*",
			"// if(a&(1<<i)!=0){",
			"// Set",
			"// }",
			"// else{",
			"//     Not Set",
			"// }",
			"// *For Ith Making Bit Set or not*",
			"// (a|(1<<i))",
			"// *For Ith Making Bit Set or not*",
			"// (a&(~(1<<i)))",
			"// *For Toggling Ith bit***",
			"// (a^(1<<i))",
		],
		"description": "To print binary numbers"
	},
	"Prime": {
		"prefix": "isPrime",
		"body": [
			"bool isPrime(int n)",
			"{",
			// Corner case
			"if (n <= 1)",
			"return false;",
			// Check from 2 to square root of n
			"for (int i = 2; i <= sqrt(n); i++)",
			"if (n % i == 0)",
			"return false;",
			"return true;",
			"}",
		],
		"description": "Prime Function"
	},
	"PrimeFactorization": {
		"prefix": "primeFactorization",
		"body": [

			"void primeFactorization(long long n) {",
				"vector<int> factors;",
			
				"// Divide the number by 2 until it is no longer divisible by 2",
				"while (n % 2 == 0) {",
					"factors.push_back(2);",
					"n /= 2;",
				"}",
			
				"// Start checking for prime factors from 3 onwards",
				"for (int i = 3; i <= n; i += 2) {",
					"while (n % i == 0) {",
						"factors.push_back(i);"
						"n /= i;",
					"}",
				"}",
			
				"if (n > 2) {",
					"factors.push_back(n);",
				"}",
			
				"// Print the prime factors",
				"cout << 'Prime factorization of the number:';",
				"for (int factor : factors) {",
					"cout << factor << ' ';",
				"}",
				"cout << endl;",
			"}",
		],
		"description": "Prime Function"
	},
	"BinarySearch": {
		"prefix": "binarySearch",
		"body": [
			"int binarySearch(const std::vector<int>& arr, int target) {",
			"int left = 0;",
			"int right = arr.size() - 1;",
			"while (left <= right) {",
			"int mid = left + (right - left) / 2;",
			"if (arr[mid] == target) {",
			"return mid;",
			"} else if (arr[mid] < target) {",
			"left = mid + 1;",
			"} else {",
			"right = mid - 1;",
			"}",
			"}",
			"return -1; // Element not found",
			"}",
		],
		"description": "BinarySearch"
	},
	"Sieve": {
		"prefix": "sieve",
		"body": [
			"void SieveOfEratosthenes(int n)",
			"{",
			// Create a boolean array "prime[0..n]" and initialize
			// all entries it as true. A value in prime[i] will
			// finally be false if i is Not a prime, else true.
			"bool prime[n + 1];",
			"memset(prime, true, sizeof(prime));",
			"for (int p = 2; p * p <= n; p++) {",
			// If prime[p] is not changed, then it is a prime
			"if (prime[p] == true) {",
			// Update all multiples of p greater than or
			// equal to the square of it numbers which are
			// multiple of p and are less than p^2 are
			// already been marked.
			"for (int i = p * p; i <= n; i += p)",
			"prime[i] = false;",
			"}",
			"}",
			// Print all prime numbers
			"for (int p = 2; p <= n; p++)",
			"if (prime[p])",
			"cout << p << ;",
			"}",
		],
		"description": "sieve function"
	}
}
