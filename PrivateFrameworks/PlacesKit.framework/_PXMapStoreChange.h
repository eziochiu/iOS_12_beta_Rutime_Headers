/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface _PXMapStoreChange : NSObject <PXPlacesGeotaggedItemDataSourceChange> {
    NSSet * _addedItems;
    NSSet * _removedItems;
    NSSet * _updatedItems;
}

@property (retain) NSSet *addedItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSSet *removedItems;
@property (readonly) Class superclass;
@property (retain) NSSet *updatedItems;

- (id)addedItems;
- (void)dealloc;
- (bool)hasChanges;
- (id)initWithAddedItems:(id)arg1 removedItems:(id)arg2 updatedItems:(id)arg3;
- (id)removedItems;
- (void)setAddedItems:(id)arg1;
- (void)setRemovedItems:(id)arg1;
- (void)setUpdatedItems:(id)arg1;
- (void)updateWithChange:(id)arg1;
- (id)updatedItems;

@end
