//from : https://leetcode.com/problems/climbing-stairs/


<?php

class Solution {
    /**
     * @param Integer $n
     * @return Integer
     */
    static $memo = [];
    
    function climbStairs($n) {
        /* this is dp solution */
        /*
        $dp = array_fill(0, $n + 1, 0);
        $dp[0] = 1; //first step
        for($i = 0; $i < $n; $i++) {
            $dp[$i + 1] += $dp[$i];
            $dp[$i + 2] += $dp[$i];
        }
        return $dp[$n];
        */
        
        /* do not process this n level func call when it was already caculated */
        if(isset(static::$memo[$n])){
            return static::$memo[$n];
        }
        
        if($n == 1 || $n == 0){
           return 1; 
        }
        
        $num = $this->climbStairs($n-1) + $this->climbStairs($n-2);
        static::$memo[$n] = $num;
        return $num;
    }
}
