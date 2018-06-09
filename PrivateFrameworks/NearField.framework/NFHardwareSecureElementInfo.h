/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFHardwareSecureElementInfo : NSObject <NSSecureCoding> {
    unsigned long long  _OSMode;
    unsigned long long  _OSVersion;
    unsigned long long  _appletMap;
    NSString * _atrString;
    NSArray * _bootHistory;
    NSNumber * _compiledFWVersion;
    unsigned long long  _deviceType;
    NSString * _ecdsaCertificate;
    NSString * _eckaCertificate;
    NSString * _firmwareKeyID;
    unsigned long long  _firmwareVersion;
    unsigned long long  _hardwareVersion;
    NSString * _identifier;
    bool  _jcopTooOld;
    NSData * _manifestQuery;
    unsigned long long  _migrationContext;
    NSNumber * _migrationInstances;
    NSNumber * _migrationPackages;
    unsigned long long  _migrationState;
    NSString * _nonce;
    NSString * _osKeyID;
    bool  _osUpdateMode;
    unsigned long long  _osid;
    NSNumber * _otherOSValid;
    NSNumber * _persistentConfigID;
    bool  _personalisable;
    NSString * _platformIdentifier;
    NSNumber * _referenceCounter;
    bool  _restrictedMode;
    NSString * _rootKeyID;
    NSString * _rsaCertificate;
    unsigned long long  _seType;
    NSNumber * _sequenceCounter;
    NSString * _serialNumber;
    unsigned long long  _signingKeyType;
    unsigned long long  _supportedTechnologies;
}

@property (nonatomic, readonly) unsigned long long OSMode;
@property (nonatomic, readonly) unsigned long long OSVersion;
@property (nonatomic, readonly) unsigned long long appletMap;
@property (nonatomic, readonly) NSString *atrString;
@property (nonatomic, readonly) NSArray *bootHistory;
@property (nonatomic, readonly) NSNumber *compiledFWVersion;
@property (nonatomic, readonly) unsigned long long deviceType;
@property (nonatomic, readonly) NSString *ecdsaCertificate;
@property (nonatomic, readonly) NSString *eckaCertificate;
@property (nonatomic, readonly) NSString *firmwareKeyID;
@property (nonatomic, readonly) unsigned long long firmwareVersion;
@property (nonatomic, readonly) unsigned long long hardwareVersion;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool jcopTooOld;
@property (nonatomic, readonly) NSData *manifestQuery;
@property (nonatomic, readonly) unsigned long long migrationContext;
@property (nonatomic, readonly) NSNumber *migrationInstances;
@property (nonatomic, readonly) NSNumber *migrationPackages;
@property (nonatomic, readonly) unsigned long long migrationState;
@property (nonatomic, readonly) NSString *nonce;
@property (nonatomic, readonly) NSString *osKeyID;
@property (nonatomic, readonly) bool osUpdateMode;
@property (nonatomic, readonly) unsigned long long osid;
@property (nonatomic, readonly) NSNumber *otherOSValid;
@property (nonatomic, readonly) NSNumber *persistentConfigID;
@property (nonatomic, readonly) bool personalisable;
@property (nonatomic, readonly) NSString *platformIdentifier;
@property (nonatomic, readonly) NSNumber *referenceCounter;
@property (nonatomic, readonly) bool restrictedMode;
@property (nonatomic, readonly) NSString *rootKeyID;
@property (nonatomic, readonly) NSString *rsaCertificate;
@property (nonatomic, readonly) unsigned long long seType;
@property (nonatomic, readonly) NSNumber *sequenceCounter;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) unsigned long long signingKeyType;
@property (nonatomic, readonly) unsigned long long supportedTechnologies;

+ (bool)supportsSecureCoding;

- (unsigned long long)OSMode;
- (unsigned long long)OSVersion;
- (void)_setIsInRestrictedMode:(bool)arg1;
- (unsigned long long)appletMap;
- (id)asDictionary;
- (id)atrString;
- (id)bootHistory;
- (id)compiledFWVersion;
- (void)dealloc;
- (unsigned long long)deviceType;
- (id)ecdsaCertificate;
- (id)eckaCertificate;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareKeyID;
- (unsigned long long)firmwareVersion;
- (unsigned long long)hardwareVersion;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)jcopTooOld;
- (id)manifestQuery;
- (unsigned long long)migrationContext;
- (id)migrationInstances;
- (id)migrationPackages;
- (unsigned long long)migrationState;
- (id)nonce;
- (id)osKeyID;
- (bool)osUpdateMode;
- (unsigned long long)osid;
- (id)otherOSValid;
- (id)persistentConfigID;
- (bool)personalisable;
- (id)platformIdentifier;
- (id)referenceCounter;
- (bool)restrictedMode;
- (id)rootKeyID;
- (id)rsaCertificate;
- (unsigned long long)seType;
- (id)sequenceCounter;
- (id)serialNumber;
- (void)setBootHistory:(id)arg1;
- (unsigned long long)signingKeyType;
- (unsigned long long)supportedTechnologies;

@end
