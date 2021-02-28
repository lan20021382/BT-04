#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int X[n], Y[n];
    for(int i=0;i<n;i++){
        cin >> X[i] >> Y[i];
    }//cot hoac hang
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(X[i]==X[j] || Y[i]==Y[j]){
                cout << "Yes"; return 0;
            }
        }
    }//duong cheo
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(X[j]-X[i]) == abs(Y[j]-Y[i])){
                cout << "Yes"; return 0;
            }
        }
    }
    cout << "No";
    return 0 ;
}
}
