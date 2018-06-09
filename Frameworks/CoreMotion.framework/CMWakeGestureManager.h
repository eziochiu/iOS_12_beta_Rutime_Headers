/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMWakeGestureManager : NSObject {
    <CMWakeGestureDelegate> * _delegate;
}

@property (nonatomic) <CMWakeGestureDelegate> *delegate;

+ (bool)isWakeGestureAvailable;
+ (bool)isWakeGestureEnabledOniPad;
+ (id)sharedManager;

- (id)delegate;
- (void)logAssert;
- (void)setDelegate:(id)arg1;
- (bool)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2;
- (void)startWakeGestureUpdates;
- (void)stopWakeGestureUpdates;

@end
