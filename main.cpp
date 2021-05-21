#include <string.h>
#include <iostream>

using namespace std;

int main()
{
  int x;
    cout << "Выберите единицы измерения" << endl;
    cout << "1. Меры длины" << endl;
    cout << "2. Меры площади" << endl;
    cout << "3. Меры объёма " << endl;
    cout << "4. Меры веса" << endl;
    cout << "5. Меры времени" << endl;
    cout << "6. Меры давления" << endl;
    cout << "7. Меры тока" << endl;
    cout << "8. Меры напряжения и Э.Д.С." << endl;
    cout << "9. Меры мощности" << endl;
    cout << "10. Меры сопротивления" << endl;
    cout << "11. Меры частоты" << endl;
    cout << "12. Меры кол-ва информации" << endl;

    
    cin >> x;

    switch (x) {
    case 1:
        cout << "123";
        break;
    case 2:
        cout << "456";
        break;
    case 3:
        cout << "789";
        break;
    default:
        cout << "\nНеверный выбор";
        break;
    }
    return 0;
}
