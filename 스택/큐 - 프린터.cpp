#include <vector>
#include <deque>
#include <iostream>

using namespace std;

struct Pair
{
    int location;
    int priorities;
};

int solution(vector<int> priorities, int location) {
    int answer = 1;

    deque<Pair> dq;
    
    for(int i=0; i < priorities.size(); i++)
    {
        dq.push_back({i,priorities[i]});  
    }

    while(true)
    {
        auto pair = dq.front();
        bool print = true;
        for(int i=0; i<dq.size();i++)
        {
            if(pair.priorities < dq[i].priorities)
            {
                dq.push_back(pair);
                dq.pop_front();
                print = false;
                break;
            }
        }

        if(print)
        {
            dq.pop_front();
            if(pair.location == location)
            {
                break;
            }
            answer++;
        }
    }
    
    return answer;
}

int main()
{ 
    cout << solution({1, 1, 9, 1, 1, 1}, 0);
}
