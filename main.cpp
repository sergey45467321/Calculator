#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int inumb [100];
    long int onumb;
    int i = 0, operation;
    bool start = 1 ;

    while(start != 0){

        cout<<"Введите первое число"<<endl;     // Сделать так, чтобы можно было вводить только цифры
        cin>> inumb[i];                         // Дэбагер
        i++;                                    // Многофункциональное
                                                // Многочисловое
        cout<<"Введите второе число"<<endl;
        cin>> inumb[i];
        i++;

        cout<<"Выберите операцию:"<<endl;
        cout<<"1)Сложение"<<endl;
        cout<<"2)Вычитание"<<endl;
        cout<<"3)Умножение"<<endl;
        cout<<"4)Деление"<<endl;
        cout<<"0)Выход"<<endl;

        cin>>operation;

        switch(operation){
        case 1:
            onumb = inumb[i-2] + inumb[i-1];
            cout<<onumb<<endl;
            break;

        case 2:
            onumb = inumb[i-2] - inumb[i-1];
            cout<<onumb<<endl;
            break;

        case 3:
            onumb = inumb[i-2] * inumb[i-1];
            cout<<onumb<<endl;
            break;

        case 4:
            onumb = inumb[i-2]/inumb[i-1];
            cout<<onumb<<endl;
            break;

        case 0:
            start = 0;
            cout<<"Good bye!"<<endl;
            break;

        default:
            start = 0;
            cout<<"Sorry, you was kicked :("<<endl;
            break;

        }
        cout<<endl;

    }

    return 0;
}
