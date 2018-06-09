/* made by EzioChiu.
 */

@protocol MKPlacePhotosViewDelegate <NSObject>

@required

- (void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(MKMapItemPhoto *)arg2;
- (UIImageView *)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1;

@optional

- (void)placePhotoViewerWillClose:(MKPlacePhotosView *)arg1 photo:(MKMapItemPhoto *)arg2 onIndex:(unsigned long long)arg3;

@end
