/* made by EzioChiu.
 */

@protocol AVCEffectsDelegate <NSObject>

@required

- (void)didCaptureVideoFrame:(AVCVideoFrame *)arg1;
- (void)didCaptureVideoFrame:(AVCVideoFrame *)arg1;

@optional

- (void)serverDidDisconnect:(AVCEffects *)arg1;
- (void)serverDidTimeout:(AVCEffects *)arg1;

@end
