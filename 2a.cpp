#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    struct students
    {
        float subject[10];
    };

    students s[80];

    float total[80], percentage[80], max = 0;

    int max_marks, index;

    cout << "Max marks in all subjects are ";
    cin >> max_marks;

    for (int i = 0; i < 80; i++)
    {
        total[i] = 0;
        cout << "Write the marks of student " << i + 1 << " for ";
        for (int j = 0; j < 10; j++)
        {
            cout << "subject " << j + 1 << " ";
            cin >> s[i].subject[j];
            total[i] += s[i].subject[j];
        }
        if (total[i] > max)
        {
            max = total[i];
            index = i;
        }
        percentage[i] = total[i] / max_marks * 100;
    }

    for (int i = 0; i < 80; i++)
    {
        cout << "The marks of student " << i << " in ";
        for (int j = 0; j < 10; j++)
        {
            cout << "subject " << j << " are " << s[i].subject[j] << endl;
        }
    }

    cout<<"Student getting the maximum percentage is student no "<<index+1<<" with a percentage of "<<percentage[index]<<endl;
}