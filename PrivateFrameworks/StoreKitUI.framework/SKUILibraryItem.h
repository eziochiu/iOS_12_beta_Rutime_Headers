/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILibraryItem : NSObject <NSCopying> {
    NSString * _storeFlavorIdentifier;
    SKUIStoreIdentifier * _storeIdentifier;
}

@property (nonatomic, copy) NSString *storeFlavorIdentifier;
@property (nonatomic, copy) SKUIStoreIdentifier *storeIdentifier;
@property (nonatomic, readonly) NSNumber *storeItemIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setStoreFlavorIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFlavorIdentifier;
- (id)storeIdentifier;
- (id)storeItemIdentifier;

@end