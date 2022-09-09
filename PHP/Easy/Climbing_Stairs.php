//from : https://leetcode.com/problems/climbing-stairs/


<?php

class Solution {
    /**
     * @param Integer $n
     * @return Integer
     */
    function climbStairs($n) {
        $dp = array_fill(0, $n + 1, 0);
        $dp[0] = 1; //first step
        for($i = 0; $i < $n; $i++) {
            $dp[$i + 1] += $dp[$i];
            $dp[$i + 2] += $dp[$i];
        }
        return $dp[$n];
    }
}
