#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> ans;
    int j = 0;
    for(int i = 0; i < n; i++){
       string arr = "";
        int a = arr1[i];
        int b = arr2[i];
        for(int j= 0; j < n; j++){
            if(a&1 || b&1){
                arr = '#' + arr;
            }else arr = " " + arr;
            a >>= 1;
            b >>= 1;
        }
       ans.push_back(arr);
    }
    return ans;
}