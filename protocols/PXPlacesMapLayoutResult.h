/* made by EzioChiu.
 */

@protocol PXPlacesMapLayoutResult <NSObject>

@required

- (NSOrderedSet *)layoutItems;
- (PXPlacesMapViewPort *)viewPort;

@end
