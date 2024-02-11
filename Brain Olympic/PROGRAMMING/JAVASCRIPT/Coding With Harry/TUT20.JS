// console.log("Hello")
// localStorage.setItem("Name",'Devil');
// localStorage.setItem("Name2",'Gopal');
// let impArray=['Good','Bad'];
// localStorage.setItem("Name3",JSON.stringify(impArray));
// let G=localStorage.getItem('Name');
// console.log(G);
// let Arr=JSON.parse(localStorage.getItem('Name3'));
// // localStorage.removeItem('Name')
// Arr.unshift("Gorgeous");
// // Arr.pop();
// let NAme=localStorage.getItem('Name3');
// console.log(NAme);
// console.log(Arr);

console.log('This is tut 20');
let impArray = ['adrak', 'pyaz', 'bhindi'];

// // Add a key-value pair inside local Storage
localStorage.setItem('Name', 'Harry');
localStorage.setItem('Name2', 'Rohan');
localStorage.setItem('Sabzi', JSON.stringify(impArray));

// Clears the entire local storage
// localStorage.clear();

// Clear a particular key-value pair
// localStorage.removeItem('Name2');

// Retrieve an item from the local Storage
let name = localStorage.getItem('Name');
name = JSON.parse(localStorage.getItem('Sabzi'));
console.log(name)

// sessionStorage.setItem('sessionName', 'sHarry');
// sessionStorage.setItem('sessionName2', 'sRohan');
// sessionStorage.setItem('sessionSabzi', JSON.stringify(impArray));
