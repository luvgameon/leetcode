//{ Driver Code Starts
//Initial Template for javascript

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    let t = parseInt(readLine());
    for(let i=0;i<t;i++)
    {
        let input_line = readLine().split(' ');
        let n = parseInt(input_line[0]);
        let m = parseInt(input_line[1]);
        input_line = readLine().split(' ');
        let matrix = new Array(n);
        for(let i=0;i<n;i++)
        {
            let a = new Array(m);
            for(let j=0;j<m;j++)
            {
                a[j] =parseInt(input_line[i*m+j]);
            }
            matrix[i] = a;
        }
        
        let obj = new Solution();
        let res = obj.rowWithMax1s(matrix, n, m);
        console.log(res);
    }
}
// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[][]} arr
 * @param {number} n
 * @param {number} m
 * @returns {number}
*/
class Solution {
    
    rowWithMax1s(arr, n, m){
        let j, max_row_index = 0;
            j = m - 1;
 
            for (let i = 0; i < n; i++)
            {
             
                // Move left until a 0 is found
                let flag = false;
                 
                // to check whether a row has more 1's than previous
                while (j >= 0 && arr[i][j] == 1)
                {
                 
                    j = j - 1; // Update the index of leftmost 1
                    // seen so far
                    flag = true;//present row has more 1's than previous
                }
                 
                // if the present row has more 1's than previous
                if (flag)
                {
                    max_row_index = i; // Update max_row_index
                }
            }
            if (max_row_index == 0 && arr[0][m - 1] == 0)
                return -1;
            return max_row_index;
        }
        // code here
    
}