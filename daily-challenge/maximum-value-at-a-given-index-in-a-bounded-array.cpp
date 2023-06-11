class Solution {
public:
  int maxValue(int n, int index, int maxSum) {

    int mul = 1;

    int size = n;
    if (index >= 1 && index <= n - 2)
      mul = 2;
    int x = 0;
    int y = 0;
    while (size >= 1) {

      x = size + ((size - 1) * mul);

      y = 3 - mul;
      cout << x << " " << y << " " << size << " " << x + y << " " << maxSum
           << endl;
      if (x + y <= maxSum)
        return size;

      size--;
    }
    return -1;
  }
};