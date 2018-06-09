/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDeviceRegistrationData : NSObject <NSSecureCoding> {
    NSArray * _additionalDeviceSerialNumbers;
    NSString * _companionSerialNumber;
    bool  _devSigned;
    NSString * _deviceSerialNumber;
    NSArray * _legacyStateInformation;
    NSData * _platformData;
    NSData * _platformDataSignature;
    NSString * _productType;
    NSString * _secureElementIdentifier;
    NSDictionary * _secureElementStateInformation;
    NSString * _signedAuthToken;
}

@property (nonatomic, copy) NSArray *additionalDeviceSerialNumbers;
@property (nonatomic, copy) NSString *companionSerialNumber;
@property (nonatomic) bool devSigned;
@property (nonatomic, copy) NSString *deviceSerialNumber;
@property (nonatomic, readonly) NSArray *legacyStateInformation;
@property (nonatomic, copy) NSData *platformData;
@property (nonatomic, copy) NSData *platformDataSignature;
@property (nonatomic, copy) NSString *productType;
@property (nonatomic, copy) NSString *secureElementIdentifier;
@property (nonatomic, copy) NSDictionary *secureElementStateInformation;
@property (nonatomic, copy) NSString *signedAuthToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalDeviceSerialNumbers;
- (id)companionSerialNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)devSigned;
- (id)deviceSerialNumber;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)legacyStateInformation;
- (id)platformData;
- (id)platformDataSignature;
- (id)productType;
- (id)secureElementIdentifier;
- (id)secureElementStateInformation;
- (void)setAdditionalDeviceSerialNumbers:(id)arg1;
- (void)setCompanionSerialNumber:(id)arg1;
- (void)setDevSigned:(bool)arg1;
- (void)setDeviceSerialNumber:(id)arg1;
- (void)setPlatformData:(id)arg1;
- (void)setPlatformDataSignature:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;
- (void)setSecureElementStateInformation:(id)arg1;
- (void)setSignedAuthToken:(id)arg1;
- (id)signedAuthToken;

@end
