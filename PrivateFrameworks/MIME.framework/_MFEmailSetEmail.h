/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFEmailSetEmail : NSObject {
    NSString * _comment;
    NSString * _encodedAddress;
    unsigned long long  _hash;
}

@property (nonatomic, retain) NSString *address;
@property (nonatomic, readonly) NSString *commentedAddress;
@property (nonatomic, readonly) unsigned long long hash;

- (id)address;
- (id)commentedAddress;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1;
- (bool)isEqualToEmail:(id)arg1;
- (void)setAddress:(id)arg1;

@end
