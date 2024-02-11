//mycodes
// console.log("hello");
// let a=document.querySelector('.no');
// a=document.querySelector(".container");
// console.log(a.childNodes);//gives all the stuff including text,spaces
// console.log(a.children);//gives only elements
// for(let i=0;i<10;i++)
// {
//     let nodeName=a.childNodes[i].nodeName;
//     console.log(nodeName);
    
// }
// let nodeType= a.childNodes[16].nodeType;
// console.log(nodeType)
// console.log('hello');
// let b=document.querySelector('div.container');
// console.log(container.children[1].children);

//codewithharry codes

console.log('Welcome to tutorial 15');

let cont = document.querySelector('.no');
cont = document.querySelector('.container');
let nodeName = cont.childNodes[1].nodeName;
let nodeType = cont.childNodes[1].nodeType;
// console.log(nodeName)
// console.log(nodeType)
// Node types
// 1. Element
// 2. Attribute
// 3. Text Node
// 8. Comment
// 9. document
// 10. docType

// console.log(cont.childNodes);
// console.log(cont.children);

let container = document.querySelector('div.container');

console.log(container.children[1].children[0].children);

// console.log(container.firstChild);
// console.log(container.firstElementChild);

// console.log(container.lastChild);
// console.log(container.lastElementChild);
// console.log(container.children);
// console.log(container.childElementCount); // Count of child elements

console.log(container.firstElementChild.parentNode);
console.log(container.firstElementChild.nextSibling);
console.log(container.firstElementChild.nextElementSibling);
console.log(container.firstElementChild.nextElementSibling.nextElementSibling);



