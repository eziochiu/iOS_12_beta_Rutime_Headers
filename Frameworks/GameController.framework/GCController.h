/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCController : NSObject

@property (getter=isAttachedToDevice, nonatomic, readonly) bool attachedToDevice;
@property (nonatomic, copy) id /* block */ controllerPausedHandler;
@property (nonatomic, readonly, retain) GCExtendedGamepad *extendedGamepad;
@property (nonatomic, readonly, retain) GCGamepad *gamepad;
@property (retain) NSObject<OS_dispatch_queue> *handlerQueue;
@property (nonatomic, readonly, retain) NSArray *hidServices;
@property (nonatomic, readonly, retain) GCMicroGamepad *microGamepad;
@property (nonatomic, readonly, retain) GCMotion *motion;
@property (nonatomic, retain) NSString *physicalDeviceUniqueID;
@property (nonatomic) bool physicalDeviceUsesCompass;
@property (nonatomic) long long playerIndex;
@property (nonatomic, retain) <GCNamedProfile> *profile;
@property (nonatomic, readonly) unsigned int service;
@property (nonatomic, readonly, copy) NSString *vendorName;

+ (void)__daemon__addController:(id)arg1;
+ (void)__daemon__appDidEnterBackground;
+ (void)__daemon__appWillEnterForeground;
+ (void)__daemon__controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
+ (void)__daemon__removeController:(id)arg1;
+ (void)__daemon__requestConnectedHostUpdatesWithHandler:(id /* block */)arg1;
+ (void)__daemon__setUserActivityUserInfo:(id)arg1;
+ (void)__daemon__startBonjourService;
+ (void)__openXPC__;
+ (void)__openXPC_and_CBApplicationDidBecomeActive__;
+ (void)__open__;
+ (void)__setLogger__:(id /* block */)arg1;
+ (void)_startWirelessControllerDiscoveryWithCompanions:(bool)arg1 btClassic:(bool)arg2 btle:(bool)arg3 completionHandler:(id /* block */)arg4;
+ (id)controllers;
+ (void)handleUIEvent:(id)arg1;
+ (void)startWirelessControllerDiscoveryWithCompletionHandler:(id /* block */)arg1;
+ (void)stopWirelessControllerDiscovery;

- (void)addServiceRefs:(id)arg1;
- (id /* block */)controllerPausedHandler;
- (void*)createInputBufferForDevice:(struct __IOHIDDevice { }*)arg1 withSize:(unsigned long long)arg2;
- (unsigned long long)deviceHash;
- (id)extendedGamepad;
- (id)gamepad;
- (id)handlerQueue;
- (bool)hasServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (id)hidServices;
- (bool)isAttachedToDevice;
- (bool)isEqualToController:(id)arg1;
- (bool)isForwarded;
- (id)microGamepad;
- (id)motion;
- (id)physicalDeviceUniqueID;
- (bool)physicalDeviceUsesCompass;
- (long long)playerIndex;
- (id)profile;
- (void)removeServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (unsigned int)sampleRate;
- (unsigned int)service;
- (void)setControllerPausedHandler:(id /* block */)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setPhysicalDeviceUniqueID:(id)arg1;
- (void)setPhysicalDeviceUsesCompass:(bool)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (void)setProfile:(id)arg1;
- (bool)supportsMotionLite;
- (id)vendorName;

@end
