console.log("Hello welcome to tutorial 46.js")
// let regExp=/Devil/g;
 regExp=/Devil/g;
let sentence="Hello there! Devil is here and Devil is Back";


let result=regExp.exec(sentence);
console.log(result);
//  result=regExp.exec(sentence);
// console.log(result);


let result1=regExp.test(sentence);
console.log(result1);

let result3=sentence.match(regExp);
console.log(result3);

let result4=sentence.search(regExp);
console.log(result4);

let result5=sentence.replace(regExp,"Gopal");
console.log(result5);
