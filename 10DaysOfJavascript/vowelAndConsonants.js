
function vowelsAndConsonants(s) {
    let consonants = '';

    for (let i = 0; i < s.length; i++) {
        if ('aeiou'.includes(s[i]))
            console.log(s[i]);
        else
            consonants += s[i] + '\n';
    }

    console.log(consonants);
}
