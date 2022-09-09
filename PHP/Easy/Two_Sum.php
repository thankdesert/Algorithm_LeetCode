//from : https://leetcode.com/problems/two-sum/

<?php

class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer[]
     */
    /* naive */
    /*
    function naive_twoSum($nums, $target) {
        foreach ($nums as $left_key=>$left_value) {
            foreach ($nums as $right_key=>$right_value) {
                if ($right_key <= $left_key) {
                        continue;
                } else if ($left_value + $right_value === $target) {
                        return array($left_key, $right_key);
                }
            }
        }
        
        
        
        //never reach this line
        return array(-1, -1);
    }
    */
    
    /* faster */
    function twoSum($nums, $target) {
        $array_of_candidates = [];
        foreach ($nums as $key => $value) {
            $candidate = ($target - $value);
            if (array_key_exists($candidate, $array_of_candidates)) {
                return array($array_of_candidates[$candidate], $key);
            } else {
                $array_of_candidates[$value] = $key;
            }
        }
        
        //never reach this line
        return array(-1, -1);
    }
}


?>
