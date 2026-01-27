---
title: The Importance of Open Access in Scientific Publications
subtitle: A Template for MyST Markdown Articles in the Insight Journal
abstract: |
  This document describes a new algorithm implemented using the Insight Toolkit
  ITK (itk.org)..

  This paper is accompanied with the source code, input data, parameters and
  output data that the authors used for validating the algorithm described in
  this paper. This adheres to the fundamental principle that scientific
  publications must facilitate reproducibility of the reported results.

# Keywords for indexing
keywords:
  - open science
  - reproducible research
  - image processing
  - ITK
  - scientific computing
  - MyST markdown

abbreviations:
  FAIR: Findable, Accessible, Interoperable, and Reusable
  ITK: Insight Toolkit
  WASM: WebAssembly
---

Using filters from the Insight Toolkit, we develop an algorithm for detecting
and tracking the movement of solar spots. As it is widely known, celestial
objects such as the sun are ethereal and perfect, and therefore can not harbor
artifacts such as spots. However, observations performed with our open source
telescope have revealed the presence of such spots. The spots seems to continuously change positions on the solar surface.

Automatic detection and tracking of the solar spot movements are of fundamental
importance for allowing the authors to dedicate more time to perfectioning
optical instruments and less time to the supervised acquisition of reliable
data.

```{warning}
The reader should be warned that direct observation of the sun without proper
equipment may result in personal injury, loss of vision and burned brains.
```

## Principles of Solar Spot Detection

Solar spots can be classified as the darkest objects present on an image of the
solar surface. Algorithms such as watersheds, statistical classification and
mathematical morphology are suitable for automatically detecting these features
in images of the solar surface.

## Why Image Processing Papers must include Source Code, Images and Parameters

Modern Image Processing is most of the time performed with computers. An
attempt to replicate the results of an algorithm described in a paper entails
to reimplement the algorithm into source code. This task is far from trivial
and consumes months of work. The final result can not be guaranteed to be
equivalent to the actual code that was used for testing the algorithm when the
paper was written, and therefore it cannot be considered a baseline for
comparing the algorithm with other algorithms available to the reader.

Papers to the Insight Journal are written in the spirit of facilitating and
encouraging readers to perform replication of work. In this sense, the Insight
Journal is compliant with essential concepts of the scientific method.

Since the code is included with the paper, less time has to be spent in
describing the code, and more time can be used for describing how to use the
algorithm in particular types of images.

For questions on the basis of the scientific method the reader is referred to
{cite}`Popper2002,Popper1971`.

## Pointing to other material

The format of this MyST file allows authors to include code snippets, like
the following:

```cpp
typedef itk::Image< unsigned char, 3 > ImageType;

ImageType::Pointer image = ImageType::New();
```

and to cite the online documentation of the Insight Toolkit, for example, the
link to the doxygen documentation of the [ImageToImageFilter](http://itk.org/Doxygen/html/classitk_1_1ImageToImageFilter.html).

MyST markdown also supports inline code formatting for method names like `SetNumberOfIterations()`.

### Including Figures

```{figure} ./assets/RegistrationComponentsDiagram.eps
:name: fig-registration-components
:width: 80%

The basic components of the registration framework are two input images, a transform, a metric, an interpolator and an optimizer.
```

### Mathematical Equations

To support shape-guidance, the generic level set equation
({eq}`eqn-shape-influence-term`) is extended to incorporate a shape guidance
term:

```{math}
:label: eqn-shape-influence-term
\xi \left(\psi^{*}(\mathbf{x}) - \psi(\mathbf{x})\right)
```

## Appendix: Working with MyST Markdown

To create an appendix in a MyST document, simply use additional sections.

### Code Examples

Here's an example of how you might structure code in your MyST document:

```python
# Python example
import itk

# Load an image
image = itk.imread('data/img1.png')

# Process the image
processed_image = itk.median_image_filter(image)

# Save the result
itk.imwrite(processed_image, 'output.png')
```

### Cross-References

You can reference figures like {numref}`fig-registration-components` and equations like {eq}`eqn-shape-influence-term` throughout your document.

```{bibliography}
```
