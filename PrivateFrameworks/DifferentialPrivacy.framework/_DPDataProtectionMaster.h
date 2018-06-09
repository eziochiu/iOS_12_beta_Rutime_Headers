/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPDataProtectionMaster : NSObject {
    NSMutableDictionary * _availableState;
    bool  _deviceFormatedForContentProtection;
    NSMutableDictionary * _handlers;
    bool  _notifyEnabled;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *availableState;
@property (nonatomic, readonly) bool deviceFormatedForContentProtection;
@property (nonatomic, readonly) NSMutableDictionary *handlers;
@property (nonatomic, readonly) bool notifyEnabled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notifyQueue;
@property (nonatomic, readonly) int notifyToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)availableState;
- (void)dealloc;
- (void)deregisterStateChangeHandler:(id)arg1;
- (bool)deviceFormatedForContentProtection;
- (bool)deviceHasBeenUnlockedSinceBoot;
- (bool)deviceIsLocked;
- (bool)deviceIsPasswordConfigured;
- (void)handleKeyBagLockNotification;
- (id)handlers;
- (id)init;
- (bool)isDataAvailableFor:(id)arg1;
- (bool)isDataAvailableForClassA;
- (bool)isDataAvailableForClassC;
- (bool)notifyEnabled;
- (id)notifyQueue;
- (int)notifyToken;
- (id)registerStateChangeHandler:(id /* block */)arg1;
- (id)stateQueue;

@end
