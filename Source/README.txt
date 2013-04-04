This directory contains a template/example ITK module
for a source code submission to the Insight Journal.

You may want to build this template module with ITK
(require ITK version number > 4.0) first the way it
is, in order to get familiar with the build process.

===== Template Module Build Instructions =====

* Make sure you have downloaded the ITK source code
and with version 4.0+.

1. Copy the template module directory "MyIJSubmission"
to your local ITK source tree under "Modules/External"
directory.

2. When running CMake configuration to build ITK, switch
to the advance mode, and turn on the CMake Variable
"Module_ITKMyIJSubmission".

3. Now you could compile the new module inside your ITK
build tree. Or you could compile the entire ITK and the
new module will be built along with other ITK modules.


===== Submit Your Own ITK Module =====

Please follow the template module example to organize your
code into an ITK module. The directory name will then be a
meaningful module name of your choice.

After that you could directly submit the module as a tar ball
to the Insight Journal during the "Upload Source Code" step.
Alternatively, if you have already set up the git repository
for your module, you could just fill in the git url during
the "Upload Source Code" step. The insight journal server will
then pull your code from the git repo for testing.
