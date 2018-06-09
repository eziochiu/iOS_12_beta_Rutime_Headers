/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface _PFDQDECallSite : NSObject <NSCopying> {
    NSData * _addresses;
    NSArray * _symbols;
}

+ (id)currentCallSite;
+ (void)initialize;

- (void).cxx_destruct;
- (id)backtraceWithPrefix:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithAddresses:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
