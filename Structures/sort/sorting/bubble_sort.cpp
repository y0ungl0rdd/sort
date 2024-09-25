template <typename type> void BubbleSort(int n, type* array) {
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n - i; j++) {
			if (array[j - 1] > array[j]) {
				int temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
		}
	}
}