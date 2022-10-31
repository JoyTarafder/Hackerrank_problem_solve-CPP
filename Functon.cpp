#include <bits/stdc++.h>
using namespace std;

int max_of_four(int a,int b, int c, int d){
    int max = a;
    for(int i = 1; i <= 4; i++){
        if (max < b){
            max = b;
        }
        else if (max < c){
            max = c;
        }
        else{
            max = d;
        }
    }
    

    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}