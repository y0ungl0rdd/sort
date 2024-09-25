template <typename type> void OptimizedBubbleSort(int n, type* array) {
	bool flag;
	for (int i = 0; i < n - 1; i++) {
		flag = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
			}
		}
		if (!flag) {
			break;
		}
	}
}