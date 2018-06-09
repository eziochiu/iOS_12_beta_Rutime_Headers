/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDTrackerManipulatorCoordinator : NSObject {
    NSObject<TSDTrackerManipulator> * mControllingTM;
    NSMutableSet * mRegisteredTMs;
}

@property (nonatomic, readonly) NSObject<TSDTrackerManipulator> *controllingTM;

+ (void)p_dynamicallySubclassGRForNotification:(id)arg1;
+ (void)p_removeDynamicSubclass:(id)arg1;

- (id)controllingTM;
- (void)dealloc;
- (bool)hasRegisteredTrackerManipulator:(id)arg1;
- (id)init;
- (void)operationDidEnd;
- (void)operationWillEnd;
- (void)p_notifyControlChange;
- (void)registerTrackerManipulator:(id)arg1;
- (bool)relinquishTrackerManipulatorControl:(id)arg1;
- (bool)takeControlWithTrackerManipulator:(id)arg1;
- (void)unregisterTrackerManipulator:(id)arg1;

@end
