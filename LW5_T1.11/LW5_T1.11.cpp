#include <iostream>
#include <string>

using namespace std;

string Even(int K)
{
    if (K % 2 == 0)
    {
        return "TRUE";
    }
    else
    {
        return "FALSE";
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    string stroka;
    int K;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Введите число - ";
        getline(cin, stroka);
        while (true)
        {
            try
            {
                K = stoi(stroka);
                if (((to_string(K) == stroka)) or ("-" + to_string(K) == stroka) and (K != 0))
                {
                    a[i] = K;
                    break;
                }
                else
                {
                    throw logic_error("Число введено некорректно");
                }
            }
            catch (...)
            {
                cout << "Число введено некорректно. Введите число - ";
                getline(cin, stroka);
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ----- ";
        cout << i + 1 << " число - " << Even(a[i]) << endl;
    }
}