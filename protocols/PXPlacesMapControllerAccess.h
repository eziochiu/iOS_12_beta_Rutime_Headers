/* made by EzioChiu.
 */

@protocol PXPlacesMapControllerAccess <NSObject>

@required

- (PXPlacesMapController *)mapController;
- (PKExtendedTraitCollection *)pk_extendedTraitCollection;

@end
