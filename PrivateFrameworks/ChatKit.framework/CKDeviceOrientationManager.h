/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDeviceOrientationManager : NSObject <BKSAccelerometerDelegate> {
    BKSAccelerometer * _accelerometer;
    <CKDeviceOrientationManagerDelegate> * _delegate;
    NSMutableSet * _listenerKeys;
}

@property (nonatomic, retain) BKSAccelerometer *accelerometer;
@property (nonatomic, readonly) long long currentDeviceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKDeviceOrientationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *listenerKeys;
@property (getter=isListeningForOrientationEvents, nonatomic, readonly) bool listeningForOrientationEvents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_broadcastOrientation:(long long)arg1;
- (long long)_springboardDeviceLockOrientation;
- (void)_updateListeningState;
- (bool)_wantsOrientationEvents;
- (id)accelerometer;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)beginListeningForOrientationEventsWithKey:(id)arg1;
- (long long)currentDeviceOrientation;
- (void)dealloc;
- (id)delegate;
- (void)endListeningForOrientationEventsWithKey:(id)arg1;
- (id)init;
- (void)invalidate;
- (bool)isListeningForOrientationEvents;
- (id)listenerKeys;
- (void)setAccelerometer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setListenerKeys:(id)arg1;

@end
