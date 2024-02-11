console.log("Hello");

// let variable="javascript";
// let links=document.all;
// Array.from(links).forEach(function(element){
//    console.log(element);
// })

// Exercise solution

// console.log(links)
let str = "js";
let links = document.links;
let href;
Array.from(links).forEach(function (element) {
    href = element.href;
    if (href.includes(str)) {
        console.log(href);
    }
});

