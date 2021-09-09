/*
* Input Format 1 2 3 4 5
* <number>space<number>...
*
* Reverse array by swapping elements.
*
* */

fun reverseArray(a: Array<Int>): Array<Int> {

    var m: Int = a.size / 2 -1
    
    for(i in 0..m){
        var temp = a[i]
        a[i] = a[a.size-i-1]
        a[a.size-i-1] = temp
    }
    
    return a

}

fun main(args: Array<String>) {

    val arr = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()

    val res = reverseArray(arr)

    println(res.joinToString(" "))
}