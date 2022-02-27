


// Sum of all Numbers befor the input number (inclusive)
int sum(int n) {
    if (n == 0)
        return 0;
    return (n + sum(n - 1));
}


// The Largest Element in an array
int largest(int arr[], int size) {

    static int max = 0;
    static int index = 0;

    if (index >= size)
        return max;

    if (arr[index] > max)
        max = arr[index];
    index++;

    return largest(arr, size);
}


// Digits Total

int digitsTotal(int num) {
    static int total = 0;
    if (num == 0)
        return total;
    total += num % 10;
    
    return digitsTotal(num / 10);
}


// Largest Common Factor Between Two Numbers
int largestCommonFactor(int num1, int num2,int factor) {
    static int min = num1 > num2 ? num1 : num2;
    static int commonFactor = 0;

    if (factor > min)
        return commonFactor;

    if (num1 % factor == 0 && num2 % factor == 0)
        commonFactor = factor;
    return largestCommonFactor(num1, num2, ++factor);
}




void main() {
}