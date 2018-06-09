/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInkKey : NSObject <NSCopying> {
    NSString * _identifier;
    NSString * _variant;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *variant;
@property (nonatomic, readonly) unsigned long long version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 version:(unsigned long long)arg2 variant:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)variant;
- (unsigned long long)version;

@end
