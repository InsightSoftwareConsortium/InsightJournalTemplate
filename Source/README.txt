This directory contains a template ITK module for a submission to the Insight Journal.

You may want to build the template module with ITK (require ITK version number > 4.0)
first the way it is, in order to get familiar with the build process.  Then you can modify
the example files and add new ones.

===== Template Module Build Instructions =====
* Make sure the version number of your ITK source code is bigger than 4.0.

1. Copy the template module directory "MyIJSubmission" to your local ITK source tree under
"Modules/External" directory.
2. When running CMake configuration to build ITK, switch to the advance mode, and turn on
the CMake Variable "Module_ITKMyIJSubmission".
3. Now you could compile the new module inside your ITK build tree. Or you could compile
the entire ITK and the new module will be built along with other ITK modules.



