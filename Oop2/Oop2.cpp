#include <iostream>
#include "IElectronics.h"
#include "Laptop.h"
#include "Teapot.h"
#include "Phone.h"
#include "TV.h"

int main()
{
    setlocale(LC_ALL, "Rus");

    IElectronics* shop[4];

    shop[0] = new Laptop(20);
    shop[1] = new Teapot(1);
    shop[2] = new Phone(15);
    shop[3] = new TV(12, 18.8);
    

    bool open = true;
    while (open)
    {
        cout << "Выберите продукт : 1 - Ноутбук, 2 - Чайник, 3 - Телефон, 4 - Телевизор, 0 чтобы выйти" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            shop[0]->ShowSpec();
            break;

        case 2:
            shop[1]->ShowSpec();
            break;

        case 3:
            shop[2]->ShowSpec();
            break;

        case 4:
            shop[3]->ShowSpec();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Выберите продукт от 1 до 4 или 0, чтобы выйти" << endl;
            break;
        }
    }
    delete shop[0];
    delete shop[1];
    delete shop[2];
    delete shop[3];
}


