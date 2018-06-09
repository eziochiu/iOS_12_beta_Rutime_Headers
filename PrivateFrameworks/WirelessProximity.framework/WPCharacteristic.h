/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPCharacteristic : NSObject <NSSecureCoding> {
    NSData * _data;
    unsigned long long  _permissions;
    unsigned long long  _properties;
    NSUUID * _uuid;
    long long  _writeType;
}

@property (retain) NSData *data;
@property unsigned long long permissions;
@property unsigned long long properties;
@property (retain) NSUUID *uuid;
@property long long writeType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)permissions;
- (unsigned long long)properties;
- (void)setData:(id)arg1;
- (void)setPermissions:(unsigned long long)arg1;
- (void)setProperties:(unsigned long long)arg1;
- (void)setUuid:(id)arg1;
- (void)setWriteType:(long long)arg1;
- (id)uuid;
- (long long)writeType;

@end
