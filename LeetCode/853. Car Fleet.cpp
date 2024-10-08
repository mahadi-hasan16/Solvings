class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int, double> mp;
        vector<double> duration;
        int i;
        for(i = 0; i < position.size(); i++) {
            mp[position[i]] = 1.0 * (target - position[i]) / speed[i]; 
        }

        for(auto it = mp.begin(); it != mp.end(); it++) {
            duration.emplace_back(it -> second);
        }

        int fleet = 0;
        double prev = 0; 

        for(i = duration.size()-1; i >= 0; i--) {
            if(duration[i] > prev) { 
                fleet++;
                prev = duration[i];
            }
        }

        return fleet;
    }
};
