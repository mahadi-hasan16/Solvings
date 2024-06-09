/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

public class Solution : GuessGame {
    public int GuessNumber(int n) {
        long? low=1, high=n, mid=1,ans=1;
        while(high-low>1)
        {
            mid=(low+high)/2;
            if(guess((int)mid)==-1)
            {
                high=mid-1;
            }
            if(guess((int)mid)==1)
            {
                low=mid+1;
            }
            if(guess((int)mid)==0)
            {
                ans= mid;
                break;
            }
        }
        if(guess((int)low)==0)
        {
            ans=low;
        }
        else if(guess((int)high)==0)
        {
            ans=high;
        }
        return (int)ans;
    }
}
