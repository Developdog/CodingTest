#include <iostream>

using namespace std;

int main()
{
    int temp;

    cin >> temp;

    for (int i = 1; i <= temp; i++)
    {
        int num, two = 0, three = 0, five = 0, seven = 0, eleven = 0;

        cin >> num;

        while (num)
        {
            if (num % 11 == 0)
            {
                eleven++;
                num = num / 11;
                continue;
            }
            if (num % 7 == 0)
            {
                seven++;
                num = num / 7;
                continue;
            }
            if (num % 5 == 0)
            {
                five++;
                num = num / 5;
                continue;
            }
            if (num % 3 == 0)
            {
                three++;
                num = num / 3;
                continue;
            }
            if (num % 2 == 0)
            {
                two++;
                num = num / 2;
                continue;
            }
            break;
        }

        cout << "#" << i << " " << two << " " << three << " " << five << " " << seven << " " << eleven << endl;
    }
}