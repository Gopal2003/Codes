console.log("Hello world");
console.log('hello');
// document.write("Hello");
// let arr=[1,2,3,4,5];
// console.log(arr[0]);
// let obj={
//     name:"Gopal",
//     rollNo:45,
//      class :"12th"
// };
// console.table(obj);
// console.time('time taken');
// console.assert(34<5);
// console.timeEnd('time taken');
// let a=document.getElementById("first");
// a.style.color="blue";
// let b=document.getElementById("gg");
// b.style.color="orange";
// let d=document.getElementById("lol");
// d.style.color="pink";
// let c=document.getElementById("hahah");
// c.style.color="red";
// F=document.forms[0];
// console.log(F);

// let D=document.all;
// // console.log(D);
// Array.from(D).forEach(element => {
//     console.log(element);
    
// })
// let G=document.links[2];
// console.log(G);
let arr1=[1,2,3,4,5];
// for(let i=0;i<arr1.length;i++)
// {
    //    console.log(arr1[i]);
    // }

    arr1.forEach((element)=>{
             console.log(element);
        })

        //tut14
        let a=document.getElementById("first");
        // console.log(a);
        // a=a.className;
        // console.log(a);
        // a=a.childNodes;
        // a=a.parentNode;
        a.style.color="black";
        a.innerText="Blackdevil"
        a.innerHTML='<b>Blackdevil</b>';
        // console.log(a.innerHTML);

        // let sel=document.querySelector("#first");//or document.getElementById("first");
        // sel=document.querySelector(".child");//gives first child class
        // sel=document.querySelector("b");
        // sel=document.querySelector("h1");
        // sel=document.querySelector("div");//gives first div
        // sel.style.color="green"//colors to first div
        // console.log(sel);
        //multi element selector
        // let elems=document.getElementsByClassName("child");
        // console.log(elems[0]);
       
        // Array.from(elems).forEach(element =>{
        
        //          console.log(elems);
        //         //  for(let i=0;i<4;i++) {
        //         //     console.log(elems[i]);
        //         // }
                
        // })
        let elems=document.getElementsByTagName('div');
        // console.log(elems);
        // for(let i=0;i<elems.length;i++)
        // {
        //     console.log(elems[i]);
        
        // }
        //or
        // Array.from(elems).forEach(function(element) {
        //       console.log(element);
        //       element.style.color="blue";
        // })