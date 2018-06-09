/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAGalleryItemSelection : TSKSelection {
    TSAGalleryItem * _displayedItem;
    NSOrderedSet * _items;
}

@property (nonatomic, readonly) TSAGalleryItem *displayedItem;
@property (nonatomic, readonly) NSOrderedSet *items;

+ (Class)archivedSelectionClass;

- (void).cxx_destruct;
- (id)UUIDDescription;
- (id)description;
- (id)displayedItem;
- (unsigned long long)hash;
- (id)initWithItems:(id)arg1 displayedItem:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)items;

@end
