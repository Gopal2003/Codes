//my codes.
// let fruit1='orange';
// let fruit2='apple';
// let name='Gopal';
// let myHtml=`Hello ${name}
// <h1> This is heading</h1>
// <p> your favorite fruits are ${fruit1} and ${fruit2}</p>
 
// `;
// document.body.innerHTML = myHtml;
//CodeWithHarry codes
console.log('We are at tut 6');
const name = 'Harry';
const greeting = 'Good Morning';
// console.log(greeting + ' ' + name);

let html;
html  = "<h1> this is heading</h1>"+
        "<p> this is My para</p>";

html = html.concat('this', ' str2');
console.log(html);
console.log(html.length);
console.log(html.toLowerCase());
console.log(html.toUpperCase());
console.log(html);


console.log(html[1]);
console.log(html.indexOf('<'));
console.log(html.lastIndexOf('<'));
console.log(html.charAt(3));
console.log(html.endsWith('str2'));
console.log(html.includes(' is'));
console.log(html.substring(1,6));//prints from n to (n-1)
console.log(html.slice(0, 4))
console.log(html.split('>'));
console.log(html.replace('this', 'these'));

let fruit1 = 'Orange\'';
let fruit2 = 'Apple';
let myHtml = `Hello ${name}
            <h1> This is "my" heading ${fruit1} </h1>
            <p> You like ${fruit1} and ${fruit2}`;

document.body.innerHTML = myHtml;            
