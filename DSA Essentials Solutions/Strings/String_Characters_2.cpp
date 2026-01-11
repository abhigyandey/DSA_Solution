#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>& c)
{
    int write = 0;
    int read = 0;
    int n = c.size();

    while (read < n)
    {
        char current = c[read];
        int count = 0;

        while (read < n && c[read] == current)
        {
            read++;
            count++;
        }

        // write character
        c[write++] = current;

        // write count if > 1
        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                c[write++] = ch;
            }
        }
    }

    return write;
}

int main()
{
    vector<char> c{'a','a','c','c','c','f'};
    int len = compress(c);

    cout << "Compressed length: " << len << endl;
    cout << "Compressed array: ";
    for (int i = 0; i < len; i++)
        cout << c[i] << " ";

    return 0;
}
