function designerPdfViewer(h, word) {
    let max = 0;
    for (let i = 0; i < word.length; i++) {
        let index = parseInt(word[i], 36) - 10;
        max = Math.max(max, h[index]);
    };
    return max * word.length;
}
