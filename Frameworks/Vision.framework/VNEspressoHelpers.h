/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNEspressoHelpers : NSObject

+ (struct __CVBuffer { }*)createCVPixelBufferWithPixelFormat:(unsigned int)arg1 fromImageInEspressoBuffer:(const struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg2 error:(id*)arg3;
+ (bool)createSingleNetworkPlanFromResourceName:(id)arg1 usingProcessingDevice:(id)arg2 espressoContext:(void**)arg3 espressoPlan:(void**)arg4 espressoNetwork:(struct { void *x1; int x2; }*)arg5 error:(id*)arg6;
+ (bool)createSingleNetworkPlanFromResourceName:(id)arg1 usingProcessingDevice:(id)arg2 explicitNetworkLayersStorageType:(int)arg3 espressoContext:(void**)arg4 espressoPlan:(void**)arg5 espressoNetwork:(struct { void *x1; int x2; }*)arg6 error:(id*)arg7;
+ (bool)enableMontrealAndReturnError:(id*)arg1;
+ (int)espressoDeviceIDForMetalDevice:(id)arg1;
+ (bool)feedForwardEspressoBufferForNetwork:(struct { void *x1; int x2; }*)arg1 fromBufferWithName:(id)arg2 toBufferWithName:(id)arg3 firstFrame:(bool)arg4 error:(id*)arg5;
+ (id)pathForEspressoNetworkModelFileWithName:(id)arg1 error:(id*)arg2;
+ (id)pathForEspressoResource:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
+ (id)pathForEspressoResourceWithFilename:(id)arg1 error:(id*)arg2;
+ (unsigned long long)pixelValueSizeInBytesForBuffer:(const struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 error:(id*)arg2;
+ (bool)renderEspressoBufferImage:(const struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 intoCVPixelBuffer:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
+ (void)tearDownEspressoContext:(void*)arg1 andPlan:(void*)arg2;

@end
