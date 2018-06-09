/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureCoreMotionMetadataInput : AVCaptureInput {
    AVCaptureCoreMotionMetadataInputInternal * _internal;
}

@property (nonatomic, readonly) NSString *sourceID;

+ (id)coreMotionMetadataInput;
+ (void)initialize;

- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (id)init;
- (id)ports;
- (id)sourceID;

@end
