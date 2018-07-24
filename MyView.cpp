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
 * File:   MyView.cpp
 * Author: Rob Garcia at rgarcia@rgprogramming.com
 * 
 * Created on July 2, 2018, 6:00 PM
 */

#include "MyView.h"

MyView::MyView() {
    
}

/**
 * Asks for the user's name.
 * @return The user's name.
*/
std::string MyView::whoAreYou() {
    std::string yourName;
    std::cout << "Hello, World!" << std::endl;
    std::cout << "What is your name: ";
    std::getline(std::cin, yourName);
    return yourName;
}

/**
 * Displays the modified user's name.
 * @param newName The modified user's name.
*/
void MyView::salutation(std::string newName) {
    std::cout << "Your new name is " << newName << std::endl;
}
