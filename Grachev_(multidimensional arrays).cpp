
#include <time.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1 - задание
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    /*const int n = 10, a = 5;
    int x[n], y[a], k[a];
    
    for (int i = 0; i < n; i++)
    {
        x[i] =  rand() % 10 + 1;
        cout << x[i] << " ";   
    }
    
    for (int i = 0; i < a; i++)
    {  
            y[i] = x[i];
            k[i] = x[i + 5];
    }
    
    for (int i = 0; i < a; i++)
    {
        cout << endl << y[i] << " - первый " << endl << k[i] << " - второй" << endl;
    }*/
    // 2 - задание
    /*int x[10], y[10];
    int sum[10];
    for (int i = 0; i < 10; i++)
    {
        x[i] = rand() % 10 + 1;
        y[i] = rand() % 20 + 1;
        sum[i] = x[i] + y[i];
        cout << x[i] << " + " << y[i] << " = " << sum[i] << endl;
    }*/
    // 3 - задание
    /*int x[7];
    char z = '$';
    float sum = 0;
    string y[7] = {"пн", "вт", "ср", "чт", "пт", "сб", "вс"};
    int max = 0;
    cout << "Ввести расходы за неделю в - $" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout <<i + 1 <<". " << y[i] << " - " << z;
        cin >> x[i]; 
        cout << endl;
        sum += x[i];
    }
    for (int i = 0; i < 7; i++)
    {
        if (x[i] > 100)
        {
            max++;
            
            cout << max << ". " << y[i] << endl;
        }
    }
    cout << max  << " - количество дней" << endl;
    cout << sum << z << " - общая сумма" << endl;
    cout << sum  / 7 << z << " - средняя (за неделю) потраченная сумма. " << endl;*/
    // 4 - задание
    int exchange[12];
    int exchange1[12];
    int sum;
    int num;
    cout << "Ввести курс доллара по отношению к евро : " << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << i + 1 << "-й. месяц - ";
        cin >>  exchange[i];
        cout << endl;
    }
    cout << "Ввести проценты за каждый месяц : " << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << i + 1 << "-й. процент за месяц - ";
        cin >> exchange1[i];
        cout << endl;
    }
    cout << "Ввести сумму на депозите в евро - ";
    cin >> sum;
    cout << endl;
    cout << "Ввести номер месяца в котором хотите вывести сумму - ";
    cin >> num;
    cout << endl;

    return 0;
}

