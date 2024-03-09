#include <iostream>
#include <deque>
using namespace std;
void press_1(deque<char> &list);
void press_2(deque<char> &list);
void press_3(deque<char> &list);
void print(deque<char> &list);

int main() {
    int press_number, times;
    deque <char> list = {'A', 'B', 'C','D', 'E'};
    do{
        cout << "Button number:";
        cin >> press_number;
        cout << "number of press:";
        cin >> times;
        if (press_number == 1){
            for(int i=1;i<=times;i++){
                press_1(list);
            }
        }
        if (press_number == 2){
            for(int i=1;i<=times;i++){
                press_2(list);
            }
        }
        if (press_number == 3){
            for(int i=1;i<=times;i++){
                press_3(list);
            }
        }
        if (press_number == 4){
            print(list);
            return 0;
        }
    }while(press_number != 4);
    return 0;
}

void press_1(deque<char> &list){
    char temp;
    temp = list[0];
    list.pop_front();
    list.push_back(temp);
}

void press_2(deque<char> &list){
    char temp;
    temp = list[4];
    list.pop_back();
    list.push_front(temp);
}

void press_3(deque<char> &list){
    char temp_1, temp_2;
    temp_1 = list[0];
    temp_2 = list[1];
    list.pop_front();
    list.pop_front();
    list.push_front(temp_1);
    list.push_front(temp_2);
}
//输出结果函数
void print(deque<char> &list){
    deque <char>::iterator it;
    for(it=list.begin();it!=list.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}



