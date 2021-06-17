int adjacentElementsProduct(std::vector<int> inputArray) {

   int max=inputArray[0]*inputArray[1];
    for(int i=1;i<inputArray.size()-1;i++)
    {
        int current=inputArray[i]*inputArray[i+1];
        if(current>max)
        max=current;
    }
    return max;
}

