class Solution {
public:
    // Function to calculate product of digits
    int digitProduct(int num) {
        int product = 1;

        while (num > 0) {
            product *= (num % 10);
            num /= 10;
        }

        return product;
    }

    int smallestNumber(int n, int t) {

        while (true) {

            int product = digitProduct(n);

            if (product % t == 0)
                return n;

            n++;
        }

        return 0; // Never reached
    }
};