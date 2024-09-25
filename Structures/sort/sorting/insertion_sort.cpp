template<typename type> void InsertionSort(int n, type* array) {
	for (int i = 1; i < n; i++) {
		int key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
}