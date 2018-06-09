/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDDevice : NSObject <DEDDeviceUISupport, DEDSecureArchiving, NSCopying, NSSecureCoding> {
    NSString * __hashingKey;
    NSString * _address;
    NSString * _build;
    NSSet * _capabilities;
    NSString * _color;
    NSString * _deviceClass;
    NSString * _enclosureColor;
    NSString * _identifier;
    NSString * _model;
    NSString * _name;
    NSString * _platform;
    NSString * _productType;
    long long  _remoteTransport;
    SFDevice * _sfDevice;
    long long  _status;
    long long  _transport;
}

@property (nonatomic, retain) NSString *_hashingKey;
@property (retain) NSString *address;
@property (retain) NSString *build;
@property (retain) NSSet *capabilities;
@property (retain) NSString *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceClass;
@property (retain) NSString *enclosureColor;
@property (readonly) unsigned long long hash;
@property (retain) NSString *identifier;
@property (retain) NSString *model;
@property (retain) NSString *name;
@property (retain) NSString *platform;
@property (retain) NSString *productType;
@property long long remoteTransport;
@property (retain) SFDevice *sfDevice;
@property long long status;
@property (readonly) Class superclass;
@property long long transport;

+ (id)_currentDeviceId;
+ (id)archivedClasses;
+ (id)currentDevice;
+ (id)deviceClassForProductType:(id)arg1;
+ (id)deviceForSFDevice:(id)arg1 andStatus:(long long)arg2;
+ (id)deviceForSFDevice:(id)arg1 systemInfo:(id)arg2 andStatus:(long long)arg3;
+ (id)deviceWithDictionary:(id)arg1;
+ (id)idsDeviceWithDevice:(id)arg1 address:(id)arg2;
+ (id)modelForProductType:(id)arg1;
+ (id)nilSafeDevice;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_hashingKey;
- (id)address;
- (id)build;
- (id)capabilities;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceClass;
- (id)enclosureColor;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchIconImageDataForScale:(float)arg1 completionCompletion:(id /* block */)arg2;
- (bool)hasCapabilities:(id)arg1;
- (id)hashingKey;
- (id)hashingKeyForTempDevice;
- (id)identifier;
- (id)imageData;
- (id)imageURLForDeviceClass:(id)arg1 deviceModel:(id)arg2 deviceColor:(id)arg3 size:(long long)arg4 variant:(long long)arg5 scale:(float)arg6;
- (id)imageURLForScale:(float)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCurrentDevice;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (bool)isLikeDevice:(id)arg1;
- (bool)isMoreCompleteThan:(id)arg1;
- (bool)isTemporaryDevice;
- (id)model;
- (id)name;
- (id)platform;
- (id)productType;
- (id)publicLogDescription;
- (long long)remoteTransport;
- (id)serialize;
- (void)setAddress:(id)arg1;
- (void)setBuild:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setEnclosureColor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setRemoteTransport:(long long)arg1;
- (void)setSfDevice:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTransport:(long long)arg1;
- (void)set_hashingKey:(id)arg1;
- (id)sfDevice;
- (id)shortDescription;
- (long long)status;
- (long long)transport;

@end
