int shapeArea(int n) {
   int result=1;
   for(int i=1;i<n;i++)
   {
       result = result + i * 4; // result new static
                                // i = n+1 value, for ex: i=2 where n=3
   }
   return result;
}
