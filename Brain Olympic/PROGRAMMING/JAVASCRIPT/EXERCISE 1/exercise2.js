console.log("welcome to exercise 2")
let newDiv=document.createElement("div");
newDiv.className='DIV';
newDiv.id="div#1";
// newDiv.innerText="new div tag";
let text=document.createTextNode("Hello this is a text node")

newDiv.appendChild(text);
console.log(newDiv);

let container=document.querySelector('.container');
let first=document.getElementById('myfirst');
container.insertBefore(newDiv,first)
newDiv.addEventListener("click",func);
function func(e){
    console.log('you have clicked the text');
    let html=`<textarea class="textarea form-control" id="textarea" rows="3"> ${html}</textarea>`;
     newDiv.innerHTML=html;
   
}
