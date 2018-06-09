/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFHardwareBoosterInfo : NSObject <NSSecureCoding> {
    NSData * _dynamicConfig;
    unsigned long long  _siliconVersion;
    NSData * _staticConfig;
}

@property (nonatomic, readonly) NSData *dynamicConfig;
@property (nonatomic, readonly) unsigned long long siliconVersion;
@property (nonatomic, readonly) NSData *staticConfig;

+ (bool)supportsSecureCoding;

- (id)asDictionary;
- (void)dealloc;
- (id)dynamicConfig;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)siliconVersion;
- (id)staticConfig;

@end
