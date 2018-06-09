/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIKernel : NSObject {
    void * _priv;
}

@property (nonatomic) bool canReduceOutputChannels;
@property (readonly) NSString *name;
@property (nonatomic) struct CGSize { double x1; double x2; } outputGroupSize;
@property (nonatomic) bool perservesAlpha;
@property (nonatomic) bool preservesRange;

// Image: /System/Library/Frameworks/CoreImage.framework/CoreImage

+ (id)SDOFV2MetalKernelNamed:(id)arg1;
+ (id)SDOFV3MetalKernelNamed:(id)arg1;
+ (id)betterString:(id)arg1;
+ (id)colorMatrixBiasKernel;
+ (id)hashForString:(id)arg1;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 error:(id*)arg3;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputGroupSize:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputPixelFormat:(int)arg3 error:(id*)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputPixelFormat:(int)arg3 outputGroupSize:(struct CGSize { double x1; double x2; })arg4 error:(id*)arg5;
+ (id)kernelWithString:(id)arg1;
+ (id)kernelWithString:(id)arg1 fromMetalLibraryData:(id)arg2;
+ (id)kernelsWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1 andMetalLibrary:(id)arg2 messageLog:(id)arg3;
+ (id)kernelsWithString:(id)arg1 fromMetalLibraryData:(id)arg2;
+ (id)kernelsWithString:(id)arg1 messageLog:(id)arg2;
+ (id)modifiedKernelStringForFosl:(id)arg1;

- (SEL)ROISelector;
- (id)_initWithInternalRepresentation:(void*)arg1;
- (id)_initWithReflection:(struct CIKernelReflection { int x1; int x2; char *x3; char *x4; struct vector<CI::KernelArgumentType, std::__1::allocator<CI::KernelArgumentType> > { int *x_5_1_1; int *x_5_1_2; struct __compressed_pair<CI::KernelArgumentType *, std::__1::allocator<CI::KernelArgumentType> > { int *x_3_2_1; } x_5_1_3; } x5; struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_2; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_3_2_1; } x_6_1_3; } x6; id x7; int x8; unsigned long long x9; unsigned long long x10; bool x11; })arg1;
- (id)_initWithString:(id)arg1 andMetalLibrary:(id)arg2 usingCruftCompatibility:(bool)arg3;
- (id)_initWithString:(id)arg1 usingCruftCompatibility:(bool)arg2;
- (void*)_internalRepresentation;
- (bool)_isValidOutputPixelFormat:(int)arg1;
- (int)_outputFormatUsingDictionary:(id)arg1 andKernel:(struct Kernel { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; char *x3; char *x4; bool x5; struct SerialIntArray {} *x6; struct SerialStringArray {} *x7; struct __CFString {} *x8; int x9; int x10; struct ISize { unsigned long long x_11_1_1; unsigned long long x_11_1_2; } x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; }*)arg2;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3 options:(id)arg4;
- (bool)canReduceOutputChannels;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)name;
- (struct CGSize { double x1; double x2; })outputGroupSize;
- (id)parameters;
- (bool)perservesAlpha;
- (bool)preservesRange;
- (void)setCanReduceOutputChannels:(bool)arg1;
- (void)setOutputGroupSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPerservesAlpha:(bool)arg1;
- (void)setPreservesRange:(bool)arg1;
- (void)setROISelector:(SEL)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

+ (id)kernelsDictionaryWithString:(id)arg1;

@end
