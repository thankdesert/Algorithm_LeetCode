//from : https://leetcode.com/problems/design-parking-system/


class ParkingSystem {
public:
    int full_flag[3];
    ParkingSystem(int big, int medium, int small) {
        full_flag[0] = big;
        full_flag[1] = medium;
        full_flag[2] = small;
    }
    
    bool addCar(int carType) {
        if (!full_flag[carType - 1]) {
            return false;
        } else {
            --full_flag[carType - 1];
            return true;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
