import java.util.ArrayList;
import java.util.HashMap;

 class  Solution {
    static public int find_inversionCOunts(int[] nums){
        int count = 0;
        for(int i= nums.length - 1; i >= 0;i--){
            for(int j= 0;j < i;j++){
                if(nums[j] > nums[i]){
                    count++;
                }
            }
        }
        return count;
    }
}
public class find_the_repeating_and_missing_number {
    public static void main(String[] args) {
        int[] testcase = {4,3,2,1};
        int expected  =6;
        int result = Solution.find_inversionCOunts(testcase);
        System.out.println(result == expected);
    }
}
