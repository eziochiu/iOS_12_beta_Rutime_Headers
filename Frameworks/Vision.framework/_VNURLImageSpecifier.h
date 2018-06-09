/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface _VNURLImageSpecifier : VNImageSpecifier {
    NSURL * _url;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (id)newImageBufferWithOptions:(id)arg1 error:(id*)arg2;
- (id)observationsCacheKey;
- (id)url;

@end
