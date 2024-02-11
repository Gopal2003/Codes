console.log("Hello welcome to tutorial 57");
let myMap=new Map();
const key1="Devil", key2={}, key3= function(){};
myMap.set(key1 ,'This is a string');
myMap.set(key2,'This is a empty set');
myMap.set(key3,'This is an empty function');
console.log(myMap);

for(let [ key,value] of myMap){
    console.log("The keys is",key);
    console.log("The value is",value);
}
for(let key of myMap.keys()){
    console.log(key);
}
for(let value of myMap.values()){
    console.log(value);
}
myMap.forEach((value,key)=>{
     console.log(value);
     console.log(key);

})
let myArray=Array.from(myMap);
console.log(myArray);

let myArray1=Array.from(myMap.keys());
console.log(myArray1);

let myArray2=Array.from(myMap.values());
console.log(myArray2);