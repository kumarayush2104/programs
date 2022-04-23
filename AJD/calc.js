let num1=0, num2=0, def=1, met=0, allow=1;

function num(value) {
    targ = document.getElementById("textview");
    if(def==1){
        targ.innerHTML = value.toString();
        def=0;
    } else {
        if(targ.innerHTML.length < 12) {
            targ.innerHTML += value.toString();
        }
    }
}

function opr(metin) {
    targ = document.getElementById("textview");
    if(def==0) {
        num1 = parseFloat(targ.textContent);
        met= metin;
        def=1;
        allow=1;
        targ.innerHTML = "Second number";
    }
}

function spe(metin) {
    targ = document.getElementById("textview");
    if(metin=="C") {
            targ.innerHTML = "Enter a number";
            num1=0;
            num2=0;
            def=1;
            met=0;
    }
    if(metin="P" && def==0) {
        if(targ.innerHTML.indexOf(".") == -1) {
            targ.innerHTML += ".";
        }
    }
}

function trig(met, num1) {
    targ = document.getElementById("textview");
    if(allow==1){
        if(met=="+") {
            let ans = num1 + parseFloat(targ.textContent);
            targ.innerHTML = ans.toString();
            def=1;
            allow=0;
        }
        if(met=="-") {
            let ans = num1 - parseFloat(targ.textContent);
            targ.innerHTML = ans.toString();
            def=1;
            allow=0;
        }
        if(met=="*") {
            let ans = num1 * parseFloat(targ.textContent);
            targ.innerHTML = ans.toString();
            def=1;
            allow=0;
        }
        if(met=="/") {
            let ans = num1 / parseFloat(targ.textContent);
            targ.innerHTML = ans.toString();
            def=1;
            allow=0;
        }
    }
}
function jhero() {
    targ = document.getElementById("textview");
    if(def==1|| parseFloat(targ) == 0 ){
        targ.innerHTML = "0";
    } else {
        if(targ.innerHTML.length < 12) {
            targ.innerHTML += "0";
        }
    }
}