function fibonacciGenerator (n) {
    //Do NOT change any of the code above 👆
        
        //Write your code here:
        
        var arr = [];
        
        n--;
        if(n>0){
            arr.push(0);
        }
        n--;
        if(n>0){
            arr.push(1);
        }
        
        for(var i = 2; i<n; i++){
            arr.push(arr[i-2]+arr[i-1]);
        }
        
        //Return an array of fibonacci numbers starting from 0.
        
        return arr;
        
    //Do NOT change any of the code below 👇
    }
    
   console.log(fibonacciGenerator(20)); 