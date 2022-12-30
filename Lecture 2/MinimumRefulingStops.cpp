class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        //we will use priority queue to solve this question

        priority_queue<int>pq;
        int index = 0;
        int count = 0;
        int max_you_can_reach = startFuel;

        while(max_you_can_reach < target){
            while(index<stations.size() and stations[index][0] <= max_you_can_reach){
                pq.push(stations[index][1]);
                index++;
            }

            if(pq.empty()){
                return -1;
            }

            max_you_can_reach += pq.top();
            pq.pop();
            count++;
        }
        return count;
    }
};