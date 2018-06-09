/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageSpecifier : NSObject <NSCopying, VNObservationsCacheKeyProviding, VNSequencedRequestSupporting> {
    VNImageBuffer * _imageBuffer;
    NSDictionary * _options;
}

@property (nonatomic, readonly, copy) NSDictionary *options;

+ (id)imageSpecifierWithCGImage:(struct CGImage { }*)arg1 error:(id*)arg2;
+ (id)imageSpecifierWithCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 error:(id*)arg3;
+ (id)imageSpecifierWithCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)imageSpecifierWithCIImage:(id)arg1 error:(id*)arg2;
+ (id)imageSpecifierWithCIImage:(id)arg1 orientation:(unsigned int)arg2 error:(id*)arg3;
+ (id)imageSpecifierWithCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)imageSpecifierWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
+ (id)imageSpecifierWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 error:(id*)arg3;
+ (id)imageSpecifierWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)imageSpecifierWithData:(id)arg1 error:(id*)arg2;
+ (id)imageSpecifierWithData:(id)arg1 orientation:(unsigned int)arg2 error:(id*)arg3;
+ (id)imageSpecifierWithData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)imageSpecifierWithObject:(id)arg1 error:(id*)arg2;
+ (id)imageSpecifierWithURL:(id)arg1 error:(id*)arg2;
+ (id)imageSpecifierWithURL:(id)arg1 orientation:(unsigned int)arg2 error:(id*)arg3;
+ (id)imageSpecifierWithURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)imageBufferAndReturnError:(id*)arg1;
- (id)initInternal;
- (id)newImageBufferWithOptions:(id)arg1 error:(id*)arg2;
- (id)observationsCacheKey;
- (id)options;
- (id)sequencedRequestPreviousObservationsKey;
- (bool)wantsSequencedRequestObservationsRecording;

@end
