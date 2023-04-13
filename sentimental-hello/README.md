---
files: [hello.py]
url: https://cdn.cs50.net/2022/fall/psets/6/sentimental-hello/README.md
window: [terminal]
---

# Hello

Implement a program that prints out a simple greeting to the user, per the below.

```
$ python hello.py
What is your name?
David
hello, David
```

## Specification

Write, in a file called `hello.py`, a program that prompts a user for their name, and then prints `hello, so-and-so`, where `so-and-so` is their provided name, exactly as you did in Problem Set 1, except that your program this time should be written in Python.

## Usage

Your program should behave per the example below.

```
$ python hello.py
What is your name?
Emma
hello, Emma
```

## Testing

While `check50` is available for this problem, you're encouraged to first test your code on your own for each of the following.

* Run your program as `python hello.py`, and wait for a prompt for input. Type in `David` and press enter. Your program should output `hello, David`.
* Run your program as `python hello.py`, and wait for a prompt for input. Type in `Bernie` and press enter. Your program should output `hello, Bernie`.
* Run your program as `python hello.py`, and wait for a prompt for input. Type in `Carter` and press enter. Your program should output `hello, Carter`.

Execute the below to evaluate the correctness of your code using `check50`. But be sure to compile and test it yourself as well!

```
check50 cs50/problems/2022/fall/sentimental/hello
```

Execute the below to evaluate the style of your code using `style50`.

```
style50 hello.py
```

## How to Submit

1. Download your `hello.py` file by control-clicking or right-clicking on the file in your codespace's file browser and choosing **Download**.
1. Go to CS50's [Gradescope page](https://www.gradescope.com/).
1. Click "Problem Set 6: Sentimental (Hello)".
1. Drag and drop your `hello.py` file to the area that says "Drag & Drop". Be sure it has that **exact** filename! If you upload a file with a different name, the autograder likely will fail when trying to run it, and ensuring you have uploaded files with the correct filename is your responsibility!
1. Click "Upload".

You should see a message that says "Problem Set 6: Sentimental (Hello) submitted successfully!" You may not see a score just yet, but if you see the message then we've received your submission!

{% alert danger %}

Per Step 4 above, after you submit, be sure to check your autograder results. If you see `SUBMISSION ERROR: missing files (0.0/1.0)`, it means your file was not named exactly as prescribed (or you uploaded it to the wrong problem).

Correctness in submissions entails everything from reading the specification, writing code that is compliant with it, and submitting files with the correct name. If you see this error, you should resubmit right away, making sure your submission is fully compliant with the specification. The staff will not adjust your filenames for you after the fact!

{% endalert %}