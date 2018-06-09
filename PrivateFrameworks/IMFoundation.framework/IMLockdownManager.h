/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMLockdownManager : NSObject {
    bool  _hasShownMismatchedSIM;
    bool  _hasShownWaitingAlertThisSession;
    bool  _isCarrierInstall;
    bool  _isInternalInstall;
    bool  _isNonUIInstall;
    bool  _isVendorInstall;
    bool  _settingUpActivationState;
    unsigned long long  _state;
}

@property (nonatomic) bool _hasShownMismatchedSIM;
@property (nonatomic) bool _hasShownWaitingAlertThisSession;
@property (nonatomic) bool _isCarrierInstall;
@property (nonatomic) bool _isInternalInstall;
@property (nonatomic) bool _isNonUIInstall;
@property (nonatomic) bool _isVendorInstall;
@property (nonatomic) bool _settingUpActivationState;
@property (setter=_setState:, nonatomic) unsigned long long _state;
@property (nonatomic, readonly) bool isActivated;
@property (nonatomic, readonly) bool isCarrierInstall;
@property (nonatomic, readonly) bool isExpired;
@property (nonatomic, readonly) bool isInternalInstall;
@property (nonatomic, readonly) bool isNonUIInstall;
@property (nonatomic, readonly) bool isVendorInstall;
@property (nonatomic, readonly) NSString *uniqueDeviceIdentifier;

+ (id)sharedInstance;

- (void)_calculateInstallType;
- (bool)_hasShownMismatchedSIM;
- (bool)_hasShownWaitingAlertThisSession;
- (bool)_isCarrierInstall;
- (bool)_isInternalInstall;
- (bool)_isNonUIInstall;
- (bool)_isVendorInstall;
- (void)_resetActivationState;
- (void)_setState:(unsigned long long)arg1;
- (bool)_settingUpActivationState;
- (void)_setupActivationState;
- (unsigned long long)_state;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isActivated;
- (bool)isCarrierInstall;
- (bool)isExpired;
- (bool)isInternalInstall;
- (bool)isNonUIInstall;
- (bool)isVendorInstall;
- (long long)lockdownState;
- (void)set_hasShownMismatchedSIM:(bool)arg1;
- (void)set_hasShownWaitingAlertThisSession:(bool)arg1;
- (void)set_isCarrierInstall:(bool)arg1;
- (void)set_isInternalInstall:(bool)arg1;
- (void)set_isNonUIInstall:(bool)arg1;
- (void)set_isVendorInstall:(bool)arg1;
- (void)set_settingUpActivationState:(bool)arg1;
- (id)uniqueDeviceIdentifier;

@end
