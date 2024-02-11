console.log("Hello");
let variable='blogs';
let links=document.links;
console.log(links)
let href;
Array.from(links).forEach(function(element){
    
    href=element.href;
    if(href.includes(variable)){
        console.log(href);
        
    }
    
});

console.log(href);

if(href.includes(variable)){
    console.log(href);
}


// myArray.forEach((element)=>{
//      console.log(element);
// })
// for(let key in myArray){
//     console.log(key);
    
// }