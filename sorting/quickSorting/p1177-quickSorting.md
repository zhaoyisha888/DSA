**P1177 【模板】排序 - 手写算法思路**
## 题目要求
输入：一个整数 N（1 ≤ N ≤ 10^5），N 个正整数（1 ≤ a_i ≤ 10^9）
输出：按升序排序后的序列，数之间用空格隔开，行末无多余空格

## 算法选择
因为 N 最大到 10^5，需要 O(N log N) 的排序算法，常用有：
**快速排序（Quick Sort）**：平均 O(N log N)，递归实现较简单，注意避免最坏情况退化。
**归并排序（Merge Sort）**：稳定性好，始终 O(N log N)，需要额外 O(N) 空间。
**堆排序（Heap Sort）**：不稳定，但原地排序，时间 O(N log N)。

## 快速排序思路
### 基本步骤
1. 选基准值（pivot）
   - 常用方法：取中间位置元素 arr[(left+right)/2]
   - 好处：减少最坏情况概率

2. 分区（partition）
  - 从左右两端向中间扫描：
  - i 从左往右找到第一个 >= pivot 的元素
  - j 从右往左找到第一个 <= pivot 的元素
  - 交换 arr[i] 和 arr[j]
  - 直到 i > j，说明本轮分区结束

3. 递归排序
   - 对左区间 [left, j] 递归排序
   - 对右区间 [i, right] 递归排序

4. 结束条件
 - 当 left >= right 时返回

### 快速排序伪代码
```c
function quick_sort(arr, left, right):
    if left >= right:
        return
    
    pivot = arr[(left + right) / 2]
    i = left
    j = right
    
    while i <= j:
        while arr[i] < pivot:
            i++
        while arr[j] > pivot:
            j--
        if i <= j:
            swap(arr[i], arr[j])
            i++
            j--
    
    quick_sort(arr, left, j)
    quick_sort(arr, i, right)

```

## 注意事项

**避免最坏情况**：如果数据**接近有序**，可以用“**三数取中法**”选 pivot（left、mid、right 中的中位数）

**递归深度**：N=10^5 时递归层数不会太大，但可改成尾递归优化或改用循环模拟
**内存问题**：在 C 里尽量使用 `static 数组`或`堆分配`，防止大数组递归时栈溢出
**稳定性**：快速排序不稳定，如果题目需要稳定排序，可以用归并排序

## 对应 C 语言核心代码段
```c
void quick_sort(int arr[], int left, int right) {
    if (left >= right) return;

    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            int tmp = arr[i];    //c语言没有库函数swap()需要自己实现
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    quick_sort(arr, left, j);
    quick_sort(arr, i, right);
}
```

## 复杂度分析

平均时间复杂度：O(N log N)
最坏时间复杂度：O(N?)（当数据接近有序且每次选到最小或最大值作为 pivot）
空间复杂度：O(log N)（递归栈）