/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleOwnerUUIDEncoder : NSObject {
    unsigned long long  mIndex;
    unsigned char  mUUID;
}

+ (id)UUIDEncoder;
+ (id)UUIDEncoderWithStyleOwnerPathType:(unsigned char)arg1;
+ (id)styleOwnerBaseUUID;
+ (id)styleOwnerBaseUUIDString;

- (void)encodeByte:(unsigned char)arg1;
- (void)encodeUInt64:(unsigned long long)arg1;
- (void)encodeUInt64FromNSUInteger:(unsigned long long)arg1;
- (id)encodedUUID;
- (bool)hasSpaceToEncodeNumberOfBytes:(unsigned long long)arg1;
- (id)init;

@end
