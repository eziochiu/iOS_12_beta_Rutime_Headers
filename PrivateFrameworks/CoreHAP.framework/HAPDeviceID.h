/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPDeviceID : NSObject <NSCopying, NSSecureCoding> {
    NSData * _data;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSString *deviceIDString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)debugDescription;
- (id)description;
- (id)deviceIDString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceIDData:(id)arg1;
- (id)initWithDeviceIDString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDeviceID:(id)arg1;

@end
