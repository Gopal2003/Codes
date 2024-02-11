console.log('Hello');
let Str=document.createElement('div');
Str.className='CN';
Str.id="IDCN";
Str.innerHTML="OHzarazara touch me touch me touch me";
let Doc=document.querySelector('div.child');
Doc.appendChild(Str);
// console.log(Doc);
Doc.addEventListener('click',func1);

function func1(e) {
    console.log('you have clicked')
     let S=e.target.id;
     console.log(S);
}
