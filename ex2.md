<h1>Assignment 2</h1>

<h3><code>Base b1;</code></h3>
<p>This will print out <i>Base constructor-0 param</i></p>
<p><b>Explanation: </b>This line creates an object 'b1' of the class 'Base' using default constructor.</p>

<h3><code>Base b2(3);</code></h3>
<p>This will print out <i>Base constructor-1 param</i></p>
<p><b>Explanation: </b>This line creates an object 'b2' of the class 'Base' using parameterized constructor with the value '3'.</p>

<h3><code>Base* pb = new Base(1);</code></h3>
<p>This will print out <i>Base constructor-1 param</i></p>
<p><b>Explanation: </b>This line dynamically allocates memory for an object of the class 'Base' using the 'new' keyword and parameterized constructor with the value '1'</p>

<h3><code>DerivedA da1;</code></h3>
<p> This will print out: <br>
    <i>Base constructor-0 param</i><br>
    <i>DerivedA constructor-0 param</i>
</p>
<p><b>Explanation: </b>This line creates object 'da1' of the 'DerivedA' class using default constructor. The 'Base' class default constructor is called first, follow by the class 'DerivedA' constructor.</p>

<h3><code>DerivedA da2(2);</code></h3>
<p> This will print out: <br>
    <i>Base constructor-0 param</i><br>
    <i>DerivedA constructor-1 param</i>
</p>
<p><b>Explanation: </b>This line creates object 'da2' of the 'DerivedA' class using parameterized constructor with the value '2'. The 'Base' class default constructor is called first, follow by the class 'DerivedA' constructor.</p>

<h3><code>DerivedA da3(2,3);</code></h3>
<p> This will print out: <br>
    <i>Base constructor-0 param</i><br>
    <i>DerivedA constructor-2 params</i>
</p>
<p><b>Explanation: </b>This line creates object 'da3' of the 'DerivedA' class using parameterized constructor with the value '2, 3'. The 'Base' class default constructor is called first, follow by the class 'DerivedA' constructor.</p>

<h3><code>DerivedA da4(da2);</code></h3>
<p> This will print out: <br>
    <i>Base constructor-0 param</i><br>
</p>
<p><b>Explanation: </b>This line creates object 'da4' of the 'DerivedA' class using copy constructor with the 'da2'. The 'Base' class default constructor is called first, follow by the class 'DerivedA' constructor.</p>

<h3><code>pb=new DerivedA(4,5);</code></h3>
<p> This will print out: <br>
    <i>Base constructor-0 param</i><br>
    <i?>DerivedA constructor-2 params</i>
</p>
<p><b>Explanation: </b>This line dynamically allocates memory for an object of the class 'DerivedA' using the 'new' keyword and parameterized constructor with the value '4,5'. The 'Base' class default constructor is called first, follow by the class 'DerivedA' constructor.</p>

<h3><code>DerivedB db1;</code></h3>
<p> This will print out: <br>
    <i>Base constructor-0 param</i><br>
    <i>DerivedB constructor-0 param</i>
</p>
<p><b>Explanation: </b>This line creates object 'db1' of the 'DerivedB' class using default constructor. The 'Base' class default constructor is called first, follow by the class 'DerivedB' constructor.</p>

<h3><code>DerivedB db2(2.7);</code></h3>
<p> This will print out: <br>
    <i>Base constructor-0 param</i><br>
    <i>DerivedB constructor-1 param</i>
</p>
<p><b>Explanation: </b>This line creates object 'db2' of the 'DerivedB' class using parameterize constructor with the value '2.7'. The 'Base' class default constructor is called first, follow by the class 'DerivedB' constructor.</p>

<h3><code>DerivedB db3(3,2.7);</code></h3>
<p> This will print out: <br>
    <i>Base constructor-1 param</i><br>
    <i>DerivedB constructor-2 params</i>
</p>
<p><b>Explanation: </b>This line creates object 'db3' of the 'DerivedB' class using parameterized constructor with the value '3, 2.7'. The 'Base' class parameterized constructor with the value '3' is called first, follow by the class 'DerivedB' constructor.</p>

<h3><code>DerivedB db4(db2);</code></h3>
<p> This will print out: <br>
    <i>Base copy constructor</i><br>
    <i>DerivedB copy constructor</i>
</p>
<p><b>Explanation: </b>This line creates object 'db3' of the 'DerivedB' class using copy constructor with 'db2'. The 'Base' class conpy constructor with the part of 'db2' is called first, follow by the class 'DerivedB' constructor.</p>

<h3><code>pb=new Derived3(4,5);</code></h3>
<p> This will print out: <br>
    <i>Base constructor-1 param</i><br>
    <i>DerivedB constructor-2 params</i>
</p>
<p><b>Explanation: </b>This line dynamically allocates memory for an object of the class 'DerivedB' using the 'new' keyword and parameterized constructor with the value '4,5'. The 'Base' class parameterized constructor with the value '4' is called first, follow by the class 'DerivedA' constructor.</p>

<h3><code>f(b1);</code></h3>
<p> This will print out: <br>
    <i>Base copy constructor</i><br>
    <i>Function f</i><br>
    <i>Base destructor</i>
</p>
<p><b>Explanation: </b>This line calls the function 'f' with the object 'b1'. In the function, a copy constructor of the 'Base' class is invoked. After the function executed, the destructor of the temporary object created in the function is called.</p>

<h3><code>f(da1);</code></h3>
<p> This will print out: <br>
    <i>Base copy constructor</i><br>
    <i>Function f</i><br>
    <i>Base destructor</i>
</p>
<p><b>Explanation: </b>This line calls the function 'f' with the object 'da1'. In the function, a copy constructor of the 'Base' class is invoked. After the function executed, the destructor of the temporary object created in the function is called.</p>

<h3><code>f(db1);</code></h3>
<p> This will print out: <br>
    <i>Base copy constructor</i><br>
    <i>Function f</i><br>
    <i>Base destructor</i>
</p>
<p><b>Explanation: </b>This line calls the function 'f' with the object 'db1'. In the function, a copy constructor of the 'Base' class is invoked. After the function executed, the destructor of the temporary object created in the function is called.</p>

<h3><code>delete pb</code></h3>
<p> This will print out: <br>
    <i>Base destructor</i>
</p>
<p><b>Explanation: </b>This line calls destructor of 'Base' class</p>

<h3>Destructor called</h3>
<p> This will print out: <br> <hr>
    <i>DerivedB destructor</i><br>
    <i>Base destructor </i>
    <p><b>Explanation: </b>This line calls destructor of object 'db4' of class 'DerivedB', it calls destructor of 'DerivedB' first and 'Base' class after</p>
    <i>DerivedB destructor</i><br>
    <i>Base destructor </i>
    <p><b>Explanation: </b>This line calls destructor of object 'db3' of class 'DerivedB', it calls destructor of 'DerivedB' first and 'Base' class after</p>
    <i>DerivedB destructor</i><br>
    <i>Base destructor </i>
    <p><b>Explanation: </b>This line calls destructor of object 'db2' of class 'DerivedB', it calls destructor of 'DerivedB' first and 'Base' class after</p>
    <i>DerivedB destructor</i><br>
    <i>Base destructor </i>
    <p><b>Explanation: </b>This line calls destructor of object 'db1' of class 'DerivedB', it calls destructor of 'DerivedB' first and 'Base' class after</p>
    <i>DerivedA destructor</i><br>
    <i>Base destructor </i>
    <p><b>Explanation: </b>This line calls destructor of object 'da4' of class 'DerivedA', it calls destructor of 'DerivedA' first and 'Base' class after</p>
    <i>DerivedA destructor</i><br>
    <i>Base destructor </i>
    <p><b>Explanation: </b>This line calls destructor of object 'da3' of class 'DerivedA', it calls destructor of 'DerivedA' first and 'Base' class after</p>
    <i>DerivedA destructor</i><br>
    <i>Base destructor </i>
    <p><b>Explanation: </b>This line calls destructor of object 'da2' of class 'DerivedA', it calls destructor of 'DerivedA' first and 'Base' class after</p>
    <i>DerivedA destructor</i><br>
    <i>Base destructor </i>
    <p><b>Explanation: </b>This line calls destructor of object 'da1' of class 'DerivedA', it calls destructor of 'DerivedA' first and 'Base' class after</p>
    <i>Base destructor </i>
    <p><b>Explanation: </b>This line calls destructor of object 'b2' of class 'Base'.</p>
    <i>Base destructor </i>
    <p><b>Explanation: </b>This line calls destructor of object 'b1' of class 'Base'.</p>
</p>