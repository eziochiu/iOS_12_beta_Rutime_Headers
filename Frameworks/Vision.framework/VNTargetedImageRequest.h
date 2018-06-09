/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNTargetedImageRequest : VNImageBasedRequest {
    VNImageSpecifier * _targetedImageSpecifier;
}

+ (id)optionNameForTargetedImageSpecifyingObject;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTargetedCGImage:(struct CGImage { }*)arg1;
- (id)initWithTargetedCGImage:(struct CGImage { }*)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithTargetedCGImage:(struct CGImage { }*)arg1 options:(id)arg2;
- (id)initWithTargetedCGImage:(struct CGImage { }*)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTargetedCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithTargetedCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithTargetedCIImage:(id)arg1;
- (id)initWithTargetedCIImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithTargetedCIImage:(id)arg1 options:(id)arg2;
- (id)initWithTargetedCIImage:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTargetedCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithTargetedCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { }*)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithTargetedImageData:(id)arg1;
- (id)initWithTargetedImageData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithTargetedImageData:(id)arg1 options:(id)arg2;
- (id)initWithTargetedImageData:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTargetedImageData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithTargetedImageData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithTargetedImageSpecifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithTargetedImageURL:(id)arg1;
- (id)initWithTargetedImageURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithTargetedImageURL:(id)arg1 options:(id)arg2;
- (id)initWithTargetedImageURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTargetedImageURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithTargetedImageURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)newDefaultRequestInstance;
- (id)observationsCacheKey;
- (id)requiredTargetedImageSpecifierReturningError:(id*)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (id)targetedImageSpecifier;

@end
