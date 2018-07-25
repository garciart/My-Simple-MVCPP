# MySimpleMVCPP
<h2>My Simple MVCPP is a simple console implementation of the MVC in C++.</h2>
<h3>Introduction</h3>
My Simple MVCPP is a simple console implementation of the Model-View-Controller (MVC) architectural pattern, written in C++. In actuality, it is closer to the Model-View-Adapter (MVA) pattern, since only the Controller knows the View and the Model exist, and any interaction between the View and the Model must go through the Controller. My Simple MVCPP is also a walk-through on how to implement a project correctly in NetBeans, with commenting, versioning control through GitHub, unit testing, and static code analysis.
<h3>Step 1 - Create the Project</h3>
Open NetBeans and click on File -&gt; New Project...:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-01.jpg" alt="" /></p>
Select "C/C++" from the Categories pane and "C/C++ Application" from the Projects pane, and then click Next:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-02.jpg" alt="" /></p>
Type "MySimpleMVCPP " in the Project Name text box and then click Finish:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-03.jpg" alt="" /></p>
If successful, NetBeans will create your project and populate the Projects pane with the default folders you will need to complete this project:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-04.jpg" alt="" /></p>

<h3>Step 2 - Setup the Environment</h3>
Click on Tools -&gt; Templates:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-05.jpg" alt="" /></p>
Select "C/C++" from the Templates pane and then click Settings:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-06.png" alt="" /></p>
Uncomment the user line and add your information (e.g., "user=Rob Garcia at rgarcia@rgprogramming.com", etc.):
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-07.jpg" alt="" /></p>
Save and close the file. Click on File -&gt; Project Properties (MySimpleMVCPP):
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-08.jpg" alt="" /></p>
Select "License Headers" from the Categories pane. Click on the drop-down list next to "Use global license" and select the license you wish to use (e.g., MIT License, etc."). If you are not certain which license you need, check out <a href="https://choosealicense.com/" target="_blank" rel="noopener">https://choosealicense.com/</a>:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-09.jpg" alt="" /></p>
Click OK when finished. While the license header for auto-generated main.cpp will not change, all subsequent source files will contain the desired license header. If you wish to change the main.cpp license header, feel free to do so:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-10.jpg" alt="" /></p>

<h3>Step 3 - Create a Repository</h3>
Before continuing to the next step, make sure you have created a repository for MySimpleMVCPP in <a href="https://github.com/" target="_blank" rel="noopener">GitHub</a> and copied its URL:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-11.jpg" alt="" /></p>
Select the MySimpleMVCPP root node in the Projects pane by clicking on it once. Next, click on Team -&gt; Git -&gt; Initialize Repository:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-12.jpg" alt="" /></p>
The root path should match your project directory:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-13.png" alt="" /></p>
Click OK and allow NetBeans to initialize the repository (errors will appear in the Output Pane). If successful, we need to do a pull from the remote repository first before we push the commit. This is because GitHub considers the creation of License and Readme.md the initial commit to the repository:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-14.jpg" alt="" /></p>
This commit will conflict with your local repository and you will receive a REJECTED_NONFASTFORWARD error if you try to push the local commit to the remote repository:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-15.png" alt="" /></p>
<p style="border: 1px solid black; background-color: lightgray;"><strong>NOTE</strong> - The same error will occur if you make any changes to the remote repository through GitHub instead of through NetBeans.</p>
Therefore, click on Team -&gt; Remote -&gt; Pull..:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-16.jpg" alt="" /></p>
Ensure that the Repository URL is correct, as well as the login information, and then click Next:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-17.jpg" alt="" /></p>
Select the "master -&gt; origin/master [A]" branch in the Remote Branches pane (the [A] means that the branch will be added to the local repository) and click Finish:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-18.jpg" alt="" /></p>
Check the Output pane for any errors. If successful, click on Team -&gt; Commit to commit MySimpleMVCPP to your local repository:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-19.jpg" alt="" /></p>
You should see a listing of all the project files in green, with an "Added" status and a "Commit" action. Click on Commit to continue:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-20.png" alt="" /></p>
Once again, check the Output pane for errors. If successful, click on Team -&gt; Remote -&gt; Push...:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-21.jpg" alt="" /></p>
Ensure that the Repository URL is correct, as well as the login information, and then click Next:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-22.jpg" alt="" /></p>
Select the "master -&gt; master [U]" branch in the Local Branches pane (the [U] means that the branch is updated but unmerged) and click Next:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-23.jpg" alt="" /></p>
Select the "master -&gt; origin/master [U]" branch in the Remote Branches pane and click Finish:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-24.jpg" alt="" /></p>
Check for errors in the Output pane. If successful, you should see the commit in your GitHub account:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-25.jpg" alt="" /></p>

<h3>Step 4 - Writing the Code</h3>
Click on File -&gt; New File...:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-26.jpg" alt="" /></p>
Select "C/C++" from the Categories pane and "C/C++ Class" from the File Types pane, and then click Next:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-27.jpg" alt="" /></p>
Type "MyController" in the Class Name text box and then click Finish:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-28.jpg" alt="" /></p>
NetBeans will create a MyController.h file in the Header Files folder, as well as a MyController.cpp file in the Source Files folder. NetBeans will also open both files in the Editor pane. Notice the both files are colored green, which means that they have not been committed to the repository:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-29.jpg" alt="" /></p>
Notice that NetBeans auto-generated a constructor, a copy constructor, and a destructor. This is NetBeans' way of implementing "<a href="https://en.wikipedia.org/wiki/Rule_of_three_(C%2B%2B_programming)" target="_blank" rel="noopener">The Rule of Three</a>". For several reasons, we will not use copy constructors and destructors in this example, so you may remove those methods from the source and header file, leaving just the base constructor:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-30.jpg" alt="" /></p>
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-31.jpg" alt="" /></p>
Repeat the process twice, adding a MyModel class and MyView class. Remove the copy constructors and destructors from the source and header files of these classes as well.
Now, we will add the code. Starting with main.cpp, modify or add the following code:
main.cpp
<pre>#include &lt;iostream.h&gt;
#include "MyController.h"

/*
 * 
 */
int main(int argc, char** argv) {
    // Instantiate controller
    MyController m;
    return EXIT_SUCCESS;
}
</pre>
MyController.h
<pre>#ifndef MYCONTROLLER_H
#define MYCONTROLLER_H

#include &lt;iostream.h&gt;

class MyController {
public:
    MyController();
private:
    std::string userName;
};

#endif /* MYCONTROLLER_H */
</pre>
MyController.cpp
<pre>#include "MyController.h"
#include "MyModel.h"
#include "MyView.h"

MyController::MyController() {
    // Instantiate classes
    MyView v;
    MyModel m;
    // Get data from view
    userName = v.whoAreYou();
    // Send data to model and get manipulated data
    m.setName(userName);
    userName = m.newName();
    // Send manipulated data to view
    v.salutation(userName);
}
</pre>
NOTE - The above code can be truncated to the following
<pre>     m.setString(v.whoAreYou());
     v.salutation(m.newName());
</pre>
MyModel.h
<pre>#ifndef MYMODEL_H
#define MYMODEL_H

#include &lt;iostream.h&gt;

class MyModel {
public:
    MyModel();
    std::string getName();
    void setName(std::string n);
    std::string newName();
private:
    std::string name;
};

#endif /* MYMODEL_H */
</pre>
MyModel.cpp
<pre>#include "MyModel.h"

MyModel::MyModel() {

}

/// Name getter
std::string MyModel::getName() {
    return name;
}

/// Name setter
void MyModel::setName(std::string n) {
    name = n;
}

/**
 * Adds an epithet to the user's name.
 * @return The modified user's name.
 */
std::string MyModel::newName() {
    return (getName() + " the Great!");
}
</pre>
MyView.h
<pre>#ifndef MYVIEW_H
#define MYVIEW_H

#include &lt;iostream.h&gt;

class MyView {
public:
    MyView();
    std::string whoAreYou();
    void salutation(std::string newName);
private:

};

#endif /* MYVIEW_H */
</pre>
MyView.cpp
<pre>#include "MyView.h"

MyView::MyView() {

}

/**
 * Asks for the user's name.
 * @return The user's name.
*/
std::string MyView::whoAreYou() {
    std::string yourName;
    std::cout &lt;&lt; "Hello, World!" &lt;&lt; std::endl;
    std::cout &lt;&lt; "What is your name: ";
    std::getline(std::cin, yourName);
    return yourName;
}

/**
 * Displays the modified user's name.
 * @param newName The modified user's name.
*/
void MyView::salutation(std::string newName) {
    std::cout &lt;&lt; "Your new name is " &lt;&lt; newName &lt;&lt; std::endl;
}
</pre>
Once that is complete, click on Run -&gt; Set Main Project, and select MySimpleMVCCP:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-32.jpg" alt="" /></p>
Run the project by pressing F6. Using "Robert" as your name, you should get the following result:
<pre>Hello, World!
What is your name: Robert
Your new name is Robert the Great!

RUN SUCCESSFUL (total time: 17s)
</pre>
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-33.jpg" alt="" /></p>

<h3>Step 5 - Unit Testing</h3>
Hey, but what about the unit tests? I am a believer in Ken Beck's Test-Driven Development (TDD) (http://rgprogramming.com/2017/11/05/test-driven-development-tdd/), but, right now, our code does not contain "an IF statement, a loop, switch or case statements, calculations, or any other type of decision-making code;" getters and setters manipulate properties without using logic (Osherove, 2014).

However, adding unit tests are important to preparing a project properly, so we will add some logic, as well as a test, using NetBeans' own simple test framework.
<p style="border: 1px solid black; background-color: lightgray;"><strong>NOTE</strong> - You can use another framework, such as CppUnit, if you like, by following the instructions here: https://netbeans.org/kb/docs/cnd/c-unit-test.html</p>
Modify the model and controller as follows:

MyController.cpp: Change...
<pre>    userName = m.newName();
</pre>
...to:
<pre>    userName = m.newName(m.getName());
</pre>
MyModel.h: Change...
<pre>    std::string newName();
</pre>
...to:
<pre>    std::string newName(std::string oldName);
</pre>
MyModel.cpp: Change the code in the newName function to the following:
<pre>/**
 * Adds an epithet to a name.
 * @param oldName The original name
 * @return The modified name
*/
std::string MyModel::newName(std::string oldName) {
    if(oldName.length() &lt;= 6) {
        return (oldName + " the Great!");
    }
    else {
        return (oldName + " the Magnificent!");
    }
}
</pre>
If you press F5 and enter "Richie," you will get the following result:
<pre>Hello, World!
What is your name: Richie
Your new name is Richie the Great!

RUN SUCCESSFUL (total time: 4s)
</pre>
If you press F5 and enter "Richard," you will get the following result:
<pre>Hello, World!
What is your name: Richard
Your new name is Richard the Magnificent!

RUN SUCCESSFUL (total time: 2s)
</pre>
Now, right click on MyModel.cpp in the Projects pane and select Create Test -&gt; New C++ Simple Test...:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-34.jpg" alt="" /></p>
At the following screen, select the newName function (we won't test constructors, getters, or setters):
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-35.jpg" alt="" /></p>
Click Next. At the next window, change the Test Name to "MyMVCPP Simple Tests" and the test file name to "mymvcppsimpletests":
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-36.jpg" alt="" /></p>
Click Finish and the mymvcppsimpletests.cpp file should open. Scroll down to the function testNewName. Notice that the test is designed to fail with no modifications; this is consistent with TDD. To make sure, press ALT+F6 to test the application:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-37.jpg" alt="" /></p>
Notice the test pane, which provides the results of the tests. If you expand the mymvcppsimpletests leaf by clicking on the '-' sign, you will see that the testNewName function failed:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-38.png" alt="" /></p>
Now, change the code of the newTestName function to the following:
<pre>void testNewName() {
    std::string oldName = "Richie";
    MyModel myModel;
    std::string result = myModel.newName(oldName);
    if (!(result.substr(result.length() - 10, 10) == "the Great!") /*check result*/) {
        std::cout &lt;&lt; "%TEST_FAILED% time=0 testname=testNewName (mymvcppsimpletests) message=error message sample" &lt;&lt; std::endl;
    }
}
</pre>
If you press ALT+F6, the test should pass:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-39.jpg" alt="" /></p>
Before we upload the code to the repository, it is always a good idea to leave time for a static code analysis check. While most IDEs will check for syntax errors and some semantic errors, they normally do not ensure inputs are validated or other measures are included to protect the confidentiality, integrity, and availability of the application or its data; the IDE leaves that up to the user. Therefore, we can use external tools to check for these issues: two of my favorites are <a href="https://sourceforge.net/projects/visualcodegrepp/" target="_blank" rel="noopener">Visual Code Grepper</a> and <a href="https://sourceforge.net/projects/cppcheck/" target="_blank" rel="noopener">CppCheck</a>:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-40.jpg" alt="" /></p>
VCG says we have no errors! Great, now we can upload the code to the repository by selecting the MySimpleMVCPP root in the Project pane, and then clicking Team -&gt; Commit...:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-41.jpg" alt="" /></p>
All the files that we have changed appear. By the way, you may want to change the Commit Message to something more descriptive, such as "Added classes, code, and unit tests." before clicking on Commit:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-42.png" alt="" /></p>
Click on Commit and check the Output pane for errors. If successful, click Team -&gt; Remote -&gt; Push to Upstream:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-43.jpg" alt="" /></p>
The following dialog box may appear:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-44.png" alt="" /></p>
If all your repository settings are the same, click on yes. If you are not sure, click "No," and repeat the Push process, but select Push instead of Push to Upstream.
<p style="border: 1px solid black; background-color: lightgray;"><strong>NOTE</strong> - The difference between Push and Push to Upstream is that Push to Upstream does not reopen the Push to Remote Repository dialog.</p>
Check the Output pane for errors. If successful, visit the repository and you should see the upload:
<p style="text-align: center;"><img class="alignnone size-full wp-image-617" src="http://rgprogramming.com/wp-content/uploads/preparing-a-project-properly-netbeans-45.jpg" alt="" /></p>

<h3>Conclusion:</h3>
There you have it: a simple Model-View-Controller application with unit tests and a repository. You conducted static code analysis as well. From here, you can build on the code, ensuring it is safe, correct, and accessible. Good luck!
<h3>References:</h3>
Osherove, R. (2014). The art of unit testing (2nd ed.). Shelter Island, NY: Manning.
