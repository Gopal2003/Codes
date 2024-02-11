console.log("this is a practice session")
let doc=document.createElement("div")
doc.className="G";
doc.id="HG";
doc.setAttribute('Name','Devil');
doc.innerText="GHG"
let Attack=document.querySelector("div.child");
Attack.appendChild(doc);
console.log(Attack);
Attack.addEventListener("click",func1);
function func1(F) {
    console.log("Tune touch kiya");
    // location.href="http://www.codewithharry.com";
    let variable=F.target.className;
    console.log(variable);
}
let arr=['gg','bg'];
localStorage.setItem('name','Devil');
localStorage.setItem('BB',JSON.stringify(arr));
let name=JSON.parse(localStorage.getItem('BB'));
console.log(name);
let M=Math;
console.log(M);
let Din=new Date();
console.log(Din);
function genration(givenName,givenLanguages)
{
    this.name1=givenName;
    this.language=givenLanguages;
    this.run=function(){
        console.log(`${this.name1} is good boy`);
    }
}
let car1=new genration("Devil","JavaScript");
// console.log(car1);

class Base{
    constructor(givenName,givenLang,givenClass)
    {
        this.name=givenName;
        this.language=givenLang;
        this.class=givenClass;

    }
    slogan(){
        console.log(`${this.name} is a good boy`)
    }
    static add(a,b){
        return(a+b);
    }
}

class Derived extends Base{
    constructor(givenName,givenLang,givenClass,givenSight)
    {
        super(givenName,givenLang,givenClass);
        this.sight=givenSight;
    }
    gg(){
        console.log(`${this.language} is a good language`);
    }
}
// let Devil=new Base("Gopal","JS","1st");
// console.log(Devil)
// console.log(Base.add(5,5));
let H=new Derived("G","jS","Inter",0.5);
console.log(H);