let o= document.getElementById('para')
o.style.fontsize="30px"
function myFunc()
{
    let obj=document.getElementById('para')
    obj.innerHTML='Value Changed'
    console.log('Changed value');
    obj.style.backgroundColor="red"
    obj.style.color="#ffffff"
    obj.style.fontSize="30px"
}