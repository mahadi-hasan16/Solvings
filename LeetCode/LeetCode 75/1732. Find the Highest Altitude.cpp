class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int max_altitude = 0;
        int i;
        int n = gain.size();
        int altitude = 0;
         
        for(i = 0; i < n; i ++)
        {
            altitude = gain[i] + altitude;
            max_altitude = max(max_altitude, altitude);
        }

        return max_altitude;
    }
};
