/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCloudCallingDevice : NSObject <NSCopying, NSSecureCoding, TPSCloudCallingDevice> {
    bool  _defaultPairedDevice;
    NSString * _modelIdentifier;
    NSString * _name;
    NSString * _phoneNumberURI;
    bool  _supportsRestrictingSecondaryCalling;
    NSString * _uniqueID;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultPairedDevice, nonatomic, readonly) bool defaultPairedDevice;
@property (getter=isDefaultPairedDevice, nonatomic) bool defaultPairedDevice;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *modelIdentifier;
@property (nonatomic, readonly, copy) NSString *modelIdentifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *phoneNumberURI;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsRestrictingSecondaryCalling;
@property (nonatomic) bool supportsRestrictingSecondaryCalling;
@property (nonatomic, readonly, copy) NSString *tps_modelName;
@property (nonatomic, copy) NSString *uniqueID;
@property (nonatomic, readonly, copy) NSString *uniqueID;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDefaultPairedDevice;
- (bool)isEqual:(id)arg1;
- (id)modelIdentifier;
- (id)name;
- (id)phoneNumberURI;
- (void)setDefaultPairedDevice:(bool)arg1;
- (void)setModelIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumberURI:(id)arg1;
- (void)setSupportsRestrictingSecondaryCalling:(bool)arg1;
- (void)setUniqueID:(id)arg1;
- (bool)supportsRestrictingSecondaryCalling;
- (id)uniqueID;

// Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences

- (id)tps_modelName;

@end
