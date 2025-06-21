#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int t ; cin >> t ;
    while(t--)
    {
        int n , m ;
        cin >> n >> m ;
        char freq[m][26] ;
        memset(freq , 0 , sizeof freq);
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j  < m ; j++){
                char x ; cin >> x ;
                freq[j][x - 'a']++;
            }
        }
        for(int i = 0 ; i < n - 1; i++){
            for(int j = 0 ; j  < m ; j++){
                char x ; cin >> x ;
                freq[j][x - 'a']--;
            }
        }
        for(int i = 0 ; i < m ; i++){
            for(char j = 'a' ; j  <= 'z' ; j++){
                if(freq[i][j - 'a']){
                    cout << j ;
                    break;
                }
            }
        }
        cout << endl;
    }
   return 0 ; 
}
