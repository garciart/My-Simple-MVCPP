/*
 * The MIT License
 *
 * Copyright 2018 Rob Garcia at rgarcia@rgprogramming.com.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/* 
 * File:   mymvcppsimpletests.cpp
 * Author: Rob Garcia at rgarcia@rgprogramming.com
 *
 * Created on July 24, 2018, 5:40 PM
 */

#include <stdlib.h>
#include <iostream>
#include "MyModel.h"

/*
 * Simple C++ Test Suite
 */

void testNewName() {
    std::string oldName = "Richie";
    MyModel myModel;
    std::string result = myModel.newName(oldName);
    if (!(result.substr(result.length() - 10, 10) == "the Great!") /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testNewName (mymvcppsimpletests) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% mymvcppsimpletests" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testNewName (mymvcppsimpletests)" << std::endl;
    testNewName();
    std::cout << "%TEST_FINISHED% time=0 testNewName (mymvcppsimpletests)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

