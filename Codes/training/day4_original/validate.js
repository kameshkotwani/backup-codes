function validateForm() {
    let nm = document.getElementById('name')
    let pd = document.getElementById('pwd')
    if (nm.value == "") {
        alert('Enter Name')
        return false;
    }
    else if (pd.value == "") {
        alert('passkey not input')
        return false;
    }
    else {
        return true;
    }
}