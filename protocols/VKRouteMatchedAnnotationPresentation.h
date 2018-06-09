/* made by EzioChiu.
 */

@protocol VKRouteMatchedAnnotationPresentation <VKTrackableAnnotationPresentation>

@required

- (void)addPresentationCoordinateChangedObserver:(id <VKRouteMatchedAnnotationPresentationObserver>)arg1;
- (void)removePresentationCoordinateChangedObserver:(id <VKRouteMatchedAnnotationPresentationObserver>)arg1;
- (GEORouteMatch *)routeMatch;
- (void)setRouteMatch:(GEORouteMatch *)arg1;

@end
