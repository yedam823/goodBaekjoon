#include<iostream>
#include<cstdlib>
#include<cstring>
#include <vector>
using namespace std;

typedef struct{
    char key[21];
    char val[21];
}Mpair;

typedef struct{
    char val[21];
}result;

result ans[100001];
vector<Mpair> s[100001];


int hashing(char *key){
    long long int hash = 5381;

    while(*key !='\0'){
        hash = hash * 33 + *key;
        ++key;
    }
    return hash%100001;
}

void insert(char *key, char *val){
    int idx = hashing(key);
    for(auto &p:s[idx]){
        if(strcmp(p.key, key) == 0){
            strcpy(p.val, val);
            return;
        }
    }
    Mpair temp;
    strcpy(temp.key, key);
    strcpy(temp.val, val);
    s[idx].push_back(temp);
}

char* turn(char *key){
    int idx = hashing(key);
    for(auto &p : s[idx]){
        if(strcmp(p.key, key) == 0){
            return p.val;
        }
    }
    return 0;
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        char a[21];
        char b[21];
        cin>>a>>b;
        insert(a, b);
    }
    for(int i=0;i<m;i++){
        char c[21];
        cin>>c;
        strcpy(ans[i].val,turn(c));
    }
    for(int i=0;i<m;i++){
        cout<<ans[i].val<<"\n";
    }
}