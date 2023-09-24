#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");
    cout << endl;

    int length = 0;
    int width = 0;
    int height = 0;

    int x = 0;
    int y = 0;

    cout << " Введите длинну, ширину, и высоту кирпича: ";
    cin >> length >> width >> height;
    cout << " Введите ширину и высоту отверстия: ";
    cin >> x >> y;

    if ((length <= x && width <= y) || (length <= y && width <= x) || (width <= x && height <= y) || 
        (width <= y && height <= x) || (length <= x && height <= y) || (length <= y && height <= x)) {
        cout << " Кирпич входит в отверстие!!!" << endl;
    }
    else {
        cout << " Кирпич не входит в отверстие!!!" << endl;
    }

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}