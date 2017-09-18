#include <iostream>
#include <stack>

using namespace std;

int main(){
 stack<int> st;

 cout << "Enter the amount of numbers you want to enter: " << endl;
 int x;

 cin >> x;

 cout << "1 x  -Push the element x into the stack" <<endl;
 cout << "2    -Delete the element present at the top of the stack." <<endl;
 cout << "3    -Print the maximum element in the stack." <<endl;



 cout << "Enter the numbers below: " << endl;

 int y;
 int z;
 for (int i = 0 ; i < x; i++)
 {
    cin>> y;

    if(y == 1){
      cin >> z;
      if(z>=1 && z <= 1000000000)
      st.push(z);
      else continue;
    }

    else if(y == 2){
        st.pop();
    }
    else if(y == 3){
        int a = 0;
        for(int j=0; j < st.size(); j++){
            if(st.top() > a)
            {
                a = st.top();
            }
            st.pop();
        }
        cout << a << endl;
    }
    else continue;
 }
}
