/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImageDescriptor : NSObject {
    VNImageprint * _imagePrint;
}

+ (id)descriptorWithData:(id)arg1;
+ (id)descriptorWithImage:(struct __CVBuffer { }*)arg1;
+ (int)preferredPixelFormat;
+ (bool)useDistanceIdentity;

- (void).cxx_destruct;
- (int)computeDistanceWith:(id)arg1 distance:(float*)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithImage:(struct __CVBuffer { }*)arg1;
- (id)serialize;

@end
