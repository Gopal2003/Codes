console.log("Tutorial 18")
// let a=document.getElementById("heading");

// a.addEventListener("click",func1);
// function func1(e){
//     let variable;
//     console.log("You have clicked the heading",e);
//     variable=e.target.id;
//     variable = Array.from(e.target.classList);
//     console.log(variable);
 
//     // location.href="//codewithharry.com";
// }
// tut18
let N=document.getElementById("None");
N.addEventListener("click",func1);//only allows left click.
N.addEventListener("mousedown",func2);//can be clicked through left,right,middle click as well...
N.addEventListener("dblclick",func3);
// N.addEventListener("mouseenter",func4);
// N.addEventListener("mouseleave",func5);

function func1(e){
    console.log("You have clicked");
    let variable=e.target.classList;
    console.log(variable);

}
function func2(f){
    console.log("Mouse down event has occured");
    let variable=f.target;
    console.log(variable);
}
function func3(g){
    console.log("Double click event has occured");
    let variable=g.target;
    console.log(variable);
}
function func4(e){
    console.log("mouseenter has occured");
    let variable=e.target.classList;
    console.log(variable);
}
function func5(e){
    console.log("mouseleave has occured");
    let variable=e.target.id;
    console.log(variable);
}

let D=document.querySelector('.container');
D.addEventListener('mousemove',func6);

function func6(e){
    
    console.log("Mouseover event triggered");
    document.body.style.backgroundColor=`rgb(${e.offsetX},${e.offsetY},143)`;
}