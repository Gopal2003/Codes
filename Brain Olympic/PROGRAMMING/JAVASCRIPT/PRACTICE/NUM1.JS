function round100(a){
 if(a<50){
     return 0; 
    } 
else{ 
    let roundofFNum=Math.round(a);
   
    return roundofFNum; 
    }
}  
    

let num=round100(355);
console.log(num);