/* made by EzioChiu.
 */

@protocol PXPlacesMapOverlayRenderer <PXPlacesMapRenderer>

@required

- (<PXPlacesGeotaggedItemDataSource> *)dataSource;
- (<MKOverlay> *)overlayForLayoutItem:(id <PXPlacesMapLayoutItem>)arg1;
- (MKOverlayRenderer *)rendererForOverlay:(id <MKOverlay>)arg1 andMapView:(PXPlacesMapView *)arg2;
- (void)setDataSource:(id <PXPlacesGeotaggedItemDataSource>)arg1;

@end
