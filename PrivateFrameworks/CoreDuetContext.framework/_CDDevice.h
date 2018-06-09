/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDDevice : NSObject <NSCopying, NSSecureCoding> {
    long long  _deviceClass;
    unsigned long long  _identifier;
    NSString * _name;
}

@property (nonatomic) long long deviceClass;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic, copy) NSString *name;

+ (unsigned long long)getPlatformUUID;
+ (id)localDevice;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)deviceClass;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(unsigned long long)arg2 deviceClass:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setDeviceClass:(long long)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setName:(id)arg1;

@end
