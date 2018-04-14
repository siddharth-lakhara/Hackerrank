void miniMaxSum(vector<int> arr)
{
    vector<int>::iterator It;
    long int sum = 0;
    int min = INT_MAX;
    int max = INT_MIN;
    for (It = arr.begin(); It != arr.end(); It++)
    {
        sum += *It;
        if (*It < min)
        {
            min = *It;
        }
        if (*It > max)
        {
            max = *It;
        }
    }
    cout << sum - max << " " << sum - min;
}
