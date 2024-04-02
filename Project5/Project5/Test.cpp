#include <iostream>
using namespace std;
class Sum {
public:
    Sum()
    {
        _sum += _i;
        ++_i;
    }
    static int getSum()
    {
        return _sum;
    }
    static void Init()
    {
        _i = 1;
        _sum = 0;
    }
private:
    static int _i;
    static int _sum;
};

int Sum::_i = 1;
int Sum::_sum = 0;


class Solution {
public:
    int Sum_Solution(int n) {
        Sum::Init();
        Sum*p = new Sum[n];
        return Sum::getSum();
    }
};

int main()
{
    Solution st;
    cout << st.Sum_Solution(5) << endl;
    cout << st.Sum_Solution(5) << endl;
}

