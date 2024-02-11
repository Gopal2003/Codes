console.log("Hello welcome to tutorial 44");
let a = "Devil is back";
a=undefined;
if (a != undefined) {
    throw new Error("This is defined");
} else {
    console.log("This is undefined");
}

try {
    aksfhgd;
    // console.log("Hemllo");
} catch (error) {
    console.log("Ye kya bawaseer likha hai?");
    console.log(error);
    console.log(error.name);
    console.log(error.message);
} finally{
    console.log("Any ways print my console");
    
}
