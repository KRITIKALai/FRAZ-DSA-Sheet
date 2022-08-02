//Method #1
//Simple method using 2 loops
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int counter=0;
        for(char jewel: jewels){
            for(char stone: stones){
                if(stone==jewel) counter++;
            }
        }
        return counter;
    }
};

//Method #2
//Using Count function
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int counter=0;
        for(char jewel: jewels){
            counter += count(stones.begin(), stones.end(), jewel);
        }
        return counter;
    }
};

//Method #3
//Using count methon on set(converting string to set)
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int counter=0;
        set<char> jewelsSet(jewels.begin(), jewels.end());
        for(char stone: stones){
           if(jewelsSet.count(stone)) counter++;
        }
        return counter;
    }
};
