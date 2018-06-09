/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageRequestHandler : NSObject {
    VNImageSpecifier * _imageSpecifier;
    VNObservationsCache * _observationsCache;
    NSDictionary * _options;
    VNRequestPerformer * _requestPerformer;
}

+ (id)asyncProcessingDispatchQueue;
+ (void)forcedCleanup;
+ (void)forcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanup;
+ (void)requestForcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanupWithOptions:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)cancelAllRequests;
- (id)imageBufferAndReturnError:(id*)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCIImage:(id)arg1 options:(id)arg2;
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithImageSpecifier:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (bool)performRequests:(id)arg1 error:(id*)arg2;
- (bool)prepareForPerformingRequests:(id)arg1 error:(id*)arg2;
- (bool)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2;

@end