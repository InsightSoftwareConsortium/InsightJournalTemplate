itk_module_test()

Set(ITK${itk-module}Tests
  myIJSubmissionTest.cxx
)

CreateTestDriver(${itk-module}  "${${itk-module}-Test_LIBRARIES}" "${ITK${itk-module}Tests}")

itk_add_test(NAME myIJSubmissionTest
  COMMAND ${itk-module}TestDriver
  --compare ${${itk-module}_SOURCE_DIR}/test/Baseline/img.png
            ${ITK_TEST_OUTPUT_DIR}/imageOut.png
  myIJSubmissionTest ${${itk-module}_SOURCE_DIR}/test/Input/img1.png
            ${ITK_TEST_OUTPUT_DIR}/imageOut.png )

