function sum() {
  let n1 = document.getElementById("num1");
  let n2 = document.getElementById("num2");
  let s = document.getElementById("output");
  let sum = parseInt(n1.value) + parseInt(n2.value);
  s.innerHTML = sum;
}
