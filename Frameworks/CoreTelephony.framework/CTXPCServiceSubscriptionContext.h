/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCServiceSubscriptionContext : NSObject <NSCopying, NSSecureCoding> {
    bool  _isSimPresent;
    NSString * _label;
    NSString * _phoneNumber;
    long long  _slotID;
    NSNumber * _userDataPreferred;
    NSNumber * _userDefaultVoice;
    NSUUID * _uuid;
}

@property (nonatomic) bool isSimPresent;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, readonly) long long slotID;
@property (nonatomic, readonly, copy) NSString *tps_isoCountryCode;
@property (nonatomic, readonly, copy) NSString *tps_localizedLabel;
@property (nonatomic, readonly, copy) NSString *tps_localizedPhoneNumber;
@property (nonatomic, retain) NSNumber *userDataPreferred;
@property (nonatomic, retain) NSNumber *userDefaultVoice;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony

+ (id)contextWithSlot:(long long)arg1;
+ (id)contextWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSlot:(long long)arg1;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 andSlot:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isSimPresent;
- (id)label;
- (id)phoneNumber;
- (void)setIsSimPresent:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setUserDataPreferred:(id)arg1;
- (void)setUserDefaultVoice:(id)arg1;
- (long long)slotID;
- (id)userDataPreferred;
- (id)userDefaultVoice;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences

+ (id)telephonyClient;

- (id)tps_isoCountryCode;
- (id)tps_localizedLabel;
- (id)tps_localizedPhoneNumber;

@end
