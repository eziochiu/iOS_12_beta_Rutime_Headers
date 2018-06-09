/* made by EzioChiu.
 */

@protocol FMFMapOptionsViewControllerDelegate <NSObject>

@required

- (void)_dismiss:(id)arg1;
- (void)mapTypeChanged:(unsigned long long)arg1;
- (MKMapView *)mapView;
- (void)openInMapsButtonTapped:(id)arg1;

@end
