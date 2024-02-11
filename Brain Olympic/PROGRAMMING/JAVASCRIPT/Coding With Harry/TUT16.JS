//Mycodes
console.log("Hello");
let element=document.createElement("div");
element.className='ChIlD';
element.id='Unique';
element.setAttribute('With',"myWith");
element.innerText='Hello';
// element.innerHTML='<b>Hello</b>';
console.log(element);
let div=document.querySelector('div.child');
div.appendChild(element);
console.log(div);

//codewithharry codes
console.log('this is tut 16');
// let element = document.createElement('li');
// let text = document.createTextNode('I am a text node');
// element.appendChild(text)

// Add a class name to the li element
// element.className = 'childul';
// element.id = 'createdLi';
// element.setAttribute('title', 'mytitle');
// element.innerText = '<b>Hello this is created by harry</b>';
// element.innerHTML = '<b>Hello this is created by harry</b>';

// let ul = document.querySelector('ul.this');
// ul.appendChild(element);
// console.log(ul)
// console.log(element)

// let elem2 = document.createElement('h3');
// elem2.id = 'elem2';
// elem2.className = 'elem2';
// let tnode = document.createTextNode('This is a created node for elem2');
// elem2.appendChild(tnode);

// element.replaceWith(elem2);
// let myul = document.getElementById('myul');
// myul.replaceChild(element, document.getElementById('fui'));
// myul.removeChild(document.getElementById('lui'));
// let pr = elem2.hasAttribute('href');
// elem2.removeAttribute('id');
// elem2.setAttribute('title', 'myelem2title');
// console.log(elem2, pr);

// quick quiz
// create a heading element with text as "Go to CodeWithHarry" and create an a tag outside it with href = "https://www.codewithharry.com"
//quiz solution
// let element=document.createElement("h3");
// element.className="Class1";
// element.id="Id1";
// element.setAttribute('a',href = "https://www.codewithharry.com");
// element.innerText=" Go to CodeWithHarry";
// // element.innerHTML="<a href="www.codewithharry.com></a>"
// console.log(element);
// let b=document.querySelector('h1.Heading');
// b.appendChild(element);
// console.log(b);