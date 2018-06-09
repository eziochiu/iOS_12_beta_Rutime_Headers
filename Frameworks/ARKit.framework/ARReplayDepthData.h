/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARReplayDepthData : NSObject <NSSecureCoding> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraExtrinsics;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraIntrinsics;
    struct __CVBuffer { } * _depthMap;
    struct CGSize { 
        double width; 
        double height; 
    }  _resolution;
    double  _timestamp;
}

@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraExtrinsics;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (nonatomic, readonly) struct __CVBuffer { }*depthMap;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } resolution;
@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraExtrinsics;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (void)dealloc;
- (struct __CVBuffer { }*)depthMap;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAVDepthData:(id)arg1 withTimestamp:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDepthDataMap:(struct __CVBuffer { }*)arg1 cameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2 cameraExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 timestamp:(double)arg4;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })resolution;
- (void)setDepthMap:(struct __CVBuffer { }*)arg1;
- (double)timestamp;

@end
