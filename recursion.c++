#include <bits/stdc++.h>
using namespace std;

void print(int count)
{
    cout<<count<<endl;
    count++;
    print(count);
}

int main()
{
    print(0);
}
