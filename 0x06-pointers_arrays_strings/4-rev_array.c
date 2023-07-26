/**
 * reverse_array - reverses an array
 * @a: pointer to the arr
 * @n: length of the array
*/
void reverse_array(int *a, int n)
{
        int i, j, temp;

        i = 0;
        j = n - 1;
        while (j > i)
        {
                temp = *(a + j);
                *(a + j) = *(a + i);
                *(a + i) = temp;
                i++;
                j--;
        }
}