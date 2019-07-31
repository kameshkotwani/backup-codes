function myFunc() {
	let eleObj = document.getElementsByClassName('row')
	alert(eleObj.length)
}
function add() {
	let a = document.getElementById('num1')
	let b = document.getElementById('num2')
	let s = parseInt(a.value) + parseInt(b.value)
	document.getElementById('output').innerHTML = s

}

function secondFunction() {
	let o = document.getElementsByTagName("input")
	// alert(o.length)
	let arr=["aquamarine","pink"]
	for(let i=0;i<o.length;i++)
	{
		o[i].style.backgroundColor=arr[i]	
	}
}










