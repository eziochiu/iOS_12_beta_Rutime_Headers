/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalProtectionMonitor : NSObject {
    AVExternalProtectionMonitorInternal * _monitor;
}

@property (nonatomic, readonly) long long externalProtectionState;

- (void)dealloc;
- (long long)externalProtectionState;
- (id)init;

@end
