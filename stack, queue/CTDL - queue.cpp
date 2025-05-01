#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> Q;
    Q.push(10); 
    Q.push(20); 
    Q.push(30);

    cout << "Q.size() = " << Q.size() << '\n';
    cout << "Q.front() = " << Q.front() << '\n';
    cout << "Q.back() = " << Q.back() << '\n';

    Q.pop(); // Loại phần tử đầu hàng, ở đây là phần tử 10

    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }

    return 0;
}
