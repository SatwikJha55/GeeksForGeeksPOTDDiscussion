class Solution {
public:
    int count(int arr[], int n, int x) {
        // Find the first occurrence of x
        int firstOccurrence = -1;
        int left = 0, right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == x) {
                firstOccurrence = mid;
                right = mid - 1; // Search in the left half
            } else if (arr[mid] < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // If x is not present, return 0
        if (firstOccurrence == -1) {
            return 0;
        }

        // Find the last occurrence of x
        int lastOccurrence = -1;
        left = 0, right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == x) {
                lastOccurrence = mid;
                left = mid + 1; // Search in the right half
            } else if (arr[mid] < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // Calculate and return the count
        return (lastOccurrence - firstOccurrence) + 1;
    }
};
