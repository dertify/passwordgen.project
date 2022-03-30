#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 ifstream in("characters1.in");
char characters[128];
char passwordf(int x)
{  
        for(int i=0; i<x; i++)
            {int poz = 32 + (rand() % 95);
            cout << characters[poz];  
             } 
}

int main(){
  srand(time(0));
 // testing git 

  for(int i=32; i<=126; i++)   
        in>>characters[i];

    int paslen;
    cout<<"Enter a length for the password, it has to be between 15 and 25: ";
    cin>>paslen;

    bool ok = true;
    if (paslen < 15 or paslen > 25)
        ok = false;
    
    while (ok==false)
    {   cout<<"You passed a wrong length, please try again: ";
        cin>>paslen;
        if (paslen > 15 && paslen < 25)
            ok=true; 
    }
    // nothing to do with the password, just printing it
    cout<<passwordf(paslen);
    
}
