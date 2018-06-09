/* made by EzioChiu.
 */

@protocol PXPlacesGeotaggedItemDataSource <NSObject>

@required

- (NSSet *)allItems;
- (<PXPlacesGeotaggedItemDataSourceDelegate> *)delegate;
- (NSSet *)findItemsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })minimalEncompassingMapRect;
- (long long)numberOfItems;
- (void)setDelegate:(id <PXPlacesGeotaggedItemDataSourceDelegate>)arg1;

@end
