function generatePassword() {
    // length of passwords
    const tokens = 15;
    
    // character set
    var pool = new Array('a', 'b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z');
    
    // password generation via Math.random()
    let password = "";
    for(var i = 0; i < tokens; i++) {
        password = password + pool[Math.floor(Math.random()*pool.length)];
    }

    // For further use, for example to store the password in a database, use the string "password". 
    // Don't forget to hash the password.
    
    // uncomment the line below to output the password
    alert(password);
}