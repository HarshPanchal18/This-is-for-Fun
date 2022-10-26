import java.util.Scanner

fun describe(obj:Any):String =
when (obj) {
    is String -> "String Passed"
    is kotlin.Int -> "Integer Passed"
    else -> "Unknown"
}

fun myFunc(name: String,city:String,func:(String,String)->String):Unit{
    println(func(name,city))
}

fun maxOf2(x:Int,y:Int)=if(x>=y) x else y

fun main(args: Array<String>)  {
    val id=arrayOf(1,2,3,4,5,6,7)
    println("${id[1]}")

    val ascending=Array(5,{i->i*2}) // Array(sizeOfTheArr,function which is used to initialize and return the value of array)
    println("${ascending[3]}")

    /*
    The list of helper functions used for numeric conversion in Kotlin is given below:

    toByte()
    toShort()
    toInt()
    toLong()
    toFloat()
    toDouble()
    toChar()
    */

    var val1=100
    var val2=val1.toLong()
    println("${val2}")

    var a=5
    var b=10
    val max=if( a > b ) a else b
    println("Max is ${max}")

     a=5
     b=50
    println("+a: ${+a}")
    println("-b: ${-b}")

    /*
    * Unary Operator

    NOTE: Unary operator is used with only single operand. Following are some unary operator given below.

    Operator	Description	    Expression	Convert to
    +	        unary plus	        +a	    a.unaryPlus()
    -	        unary minus	        -a	    a.unaryMinus()
    ++	        increment by 1	    ++a	    a.inc()
    --	        decrement by 1	    --a	    a.dec()
    !	        not	                !a	    a.not()

    */

    // Kotlin Input/Output
    println("Enter your name:")
    var name =readLine()
    //using the readLine() function, input lines other than String are explicitly converted into their corresponding types.
    println("Enter your password:")
    var passw=Integer.valueOf(readLine())

    println("Your name : "+name)
    println("Your password : "+passw)

    //To input other data type rather than String, we need to use Scanner object of java.util.Scanner class from Java standard library.
    var read =Scanner(System.`in`)
    var age=read.nextInt() // import java.util.Scanner
    println("your age: "+age)


    var number=4
    var choice=when (number){
        1->"One"//println("One")  - works directly
        2->"Two"
        3->"Three"
        4->"Four"
        else->"Unknown"
    }
    println("${choice}")

    number=1
    when (number){
        1->{
            println("Sunday")
            println("Now sunday is the first day of the week")
        }
        2->{
            println("Monday")
            println("Now Monday is the first day of the week")
        }
        else->{
            println("Tuesday")
            println("Others are the first day of the week")
        }
    }
    number = 2
    when (number){
        0,2,4,6,8->println("Even")
        1,3,5,2,7,9->println("Odd") // warning: duplicate label in when but it executes the first match
    }

    when (number){
       in 1..5->println("${number} is between 1 to 5")
        in 6..9->println("${number} is between 6 and 9")
    }


    val marks=arrayOf(80,40,65,14,94)
    for (item in marks.indices)
        println("{marks[$item]}   ${marks[item]} ")

    for (i in 1..10)
        print("${i} ")
    println() // \n

    for (i in 1..10 step 2)
        print("${i} ")
    println() // \n

    for(i in 5 downTo 2)
        print("${i} ")
    println() // \n

    for(i in 10 downTo 2 step 2)
        print("${i} ")

    val items=listOf("apple","orange","banana","mango")
    var index=0
    while(index<items.size)
    println("${items[index++]} ")

    var a=1
    val a1="a is ${a}"
    println("${a1}")

    a=2
    val a2="${a1.replace("is", "was")}, but now is ${a}"
    println("${a2}")

    println("${maxOf2(5,10)}")

    println("${describe(5)}")

    // Inline Function
    myFunc("Harsh","Surat",{name,city->"${name} is at ${city}"})

    //Array
    var arrInt=intArrayOf(1,2,3,4,5,6,7)
     for (index in 0..4)
        print(arrInt[index])

println()

    for (index in 0..arrInt.size-1)
        print(arrInt[index])


    var cars = arrayOf("Volvo", "BMW", "Ford", "Mazda")
    println(cars[0])
    println("================================")

    cars[0] = "Opel"
    println(cars[0])
    println(cars.get(1))
    println("================================")

    //Array length
    println(cars.size)
    println("================================")

//     cars[4] = "Hyundai" //compile error, index out of bound
    // Loop Through an Array
    for (x in cars) {
        println(x)
    }
    println("================================")

    var mixedArray = arrayOf(1, 2, "Nehal", false)
    for (x in mixedArray){
        println(x)
    }
    var mixedArray2 = intArrayOf(1, 2, 3)
    println("================================")

    //Check if an Element Exists
    if ("Volvo" in cars)
        println("It exists!")
    else
        println("It does not exist.")
    println("================================")

    //tradition for loop will not work
    //    for (int i=0; i <= car.size; i ++) {
    //        println(cars[i])
    //    }

//    var i: Int = 0
//    while (i <= cars.size) {
//        i += 2
//    }

    //Get distinct values from array
    val fruits = arrayOf<String>("Apple", "Mango", "Banana", "Orange", "Apple")
    val distinct = fruits.distinct()
    for( item in distinct )
        println( item )

    //drop element from array
    val result = fruits.drop(2) // drops first two elements.
    for( item in result )
        println( item )

    //Kotlin Ranges
    for (chars in 'a'..'x')
        println(chars)
    println("================================")

    for (i in 5..15 step 2)
        println(i)
    println("================================")

    for (i in (5..15).reversed() step 5)
        println(i)
    println("================================")

    for (i in 5 .. 1)
        println(i)

    for (i in 5 downTo 1)
        println(i)
    println("================================")

    //List
    val names = listOf("Nidhi", "Rahul", "Sumit")

    // Printing all the values of list names
    println("\nThe List contains: ")
    names.forEach
        println(it)
    println("================================")

    // names[0] = "Dev" //immutable list, wont compile
    names.forEach
        println(it)
    println("================================")

    var subjects = mutableListOf<String>("C++","RDBMS", "Java", "Python")
    subjects.forEach
        println(it)

    subjects.add("Mobile Development")
    subjects.remove("C++")
    subjects.forEach {
        println(it)
    }

    val marks = arrayOf(80,85,60,90,70)

    //for loop
    println("===for loop=============================")
    for(item in marks){
        println(item)
    }

    //while loop
    println("===while loop=============================")
    var i = 1
    while (i<=5){
        println(i)
        i++
    }

    //do while loop
    println("===do while loop=============================")
    var j = 1
    do {
        println(j)
        j++
    }
    while (j<=5);

    //break statement
    println("===break statement=============================")
    for (i in 1..5) {
        if (i == 3) {
            break
        }
        println(i)
    }

    //break to the loop
    println("====break to the loop============================")
    loop@ for (i in 1..3) {
        for (j in 1..3) {
            println("i = $i and j = $j")
            if (i == 2)
                break@loop
        }
    }

    //continue example
    println("===continue example=============================")
    for (i in 1..3) {
        println("i = $i")
        if (i == 2) {
            continue
        }
        println("this is below if")
    }

    println("===label with continue statement=============================")
    //label with continue statement
    start@ for (i in 1..3) {
        for (j in 1..3) {
            println("i = $i and j = $j")
            if (i == 2) {
                continue@start
            }
            println("this is below if")
        }
    }

    //functions
    println("===functions=============================")
    var number = 25
    var result = Math.sqrt(number.toDouble())
    println("Square root of $number is $result")

    //User defined functions
    println("===User Defined Functions=============================")
    var answer = sum(10, 20)
    println(answer)

    //pass function as argument
    println("===pass function as argument=============================")
    answer = calculate(30, 70, ::sum)
    println(answer)

    //lambda function
    println("===lambda function=============================")
    val myPrint: (Int) -> Unit= { s: Int -> println(s) }
    addNumber(5,10, myPrint)


    val obj = myClass() // Create object obj of myClass class
    obj.printMe() // Call a member function using object

    println("=========================")
    //secondary constructor
    val a = Animal("Tiger", 4)
    a.printMe()

    println("=========================")
    //primary constructor
    val p = Person("Nehal", 37)
    p.printMe()*/

    var stringList:List<String> =listOf<String>("Ajay","Vijay","Prakash","Vijay","Rohan","Nehal","Prakash")
    var list:List<String> =listOf<String>("Ajay","Vijay","Nehal")

    for (i in stringList)
        print(i+" ")

    println()
    println(stringList.get(4))
    println(stringList.indexOf("Prakash"))
    println(stringList.lastIndexOf("Prakash"))
    println(stringList.size)
    println(stringList.drop(2))
    println(stringList.dropLast(2))

    /*
    mutableListOf()

add(element: E): Boolean                        It adds the given element to the collection.

add(index: Int, element: E)	                    It adds the element at specified index.

addAll(elements:Collection<E>): Boolean	        It adds all the elements of given collection to current collection.

clear()	                                        It removes all the elements from this collection.

listIterator(): MutableListIterator<E>	        It returns a list iterator over the elements in proper sequence in current list.

listIterator(index: Int): MutableListIterator<E>It returns a list iterator starting from specified index over the elements in list in proper sequence.

remove(element: E): Boolean	                    It removes the specified element if it present in current collection.

removeAll(elements: Collection<E>): Boolean	    It removes all the elements from the current list which are also present in the specified collection.

removeAt(index: Int): E	                        It removes element at given index from the list.

retainAll(elements: Collection<E>): Boolean	    It retains all the elements within the current collection which are present in given collection.

set(index: Int, element: E): E	                It replaces the element and add new at given index with specified element.

subList(
fromIndex: Int,toIndex: Int
): MutableList<E>	                            It returns part of list from specified fromIndex (inclusive) to toIndex (exclusive) from current list.
                                            The returned list is backed by current list, so non-structural changes in the returned list are reflected in current list, and vice-versa.
     */

     var mList=mutableListOf("Ajay","Vijay","Prakash","Vijay")
     var mList2=mutableListOf<String>()

     for (ele in mList) {
        println(ele)
     }
     println()

     for(index in 0..mList.size - 1)
        println(mList[index])
    mList.add("Nehal")
    for(index in 0..mList.size - 1)
        println(mList[index])

/*
ArrayList() class

 add(element: E): Boolean	                to add the specific element into the collection.
 add(index: Int, element: E)	            to insert an element at specific index.
 addAll(elements: Collection<E>): Boolean	to add all the elements in the specified collection to current collection.
 addAll(index: Int,
 elements: Collection<E>): Boolean	        to add all the elements of specified collection into the current list at the specified index.
 clear()                                	to removes all elements from the collection.
 get(index: Int): E	                        to return the element at specified index in the list.
 indexOf(element: E): Int	                to return the index of first occurrence of specified element in the list or return -1 if the specified element in not present in the list.
 lastIndexOf(element: E): Int	            to return the last occurrence of given element from the list or it returns -1 if the given element is not present in the list.
 remove(element: E): Boolean	            to remove a single instance of the specific element from current collection, if it is available.
 removeAt(index: Int): E	                to remove the specific index element from the list.
 removeRange(startIndex: Int, endIndex: Int)Its remove the range of elements starting from startIndex to endIndex in which endIndex is not includes.
 set(index: Int, element: E): E	            to replaces the element from the specified position from current list with the specified element.
 toArray(): Array<Any?>	                    to return new array of type Array<Any?> with the elements of this collection.
 toString(): String	                        to returns a string representation of the object. trimToSize()	It does nothing in this ArrayList implementation.
 trimToSize()	                            It does nothing in this ArrayList implementation.
*/

val arrayList = ArrayList<String>()
    arrayList.add("Ajay")
    arrayList.add("Vijay")
    arrayList.add("Prakash")
    arrayList.add("Rohan")
    arrayList.add("Vijay")
    println(".......print ArrayList.......")

    for (i in arrayList)
        println(i)

    val arrayList2: ArrayList<String> = ArrayList<String>(5)
    var list: MutableList<String> = mutableListOf<String>()

    list.add("Ajay")
    list.add("Vijay")
    list.add("Prakash")

    arrayList2.addAll(list)
    println("......print ArrayList......")
    val itr = arrayList2.iterator()

    while(itr.hasNext())
        println(itr.next())

    println("size of arrayList2 = "+arrayList2.size)

    var arrayList3 = arrayListOf<Int>(4,7,12)
      for(element in arrayList){
        println(element)
    }

    val list: ArrayList<String> = arrayListOf<String>()

    list.add("Ajay")
    list.add("Vijay")
    list.add("Prakash")

    println(".......print ArrayList.......")
    val itr = list.iterator()
    while(itr.hasNext())
        println(itr.next())


    /*
    Kotlin Map is an interface and generic collection of elements.
    Map interface holds data in the form of key and value pair.
    Map key are unique and holds only one value for each key.
    The key and value may be of different pairs such as <Int, Int>,<Int, String>, <Char, String>etc.
    This interface is immutable, fixed size and its methods support read only access.
    To use the Map interface we need to use its function called mapOf() or mapOf<k,v>().

    Properties
entries: Set<Entry<K, V>>	It returns only read all key and value pair of Set Interface in current map.
keys: Set<K>	            It returns only read all key of Set Interface in current map.
keys: Set<K>	            It returns the number of key and value pair in current map.
values: Collection<V>	    It returns only read Collection of all valued in current map. This collection may contain duplicate values.

    Functions

fun <K, V> Map<key, value>.getValue(key: K): V	It returns a value of given key or throws an exception if no such key is available in the map.

operator fun <V, V1 : V> Map<in String,V>.getValue(thisRef: Any?,property: KProperty<*>): V1    It returns the value of the property for the given object from current read- only map.

operator fun <K, V> Map<out K, V>
.contains(key: K): Boolean	                    It checks is the given key contains in map.

fun <K> Map<out K, *>.containsKey(key: K): Boolean	    If map contains the specified key it returns true.

fun <K, V> Map<K, V>.containsValue(value: V): Boolean	If map maps one or more keys to specified value it returns true.

fun <K, V> Map<out K, V>.getOrDefault(key: K, defaultValue: V): V   It returns the value which is given by key in mapped, or returns default value if map does not contains mapping for the given key.

fun <K, V> Map<out K, V>.asIterable(): Iterable<Entry<K, V>>	It creates an instance of Iterable interface which wraps the original map returning its entries when being iterated.

fun <K, V> Map<out K, V>.asSequence(): Sequence<Entry<K, V>>	It creates a Sequence interface instance which wraps the current map and returning its entries when it has iterated.

operator fun <K, V> Map<out K, V>.iterator(): Iterator<Entry<K, V>>	It returns an Iterator over the entries in the Map.

operator fun Map.minus(key: K): Map     It returns a map which contains all the entries of original map except the entry of mention key.

operator fun <K, V> Map<out K, V>.minus(keys: Iterable<K>
): Map<K, V>	            It returns a map which contains all the entries of original map except those entries key which are contained in the mention key collection.

operator fun <K, V> Map<out K, V>.minus(
keys: Sequence<K>
): Map<K, V>	It returns a map which contains all the entries of original map except those entries key which are contained in the given key sequence.

operator fun <K, V> Map<out K, V>.plus(
pair: Pair<K, V>
): Map<K, V>	It creates a new read only map by adding or replacing an entry to current map from a given key-value pair.

operator fun <K, V> Map<out K, V>.plus(
pairs: Iterable<Pair<K, V>>
): Map<K, V>	It creates a new read only map by adding or replacing entries to current map from a given collection of key-value pairs.

operator fun <K, V> Map<out K, V>.plus(
pairs: Sequence<Pair<K, V>>
): Map<K, V>	It creates a new read only map by adding or replacing entries to current map from a given sequence of key-value pairs.

    */

    val mapp: Map<Int,String> = mapOf<Int,String>(1 to "Ajay", 2 to "Vijay", 4 to "Nehal")
    val myMap: Map<Int, String> = mapOf<Int,String>(1 to "Ajay", 4 to "Vijay", 3 to "Prakash")

    for (key in mapp.keys) println("Element at key ${key}: ${mapp.get(key)}")
    for(key in myMap.keys) println("Element at key $key = ${myMap.get(key)}")

    /*
    If we cannot specify any types of key and value of Map Interface then it can take different types of key and value.
    This is because all class internally uses <Any, Any> types
    */

    val mapp2 = mapOf(1 to "Ajay", 2 to "Vijay","ram" to "RAM", "Two" to 2)
    for(key in mapp2.keys) println("Element at key $key = ${mapp2.get(key)}")

    println(mapp2.getValue("ram")) //RAM
    println(mapp2.getValue(2)) // Vijay

     for(itr in mapp2.asIterable())
          println("key = ${itr.key} value = ${itr.value}")

      for(p in myMap.plus(Pair(5, "Rohan")))
          println("Element at key ${p.key} = ${p.value}")

    /*
    * HashMap
    Kotlin HashMap is class of collection based on MutableMap interface.
    Kotlin HashMap class implements the MutableMap interface using Hash table.
    It store the data in the form of key and value pair. It is represented as HashMap<key, value> or HashMap<K, V>.
    The implementation of HashMap class does not make guarantees about the order of data of key,
    value and entries of collections.

    Constructor of Kotlin HashMap class
HashMap()	                                            It constructs an empty HashMap instance
HashMap(initialCapacity: Int, loadFactor: Float = 0f)	It is used to constructs a HashMap of specified capacity.
HashMap(original: Map<out K, V>)	                    It constructs a HashMap instance filled with contents of specified original map.

    Functions of Kotlin HashMap class
put(key: K, value: V): V?           It puts the specified key and value in the map
operator fun get(key: K): V?        It returns the value of specified key, or null if no such specified key is available in map.
containsKey(key: K): Boolean	    It returns true if map contains specifies key.
containsValue(value: V): Boolean	It returns true if map maps one of more keys to specified value.
clear()	                            It removes all elements from map.
remove(key: K): V?	                It removes the specified key and its corresponding value from map
    */

    val hash:HashMap<Int, String> = HashMap<Int,String>()
    hash.put(1,"Harsh")
    hash.put(1,"Dishang")
    hash.put(1,"Nehal")
    // Replace the Last updated value of same key i.e. Nehal on key 1

    hash.put(2,"Harsh")
    hash.put(3,"Ankit")

    hash.replace(3,"Vivek")
    hash.replace(4,"Har") // Compiler ignores if the key isn't exists
    hash.replace(1,"Nehal","Meet")

    for(key in hash.keys)
        println("key: $key -> Value: ${hash[key]}")

    println(hash.containsKey(2))//true
    println(hash.containsKey(4))//false

    println(hash.containsValue("Nehal"))//true
    println(hash.containsValue("Dishang"))//false

    println(hash.keys)//[1, 2, 3]
    println(hash.getOrDefault(1,"Nehal"))//Meet
    println(hash.getOrDefault(4,"Nehal"))//Default value -> Nehal

    /*
    Kotlin Set interface is a generic unordered collection of elements.
    Set interface does not support duplicate elements.
    This interface is immutable in nature its methods supports read-only functionality of the set.
    Set interface uses setOf() function to create the list of object of set interface which contains list of elements.
     */
}


class myClass {
    // Property (data member)
    private var name: String = "SDJ International College"

    // Member function
    fun printMe() {
        println("My College name is: " + name)
    }
}

//Primary constructor
class Animal {
    private var name: String
    private var legs: Int

    constructor(name: String, legs: Int = 2){
        this.name = name
        this.legs = legs

        println("I am called from constructor")
    }

    init {
        println("I am called from init block")
    }

    fun printMe(){
        println("${this.name} have ${this.legs} legs")
    }
}

class Person constructor(val name:String, val age:Int) {

    init {
        println("Person name is : $name")
        println("Person age is : $age")
    }

    fun printMe(){
        println("Age of $name is $age")
    }
}

class Employee{
    // Member Variables
    var name: String
    var age: Int
    var salary:Double

    // First Secondary Constructor
    constructor ( _name: String, _age: Int) {
        this.name = _name
        this.age = _age
        this.salary = 0.00
        println("Name = $name")
        println("Age = $age")
    }

    // Second Secondary Constructor
    constructor ( _name: String, _age: Int, _salary: Double) {
        this.name = _name
        this.age = _age
        this.salary = _salary
        println("Name = $name")
        println("Age = $age")
        println("Salary = $salary")
    }
}

fun sum(num1:Int, num2:Int) : Int{
    return num1 + num2
}
//fun sum(num1:Int, num2:Int) : Int = num1 + num2

fun calculate(a: Int, b: Int, operation:(Int, Int) -> Int): Int {
    return operation(a, b)
}

fun addNumber(a: Int, b: Int, mylambda: (Int) -> Unit ){
    val add = a + b
    mylambda(add) // println(add)
}
