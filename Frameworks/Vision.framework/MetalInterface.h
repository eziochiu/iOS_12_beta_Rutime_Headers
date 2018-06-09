/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface MetalInterface : NSObject {
    <MTLCommandQueue> * mtlCommandQueue;
    <MTLDevice> * mtlDevice;
    <MTLLibrary> * mtlLibrary;
}

- (void).cxx_destruct;
- (id)init;
- (void)performAdaptiveBinarizationImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 output:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2 sumTable:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg3 sumSqTable:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg4;
- (void)performVotingImage:(id)arg1 outputTex:(id)arg2 subBuffer:(char *)arg3;
- (id)textureFromCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)textureWithPixelData:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 format:(unsigned long long)arg2;
- (id)textureWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned long long)arg3 usage:(unsigned long long)arg4;

@end
