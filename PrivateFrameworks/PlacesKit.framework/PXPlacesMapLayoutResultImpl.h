/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapLayoutResultImpl : NSObject <PXPlacesMapLayoutResult> {
    NSMutableOrderedSet * _items;
    PXPlacesMapViewPort * _viewPort;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableOrderedSet *items;
@property (nonatomic, readonly) NSOrderedSet *layoutItems;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXPlacesMapViewPort *viewPort;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (id)description;
- (id)init;
- (id)items;
- (id)layoutItems;
- (void)removeItem:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setViewPort:(id)arg1;
- (id)viewPort;

@end
