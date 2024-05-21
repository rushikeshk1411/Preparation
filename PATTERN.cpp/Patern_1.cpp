/*
CODE FOR OUTPUT OF
3
1 1 1 
2 2 2 
3 3 3 

#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;
for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        cout<<i<<" ";
    }
    cout<<endl;
}
    return 0;
}

*/


/*
CODE FOR THE OUTPUT OF 
4
1 2 3 4 
1 2 3 4
1 2 3 4
1 2 3 4

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

*/

/*

 CODE FOR THE OUTPUT OF THE
4
1 2 3 4 
1 2 3 4
1 2 3 4
1 2 3 4

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=n; i>0; i--){
        for(int j=n; j>0; j--){
            cout<<j<<" ";
        }
        
        cout<<endl;
    }
}

*/

/*
//CODE FOR THE OUTPUT

4
1 
2 3
3 4 5
4 5 6 7

#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;

for(int i=1; i<=n; i++){
    for(int j=1 ; j<=i; j++){
        cout<<(i+j-1)<<" ";
    }
    cout<<endl;
}
    return 0;
}
*/


/*

CODE FOR THE OUTPUT

4
1 
2 3
3 4 5
4 5 6 7


#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;
int count = 1;

for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        cout<<count++<<" ";
    }
    cout<<endl;
}
    return 0;
}

*/


/*
CODE FOR THIS OUTPUT
3
A B C 
A B C
A B C
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
           ch = j + 'A' - 1; 
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

*/


/*
CODE FOR THIS OUTPUT 

3
A B C 
B C D
C D E

#include <iostream>
using namespace std;

int main (){
    int n;
    cin>>n;
    char ch;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            ch = i+j+ 'A' -2;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

*/


/*
THE CODE IS FOR THE FOLLOWING OUTPUT

5
    *
   **
  ***
 ****
*****


#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //spaces print karlo bhai;
    int row = 1;
    while(row<=n){
    int spaces = n-row;
    while(spaces){
        cout<<" ";
        spaces--;
    } 

    //Stars Print karlo

    int col =1;
    while(col<=row){
        cout<<"*";
        col++;
    }
    cout<<endl;
    row ++;

}

}
*/


/*
CODE IS FOR FOLLOWING OUTPUT

5
    1
   121
  12321
 1234321
123454321

#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;

int row = 1;

while (row <= n){

    //Spaces print karlo bhai pehale to

int spaces = n-row ;
    while(spaces){
        cout<<" ";
        spaces --;
    }

    //Second Triangle print Karlo bhai
    int j =1;
    while(j<=row){
        cout<<j;
        j++;
    }


    //Print third Triangle;

    int third = row-1;
    while(third){
        cout<<third;
        third--;
    }
    cout<<endl;
    row++;

}

}

*/
