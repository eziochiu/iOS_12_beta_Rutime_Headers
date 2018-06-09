/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
 */

@interface MSDKManagedDevice : NSObject {
    NSObject<OS_xpc_object> * _connection;
    <MSDKManagedDeviceDelegate> * _delegate;
}

@property (retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic) <MSDKManagedDeviceDelegate> *delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)cancelOperation;
- (bool)configureWiFi:(id)arg1 password:(id)arg2;
- (id)connection;
- (id)delegate;
- (id)errorWithXPCDictionary:(id)arg1;
- (id)getDeviceOptions;
- (id)getScreenSaverConfig;
- (id)getStoreID;
- (void)handleContentUpdateStatus:(const char *)arg1 event:(id)arg2;
- (void)handleMessage:(id)arg1;
- (id)init;
- (bool)isContentFrozen;
- (bool)isContentFrozen_xpc;
- (bool)isDeviceClassSupported;
- (bool)isEnrolled;
- (bool)prepare;
- (bool)prepareWithWiFi:(id)arg1 password:(id)arg2;
- (id)readNVRam:(id)arg1;
- (bool)saveScreenSaverConfig:(id)arg1;
- (id)saveScreenSaverIdleDelay:(id)arg1;
- (id)saveStoreHour:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setIdleDelay:(long long)arg1;
- (bool)setStoreOpenAt:(long long)arg1 openMinute:(long long)arg2 closeHour:(long long)arg3 closeMinute:(long long)arg4;
- (bool)setupConnection;
- (bool)unenroll:(bool)arg1;

@end
