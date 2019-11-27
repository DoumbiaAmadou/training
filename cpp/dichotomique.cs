// C# code below
using System;
using System.IO;

public class Answer
{
    public static bool Exists(int[] ints, int k)
    {
      if(ints.Length==0)
        return true;  
      
      return  dico(ints, k , 0, ints.Length); 
    }
        
    public static bool dico(int[] ints,int val,int i , int j ){
      
        if(i>=j && ints[i]!=val)
        return false ; 
           
        int mid  = (i+j)/2; 
        if(ints[mid]==val)
            return true;
        
        if(ints[mid]<val)
            return  dico(ints, val , mid+1 , j ) ;
        else 
        if(ints[mid]>val)
            return  dico(ints, val , i , mid-1) ;
        else        
        return  true;
        
    }
        
}
