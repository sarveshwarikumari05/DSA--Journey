class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k % 2 == 0 || k % 5 == 0)
            return -1;

        int slow = 1 % k;
        int fast = (1 * 10 + 1) % k;
        int length = 1;

        while (slow != fast) {
            if (slow == 0)
                return length;

            slow = (slow * 10 + 1) % k;
            fast = (fast * 10 + 1) % k;
            fast = (fast * 10 + 1) % k;

            length++;
        }

        return slow == 0 ? length : -1;
    }
};

// We need to find the smallest number made only of digit 1 that is divisible by k.
// Since the number can be very large, we do not create the number directly. Instead, we only keep track of the remainder when dividing by k.

// First, if k is divisible by 2 or 5, we return -1 because a number containing only 1s can never be divisible by them.

// Then, we start forming numbers like 1, 11, 111, etc. Using modulo arithmetic, the remainder is updated as:

// remainder = (remainder * 10 + 1) % k


// To avoid using extra memory, we use Floyd’s cycle detection method. If the remainder becomes 0, we return the current length. If a cycle is detected and 0 is never reached, it means such a number is not possible.

// This way, we solve the problem efficiently without storing large numbers.

