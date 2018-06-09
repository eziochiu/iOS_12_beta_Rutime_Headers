/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPanoramaOutput : AVCaptureVideoDataOutput {
    CAMCaptureEngine * __engine;
    long long  _photoEncodingBehavior;
}

@property (nonatomic, readonly) CAMCaptureEngine *_engine;
@property (nonatomic, readonly) long long photoEncodingBehavior;

- (void).cxx_destruct;
- (id)_engine;
- (void)changeToDirection:(long long)arg1;
- (void)changeToEncodingBehavior:(long long)arg1;
- (id)initWithEngine:(id)arg1;
- (long long)photoEncodingBehavior;

@end
