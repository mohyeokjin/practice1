#include <iostream>
#include <stack>

using namespace std;

class Stack {
    public:
    int x, y;
    string o;
    stack<string> s1;
    stack<string> s2;

    void Compare() {
        while(true) {
            cout << "명령을 입력해주세요. (1 : push, 2 : pop, 3 : top, 4 : empty, 5 : size, 6 : swap, 0 : 종료) : ";
            cin >> x;

            if(x==0) {
                break;
            }

            if(x==1) {
                cout << "추가할 데이터를 입력해주세요. : ";
                cin >> o;
                s1.push(o);
            }

            if(x==2) {
                s1.pop();
            }

            if(x==3) {
                cout << s1.top() << endl;
            }

            if(x==4) {
                if(s1.empty()==1) {
                    cout << "stack이 비어있습니다." << endl;
                }
                else {
                    cout << "stack이 비어있지 않습니다." << endl;
                }
            }

            if(x==5) {
                cout << s1.size() << endl;
            }

            if(x==6) {
                s1.swap(s2);
            }
        }
    }

};

int main() {
    stack<string> s1;
    stack<string> s2;
    Stack A;

    A.Compare();

}