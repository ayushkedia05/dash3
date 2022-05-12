   for(int i=0;i<temp.size();i++)
   {

int k=i;
     while(k<temp.size()-1 && temp[k+1]-temp[k]==1)
     {
      k++;
     }

     if(k-i>=c)
     {
       ans1=i;
       ans2=i+k;
     }
   }
