/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
 */

@interface PMMDataProtectionMonitor : NSObject {
    long long  _dataProtectionStatus;
    <PMMDataProtectionMonitorDelegate> * _delegate;
    long long  _encryptedDataAvailability;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwlock;
    bool  _unlockedSinceBoot;
}

@property (nonatomic, readonly) long long dataProtectionStatus;
@property (nonatomic) <PMMDataProtectionMonitorDelegate> *delegate;
@property (nonatomic, readonly) long long encryptedDataAvailability;
@property (nonatomic, readonly) bool unlockedSinceBoot;

+ (id)PMMDataProtectionMonitorDataProtectionStatus:(long long)arg1;
+ (id)PMMDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)arg1;
+ (id)PMMDataProtectionMonitorLockStateToString:(long long)arg1;

- (void).cxx_destruct;
- (void)_registerForKeyBagNotifications;
- (bool)dataProtectionEnabled;
- (long long)dataProtectionStatus;
- (void)dealloc;
- (id)delegate;
- (long long)encryptedDataAvailability;
- (void)handkeKeybagLockStatusChange:(long long)arg1;
- (void)handleUnlockedSinceBoot;
- (id)init;
- (void)setDataProtectionStatus:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEncryptedDataAvailability:(long long)arg1;
- (void)setUnlockedSinceBoot:(bool)arg1;
- (bool)unlockedSinceBoot;

@end
