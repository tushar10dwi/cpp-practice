#include <bits/stdc++.h>

using namespace std;

void pattern1() {
    for(int i=0;i<4;i++) {
        for (int j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2() {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

void pattern3() {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
    
}

void pattern4() {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i-1; j++)
        {
            cout<<" ";
        }

        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<"*";
        }

        for (int l = 0; l < 5-i-1; l++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
}

void pattern5() {
    for (int i = 0; i < 10; i++)
    {   
        if (i>4)
        {
            for (int k = 1; k < 10-i; k++)
            {
                cout<<"*";
            }
            
        }
        
        else { 
            for (int j = 0; j <= i; j++)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
}

int main() {
    pattern5();
    return 0;
}