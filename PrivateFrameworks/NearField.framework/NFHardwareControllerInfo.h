/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFHardwareControllerInfo : NSObject <NSSecureCoding> {
    unsigned long long  _ROMVersion;
    unsigned long long  _firmwareRevision;
    unsigned long long  _firmwareVersion;
    bool  _hasAntenna;
    bool  _hasBooster;
    bool  _hasExpressECPAccessMode;
    bool  _hasExpressFelicaTransitMode;
    bool  _hasExpressGenericAMode;
    bool  _hasIcfResistor;
    bool  _hasLPCDSupport;
    bool  _hasMFW;
    unsigned long long  _middlewareVersion;
    unsigned long long  _siliconName;
    unsigned long long  _siliconVersion;
}

@property (nonatomic, readonly) unsigned long long ROMVersion;
@property (nonatomic, readonly) unsigned long long firmwareRevision;
@property (nonatomic, readonly) unsigned long long firmwareVersion;
@property (nonatomic, readonly) bool hasAntenna;
@property (nonatomic, readonly) bool hasBooster;
@property (nonatomic, readonly) bool hasExpressECPAccessMode;
@property (nonatomic, readonly) bool hasExpressFelicaTransitMode;
@property (nonatomic, readonly) bool hasExpressGenericAMode;
@property (nonatomic, readonly) bool hasIcfResistor;
@property (nonatomic, readonly) bool hasLPCDSupport;
@property (nonatomic, readonly) bool hasMFW;
@property (nonatomic, readonly) unsigned long long middlewareVersion;
@property (nonatomic, readonly) unsigned long long siliconName;
@property (nonatomic, readonly) unsigned long long siliconVersion;

+ (bool)supportsSecureCoding;

- (unsigned long long)ROMVersion;
- (id)asDictionary;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)firmwareRevision;
- (unsigned long long)firmwareVersion;
- (bool)hasAntenna;
- (bool)hasBooster;
- (bool)hasExpressECPAccessMode;
- (bool)hasExpressFelicaTransitMode;
- (bool)hasExpressGenericAMode;
- (bool)hasIcfResistor;
- (bool)hasLPCDSupport;
- (bool)hasMFW;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)middlewareVersion;
- (unsigned long long)siliconName;
- (unsigned long long)siliconVersion;

@end
