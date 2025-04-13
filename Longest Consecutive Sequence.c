#include <stdio.h>
#include <stdlib.h>
#include <unordered_set>

int longestConsecutive(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    std::unordered_set<int> num_set;
    for (int i = 0; i < numsSize; i++) {
        num_set.insert(nums[i]);
    }

    int longest_streak = 0;

    for (int num : num_set) {
        if (num_set.find(num - 1) == num_set.end()) {
            int current_num = num;
            int current_streak = 1;

            while (num_set.find(current_num + 1) != num_set.end()) {
                current_num += 1;
                current_streak += 1;
            }

            longest_streak = (current_streak > longest_streak) ? current_streak : longest_streak;
        }
    }

    return longest_streak;
}
