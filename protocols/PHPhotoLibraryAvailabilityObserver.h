/* made by EzioChiu.
 */

@protocol PHPhotoLibraryAvailabilityObserver <NSObject>

@required

- (void)photoLibraryDidBecomeUnavailable:(PHPhotoLibrary *)arg1;

@end
