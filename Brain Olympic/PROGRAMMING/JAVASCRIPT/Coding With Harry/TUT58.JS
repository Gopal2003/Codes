console.log("Welcome to tutorial 58")
let mySet=new Set();
mySet.add('The name of student is: Gopal');
mySet.add('This');
mySet.add('This');
mySet.add(true);
mySet.add(54);
console.log(mySet);

for(let key of mySet){
    console.log(key);
}

let myArray=Array.from(mySet);
myArray.push('Gopal');
console.log(myArray);
let myEntries=mySet.entries();
console.log(myEntries);
