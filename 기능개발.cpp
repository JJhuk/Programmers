#include <iostream>
#include <deque>
#include <vector>

using namespace std;

struct Task
{
    int progress;
    int speed;
};

deque<Task> dq;

constexpr int finish = 100;


vector<int> solution(vector<int> progresses, vector<int> speeds) {
     for(int i=0; i<progresses.size();i++)
     {
         dq.push_back({progresses[i], speeds[i]});
     }
    
    vector<int> result;

    while(!dq.empty())
    {
        int count = 0;
        
        for (int i=0; i < dq.size(); i++)
        {
            dq[i].progress += dq[i].speed;
        }
        
        while (!dq.empty() && dq.front().progress >= finish)
        {
            dq.pop_front();
            count++;
        }

        if(count != 0)
        {
            result.push_back(count);
        }
    }
    
    return result;
}


int main(int argc, char* argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    const auto result = solution({95, 90, 99, 99, 80, 99},{1, 1, 1, 1, 1, 1});

    for (const auto value : result)
    {
        cout << value << endl;
    }
    
    return 0;
}
