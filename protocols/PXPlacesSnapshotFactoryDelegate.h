/* made by EzioChiu.
 */

@protocol PXPlacesSnapshotFactoryDelegate <NSObject>

@required

- (void)placesSnapshotCountDidChange;
- (void)placesSnapshotDidChange;

@end
