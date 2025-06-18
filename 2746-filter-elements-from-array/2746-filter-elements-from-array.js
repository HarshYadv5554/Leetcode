/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let n = arr.length;
    let ans = [];

    for(let i = 0; i<n ; i++){
        if(fn(arr[i],i) ){
            ans.push(arr[i]);
        }
    }
    return ans;
};