**P1177 ��ģ�塿���� - ��д�㷨˼·**
## ��ĿҪ��
���룺һ������ N��1 �� N �� 10^5����N ����������1 �� a_i �� 10^9��
��������������������У���֮���ÿո��������ĩ�޶���ո�

## �㷨ѡ��
��Ϊ N ��� 10^5����Ҫ O(N log N) �������㷨�������У�
**��������Quick Sort��**��ƽ�� O(N log N)���ݹ�ʵ�ֽϼ򵥣�ע����������˻���
**�鲢����Merge Sort��**���ȶ��Ժã�ʼ�� O(N log N)����Ҫ���� O(N) �ռ䡣
**������Heap Sort��**�����ȶ�����ԭ������ʱ�� O(N log N)��

## ��������˼·
### ��������
1. ѡ��׼ֵ��pivot��
   - ���÷�����ȡ�м�λ��Ԫ�� arr[(left+right)/2]
   - �ô���������������

2. ������partition��
  - �������������м�ɨ�裺
  - i ���������ҵ���һ�� >= pivot ��Ԫ��
  - j ���������ҵ���һ�� <= pivot ��Ԫ��
  - ���� arr[i] �� arr[j]
  - ֱ�� i > j��˵�����ַ�������

3. �ݹ�����
   - �������� [left, j] �ݹ�����
   - �������� [i, right] �ݹ�����

4. ��������
 - �� left >= right ʱ����

### ��������α����
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

## ע������

**��������**���������**�ӽ�����**�������á�**����ȡ�з�**��ѡ pivot��left��mid��right �е���λ����

**�ݹ����**��N=10^5 ʱ�ݹ��������̫�󣬵��ɸĳ�β�ݹ��Ż������ѭ��ģ��
**�ڴ�����**���� C �ﾡ��ʹ�� `static ����`��`�ѷ���`����ֹ������ݹ�ʱջ���
**�ȶ���**�����������ȶ��������Ŀ��Ҫ�ȶ����򣬿����ù鲢����

## ��Ӧ C ���Ժ��Ĵ����
```c
void quick_sort(int arr[], int left, int right) {
    if (left >= right) return;

    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            int tmp = arr[i];    //c����û�п⺯��swap()��Ҫ�Լ�ʵ��
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

## ���Ӷȷ���

ƽ��ʱ�临�Ӷȣ�O(N log N)
�ʱ�临�Ӷȣ�O(N?)�������ݽӽ�������ÿ��ѡ����С�����ֵ��Ϊ pivot��
�ռ临�Ӷȣ�O(log N)���ݹ�ջ��