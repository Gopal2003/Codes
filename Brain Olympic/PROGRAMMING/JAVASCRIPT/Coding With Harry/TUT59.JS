console.log("Welcome to tutorial 59");

console.log("This is tutorial 59")

// Symbols
const sym1 =  Symbol('My identifier');
const sym2 =  Symbol('My identifier');
// console.log('Symbol is ', sym1);
// console.log('Type of Symbol is ', typeof sym1);
console.log(sym1 === sym2);

const a = "this is";
const b = "this is";

console.log(a === b);
// console.log(symbol === symbol);
console.log(null === null);
console.log(undefined === undefined);

const k1 = Symbol('identifier for k1');
const k2 = Symbol('for k2');

myObj = {};
myObj[k1] = "Harry";
myObj[k2] = "Rohan";
myObj["name"] = "Good boy"
myObj[4] = "Good int"


console.log(myObj);
console.log(myObj[k1]);
console.log(myObj[k2]);
console.log(myObj.k2); // !! ALERT !!: cannot do this to get Rohan because it is same as myObj["k2"]


// Symbols are ignored in for in loop
for(key in myObj){
    console.log(key, myObj[key])
}

console.log(JSON.stringify(myObj));
