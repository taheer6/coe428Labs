void mySort(int d[], unsigned int n)
{
    int i, k, valueToInsert;
    for (i = 1; i < n; i++) {
        valueToInsert = d[i]; // Value to be inserted
        k = i - 1;
        // Move elements of d[0..i-1], that are greater than valueToInsert,
        // to one position ahead of their current position
        while (k >= 0 && d[k] > valueToInsert) {
            d[k + 1] = d[k];
            k = k - 1;
        }
        d[k + 1] = valueToInsert;
    }
}