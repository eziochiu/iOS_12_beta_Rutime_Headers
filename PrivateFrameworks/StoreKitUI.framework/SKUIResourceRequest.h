/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIResourceRequest : NSObject <NSCopying> {
    id  _cacheKey;
    unsigned long long  _requestID;
}

@property (nonatomic, retain) id cacheKey;
@property (nonatomic, readonly) bool cachesInMemory;
@property (nonatomic) unsigned long long requestIdentifier;

- (void).cxx_destruct;
- (id)_initSKUIResourceRequest;
- (id)cacheKey;
- (bool)cachesInMemory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)finishWithResource:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)newLoadOperation;
- (unsigned long long)requestIdentifier;
- (void)setCacheKey:(id)arg1;
- (void)setRequestIdentifier:(unsigned long long)arg1;

@end
