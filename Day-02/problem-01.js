let prompt=require('prompt-sync')();

let day=Number(prompt("Enter day number (1-7) : "));

let GetDay=function(day){
    switch(day){
        case 1:{
            console.log("Monday");
            break;
        }
        case 2:{
            console.log("Tuesday");
            break;
        }
        case 3:{
            console.log("Wednesday");
            break;
        }
        case 4:{
            console.log("Thuresday");
            break;
        }
        case 5:{
            console.log("Frinday");
            break;
        }
        case 6:{
            console.log("Saturday");
            break;
        }
        case 7:{
            console.log("Sunday");
            break;
        }
        default:console.log("Invalid Number!!")
    }
}

GetDay(day);