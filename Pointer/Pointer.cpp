#include <iostream>
using namespace std;

int main()
{
    //const int N = 10;
    //int num[N];
    //int* ptrNum = num;
    //for (int i = 0; i < N; i++)
    //    num[i] = i * 2;
    //for (int i = 0; i < N; i++)
    //    cout << *(ptrNum + i) << " ";
    //cout << endl;
    //int n;
    //int* ptrn = &n;
    //cout << ptrn << endl;
    //*ptrn = 100;
    //cout << n;
    //cout << endl;
    //(*ptrn)++;
    //cout << n << endl;
    //ptrn++;
    //cout << ptrn << endl;
    //char str[80], token[80];
    //char* p, * q;
    //cin.getline(str, 80);
    //p = str;
    //while (*p)
    //{
    //    q = token;
    //    while (*p != ' ' && *p)
    //    {
    //        *q = *p;
    //        q++;
    //        p++;
    //    }
    //    if (*p)
    //        p++;
    //    *q = '\0';
    //    cout << token << " ";
    //}
    //cout << endl;
    //char strl[80] = "grfgrrr fggr";
    //char *pr = strl;
    ///*for (int i = 0; p[i]; i++)
    //    p[i] = toupper(p[i]);*/
    //for (int i = 0; *pr != '\0'; i++)
    //    *(pr + i) = toupper(*(pr + i));
    //cout << pr;
    /*const int N = 5;
    int num[N];
    int* start = num, * end = &num[N-1];
    while (start <= end)
    {
        cin >> *start;
        start++;
    }
    cout << *(num + 3);
    start = num;
    while (start <= end)
    {
        cin >> *start;
        start++;
    }
    cout << *(num + 1);*/
    /*int n = 5;
    int* pn = &n;
    cout << pn << endl;
    cout << *pn << endl;
    int* p2n = pn;
    cout << p2n << endl;
    cout << *p2n << endl;
    *p2n = 6;
    cout << *p2n << endl;
    cout << *pn << endl;*/
    //int x = 10, * p, ** pn; // pointer on pointer
    //p = &x;
    //pn = &p;
    //cout << **pn;
    char str[80];
    char* p;
    
    do
    {
        p = str;
        cin.getline(str, 80);
        while (*p)
            cout << (int)*p++ << " ";
        cout << endl;
    } while (strcmp(str, "l"));
}