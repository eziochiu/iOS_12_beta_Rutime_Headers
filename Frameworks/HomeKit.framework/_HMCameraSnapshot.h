/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMCameraSnapshot : _HMCameraSource {
    NSDate * _captureDate;
}

@property (nonatomic, readonly, copy) NSDate *captureDate;

- (void).cxx_destruct;
- (void)_releaseSlotIdentifier;
- (id)captureDate;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 msgDispatcher:(id)arg5 profileUniqueIdentifier:(id)arg6 aspectRatio:(id)arg7 captureDate:(id)arg8;

@end
