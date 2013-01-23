set(DOCUMENTATION "This module is for showing ITK module structure purposes.")

# itk_module() defines the module dependencies in ITKMyIJSubmission;
# ITKMyIJSubmission depends on ITKCommon;
# The testing module in ITKExternalTemplate depends on ITKTestKernel,
# and ITKMetaIO for image IO (besides ITKMyIJSubmissionitself)

itk_module(ITKMyIJSubmission
  DEPENDS
    ITKCommon
    ITKIOImageBase
  TEST_DEPENDS
    ITKTestKernel
    ITKMetaIO
  EXCLUDE_FROM_ALL
  DESCRIPTION
    "${DOCUMENTATION}"
)
