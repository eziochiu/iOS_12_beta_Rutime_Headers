/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPackageSection : NSObject {
    long long  _index;
    NSData * _signature;
    unsigned long long  _size;
}

@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic) unsigned long long size;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (long long)index;
- (id)initWithIndex:(long long)arg1 signature:(id)arg2 size:(unsigned long long)arg3;
- (void)setSize:(unsigned long long)arg1;
- (id)signature;
- (unsigned long long)size;

@end
