import java.math.*;
class Solution {

	private int gcd(int a, int b) {
		if(b == 0)
			return a;
		else return gcd(b, a % b);
	}
    public boolean canMeasureWater(int x, int y, int target) {
        if (x + y < target)
            return false;
        if (x == target || y == target || x + y == target)
            return true;

        return target % gcd(x,y) == 0;
    }
}
