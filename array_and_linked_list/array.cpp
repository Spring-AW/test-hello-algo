#include "../utils/print_utils.hpp"
#include "../utils/common.hpp"

int randomAccess(int* nums, int size) {
   int randomIndex = rand() % size;
   int randomNum = nums[randomIndex];
   return randomNum;
}

int* extend(int* nums, int size, int enlarge) {
   int* res = new int[size + enlarge];

   for (int i = 0; i < size; i++) {
      res[i] = nums[i];
   } 
   delete[] nums;
   return res;
}

void insert(int* nums, int size, int num, int index) {
   for(int i = size - 1; i > index; i--) {
      nums[i] = nums[i - 1];
   }
   nums[index] = num;
}

void remove(int* nums, int size, int index) {
   for(int i = index; i < size - 1; i++) {
      nums[i] = nums[i + 1];
   }
}

void traverse(int* nums, int size) {
   int count = 0;

   for (int i = 0; i < size; i++) {
      count++;
   }
}

int find( int* nums, int size, int num) {
   for (int i = 0; i < size - 1; i++) {
      if (nums[i] == num)
         return i;
   }
   return -1;
}

int main() {
   int size = 5;
   int arr[] = {1, 2, 3, 4, 5};
   cout << "数组 arr = ";
   printArray(arr, size);

   int* nums = new int[size] {1, 3, 2, 5, 4};
   cout << "数组 nums = ";
   printArray( nums, size);

   int randomNum = randomAccess(nums, size);
   cout << "在数组 nums 中获取随机元素 " << randomNum << endl;

   int enlarge = 3;
   nums = extend(nums, size, enlarge);
   size += enlarge;
   cout << "将数组长度拓展至" << size <<" 得到 nums = ";
   printArray(nums, size);

   insert(nums, size, 6, 3);
   cout << "在索引 3 处插入数字6， 得到 nums = ";
   printArray(nums,size);

   remove(nums, size, 2);
   cout << "删除索引 2 处的元素。 得到nums = ";
   printArray(nums, size);

   int index = find(nums, size, 3);
   cout<< "在 nums 中查找元素 3 ， 得到索引 = " << index << endl;

   delete[] nums;
 }