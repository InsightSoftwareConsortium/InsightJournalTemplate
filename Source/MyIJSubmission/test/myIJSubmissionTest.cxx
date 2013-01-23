#include <iostream>
#include <fstream>
#include "itkNumericTraits.h"
#include "itkImageFileReader.h"
#include "itkImageFileWriter.h"


int myIJSubmissionTest(int argc, char **argv)
{
  if( argc < 3 )
    {
    std::cerr << "You must supply an input image file name and an output image file name " << std::endl;
    return 1;
    }

  const unsigned int Dimension = 2;

  typedef itk::Image< unsigned char, Dimension > ImageType;
  typedef itk::Image< unsigned char, Dimension > OutputType;
  typedef itk::Image< unsigned char, Dimension > DiffOutputType;

  typedef itk::ImageFileReader< ImageType >      ReaderType;
  typedef itk::ImageFileWriter< OutputType >     WriterType;

  // Read the baseline file
  ReaderType::Pointer baselineReader = ReaderType::New();

  baselineReader->SetFileName(argv[1]);
  try
    {
    baselineReader->UpdateLargestPossibleRegion();
    }
  catch (itk::ExceptionObject& e)
    {
    std::cerr << "Exception detected while reading " << argv[4];
    std::cerr << " : "  << e.GetDescription();
    return 1;
    }

  WriterType::Pointer writer = WriterType::New();

  writer->SetInput(baselineReader->GetOutput());

  std::ostringstream baseName;

  baseName << argv[2];

  try
    {
    writer->SetFileName( baseName.str().c_str() );
    writer->Update();
    }
  catch (...)
    {
    std::cerr << "Error during write of " << baseName.str() << std::endl;
    return EXIT_FAILURE;
    }

  return EXIT_SUCCESS;
}

