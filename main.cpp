#include <iostream>
#include <math.h>

using namespace std;

/* Functions */

//Функция, отвечающая за простейшие математические операции
int operations(int i, int in1, int in2, int op){

    switch(op){
        case 1:
            cout<<"Введите число: ";
            cin>> in2;
            in1 = in1 + in2;
            break;

        case 2:
            cout<<"Введите число: ";
            cin>> in2;
            in1 = in1 - in2;
            break;

        case 3:
            cout<<"Введите число: ";
            cin>> in2;
            in1 = in1 * in2;
            break;

        case 4:
            cout<<"Введите число: ";
            cin>> in2;
            in1 = in1 / in2;
            break;

        case 5:
            in1= sqrt(in1);
            break;

        default:
            break;
    }

    //cout<<"Ответ: "<<inumb[0]<<endl;
    return in1;

}



int main()
{
    //Обозначение глобалных переменных
    int inumb [2];
    long int onumb;
    int i = 0, operation;
    bool start = 1 ;

    //Ввод первого числа
    cout<<"Введите число: ";
    cin>>inumb[0];
    i++;

    // Main цикл
    while(start != 0){

        cout<<"Выберите операцию:"<<endl;
        cout<<"1)Сложение"<<endl;
        cout<<"2)Вычитание"<<endl;
        cout<<"3)Умножение"<<endl;
        cout<<"4)Деление"<<endl;
        cout<<"5)Кв.Корень"<<endl;
        cout<<"6)Посчитать"<<endl;
        cout<<"0)Выход"<<endl;

        cout<<"Operation№ ";
        cin>>operation;

        switch(operation){
        case 1:
            inumb[0]=operations(i,inumb[0],inumb[i],operation);
            break;

        case 2:
            inumb[0]=operations(i,inumb[0],inumb[i],operation);
            break;

        case 3:
            inumb[0]=operations(i,inumb[0],inumb[i],operation);
            break;

        case 4:
            inumb[0]=operations(i,inumb[0],inumb[i],operation);
            break;

        case 5:
            inumb[0]=operations(i,inumb[0],inumb[i],operation);
            break;

        case 6:
            onumb=inumb[0];
            cout<<"Answer: "<<onumb<<endl;
            start = 0;
            exit(0);
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
