#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    stack<int> s;
    
    for(int i = 0; i < n; ++i){
        int cmd;
        cin >> cmd;
        
        if(cmd == 1){
            int x;
            cin >> x;

            s.push(x);
        }
        else if(cmd == 2){
            if(s.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << s.top() << '\n';
                s.pop();
            }
        }
        else if(cmd == 3){
            cout << s.size() << '\n';
        }
        else if(cmd == 4){
            cout << (s.empty() ? 1 : 0) << '\n';
        }
        else if(cmd == 5){
            if(s.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << s.top() << '\n';
            }
        }
    }
    
    return 0;
}