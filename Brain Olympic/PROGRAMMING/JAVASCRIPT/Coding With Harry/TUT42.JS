console.log("Hello welcome")
function getData(){
    console.log("Inside function getData");
    url="TUT42.TXT";
    fetch(url).then((response)=>{
        console.log("Inside first then");
         return response.text();
    }).then((data)=>{
        console.log("Inside second then");
        console.log(data);
    })
}
console.log("Before calling te function getData")
getData();
console.log("After calling the function getData");