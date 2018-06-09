/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchaseHistoryItem : NSObject <NSCopying, SSXPCCoding> {
    NSMutableDictionary * _properties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;

@end
