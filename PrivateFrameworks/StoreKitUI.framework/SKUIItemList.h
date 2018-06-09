/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemList : NSObject <NSCopying, SKUICacheCoding> {
    NSMutableArray * _items;
    NSString * _seeAllTitle;
    NSString * _seeAllURLString;
    NSString * _title;
    NSSet * _unavailableItemIdentifiers;
}

@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSString *seeAllTitle;
@property (nonatomic, copy) NSString *seeAllURLString;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSSet *unavailableItemIdentifiers;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (id)cacheRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (bool)isUnavailableItemIdentifier:(id)arg1;
- (id)items;
- (void)removeItemsAtIndexes:(id)arg1;
- (id)seeAllTitle;
- (id)seeAllURLString;
- (void)setItems:(id)arg1;
- (void)setSeeAllTitle:(id)arg1;
- (void)setSeeAllURLString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnavailableItemIdentifiers:(id)arg1;
- (id)title;
- (id)unavailableItemIdentifiers;

@end
