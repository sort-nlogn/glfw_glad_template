t = document.getElementsByClassName("enroll-lists-table__table")[0].childNodes[1]

let cntr = 1

for(let i = 1; i < t.childNodes.length; i++){
    t.childNodes[i].childNodes[5].innerText != '1' ? (t.childNodes[i].remove()): (t.childNodes[i].childNodes[0].innerText = cntr++)}