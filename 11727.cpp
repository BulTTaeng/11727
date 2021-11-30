#include <iostream>

using namespace std;

long long dp[1001]; 

#define MOD  10007

int main() {
  int n;
  cin >> n;

  dp[0] = 1;
  dp[1] = 3;

  for(int i =2; i<n; i++){
    dp[i] = (dp[i-1] + dp[i-2] *2) % MOD ;
  }

  cout << dp[n-1];
  return 0;

}