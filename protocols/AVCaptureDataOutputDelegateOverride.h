/* made by EzioChiu.
 */

@protocol AVCaptureDataOutputDelegateOverride <NSObject>

@required

- (id)delegateOverride;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(NSObject<OS_dispatch_queue> *)arg2;

@end