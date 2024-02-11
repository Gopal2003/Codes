console.log("welcome to tutorial 53.js");
function* numbGenerator(){
    for(let i=0;i<5;i++){
        yield i;
    }
}

const gen=numbGenerator();
console.log(gen.next());
console.log(gen.next());
console.log(gen.next());
console.log(gen.next());
console.log(gen.next());
console.log(gen.next());