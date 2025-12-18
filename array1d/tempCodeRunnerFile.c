int i = 0,arr[10];
    while (temp)
    {
        rem = n % 16;
        temp = temp / 16;
        arr[i] = rem;
        i++;
    }
    printf("The hexa no. is : ");
    for (int j = i - 1; j >= 0; j--)
    {
        if (arr[j] >= 0 && arr[j] <= 9)
        {
            printf("%d", arr[j]);
        }
        else  printf("%c",arr[j]+55);
    }