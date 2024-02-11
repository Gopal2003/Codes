console.log("Hello welcome to tutorial 43");

 async function devil(){//returns a promise
    console.log("entered Inside function");
    const response = await fetch("https://api.github.com/users")
    const user=response.json();
    return user
    // return "harry";
}
console.log("before calling the function")
let a=devil();
console.log("After calling the function")
console.log(a);
a.then(data => console.log(data));
console.log("Last line");
