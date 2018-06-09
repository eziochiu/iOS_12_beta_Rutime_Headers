/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFPeerDevice : NSObject <NSSecureCoding> {
    bool  _defaultPairedDevice;
    NSString * _deviceColor;
    NSString * _enclosureColor;
    long long  _keyCounter;
    NSString * _modelIdentifier;
    NSString * _name;
    NSString * _productBuildVersion;
    NSString * _productName;
    NSString * _productVersion;
    NSString * _uniqueID;
    bool  _validKey;
}

@property (getter=isDefaultPairedDevice) bool defaultPairedDevice;
@property (copy) NSString *deviceColor;
@property (copy) NSString *enclosureColor;
@property long long keyCounter;
@property (copy) NSString *modelIdentifier;
@property (copy) NSString *name;
@property (copy) NSString *productBuildVersion;
@property (copy) NSString *productName;
@property (copy) NSString *productVersion;
@property (copy) NSString *uniqueID;
@property bool validKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)deviceColor;
- (id)enclosureColor;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isDefaultPairedDevice;
- (bool)isEqual:(id)arg1;
- (long long)keyCounter;
- (id)modelIdentifier;
- (id)name;
- (id)productBuildVersion;
- (id)productName;
- (id)productVersion;
- (void)setDefaultPairedDevice:(bool)arg1;
- (void)setDeviceColor:(id)arg1;
- (void)setEnclosureColor:(id)arg1;
- (void)setKeyCounter:(long long)arg1;
- (void)setModelIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductBuildVersion:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setValidKey:(bool)arg1;
- (id)uniqueID;
- (bool)validKey;

@end
