/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBUUID : NSObject <NSCopying> {
    unsigned char  _bytes;
    BOOL  _type;
}

@property (nonatomic, readonly) NSString *UUIDString;
@property (nonatomic, readonly) NSData *data;

+ (id)UUIDWithCFUUID:(struct __CFUUID { }*)arg1;
+ (id)UUIDWithData:(id)arg1;
+ (id)UUIDWithNSUUID:(id)arg1;
+ (id)UUIDWithString:(id)arg1;

- (id)UUIDString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCFUUID:(struct __CFUUID { }*)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithNSUUID:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;

@end