/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFChecksum : NSObject <NSCopying> {
    struct PFChecksumBytes { 
        unsigned char data[16]; 
    }  _bytes;
}

- (struct PFChecksumBytes { unsigned char x1[16]; })checksumBytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBytes:(struct PFChecksumBytes { unsigned char x1[16]; })arg1;
- (id)initWithChecksumAsData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBytes:(struct PFChecksumBytes { unsigned char x1[16]; })arg1;
- (id)string;

@end
