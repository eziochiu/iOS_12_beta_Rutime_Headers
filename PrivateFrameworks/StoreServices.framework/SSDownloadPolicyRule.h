/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadPolicyRule : NSObject <NSCopying, NSSecureCoding, SSXPCCoding> {
    NSSet * _applicationStates;
    float  _batteryLevel;
    long long  _cellularDataStates;
    long long  _downloadSizeLimit;
    NSSet * _networkTypes;
    long long  _powerStates;
    long long  _registrationStates;
    long long  _timeLimitStates;
    NSSet * _userDefaultStates;
}

@property (nonatomic, copy) NSSet *applicationStates;
@property (nonatomic) float batteryLevel;
@property (getter=isCellularAllowed, nonatomic, readonly) bool cellularAllowed;
@property (nonatomic) long long cellularDataStates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long downloadSizeLimit;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *networkTypes;
@property (nonatomic) long long powerStates;
@property (nonatomic) long long registrationStates;
@property (readonly) Class superclass;
@property (nonatomic) long long timeLimitStates;
@property (nonatomic, copy) NSSet *userDefaultStates;
@property (getter=isWiFiAllowed, nonatomic, readonly) bool wiFiAllowed;

+ (bool)supportsSecureCoding;

- (void)addApplicationState:(id)arg1;
- (void)addNetworkType:(long long)arg1;
- (void)addUserDefaultState:(id)arg1;
- (id)applicationStates;
- (float)batteryLevel;
- (long long)cellularDataStates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (long long)downloadSizeLimit;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isCellularAllowed;
- (bool)isEqual:(id)arg1;
- (bool)isWiFiAllowed;
- (id)networkTypes;
- (long long)powerStates;
- (long long)registrationStates;
- (void)setApplicationStates:(id)arg1;
- (void)setBatteryLevel:(float)arg1;
- (void)setCellularDataStates:(long long)arg1;
- (void)setDownloadSizeLimit:(long long)arg1;
- (void)setNetworkTypes:(id)arg1;
- (void)setPowerStates:(long long)arg1;
- (void)setRegistrationStates:(long long)arg1;
- (void)setTimeLimitStates:(long long)arg1;
- (void)setUserDefaultStates:(id)arg1;
- (long long)timeLimitStates;
- (void)unionPolicyRule:(id)arg1;
- (id)userDefaultStates;

@end
