/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKRouteMatchedAnnotationPresentation, VKTrackableAnnotationPresentation> {
    MKAnnotationView * _annotationView;
    NSHashTable * _presentationCoordinateObservers;
}

@property (nonatomic) MKAnnotationView *annotationView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { double x1; double x2; } presentationCoordinate;
@property (nonatomic) double presentationCourse;
@property (nonatomic, retain) GEORouteMatch *routeMatch;
@property (readonly) Class superclass;
@property (nonatomic) bool tracking;

- (void).cxx_destruct;
- (void)addPresentationCoordinateChangedObserver:(id)arg1;
- (id)annotationView;
- (struct { double x1; double x2; })presentationCoordinate;
- (double)presentationCourse;
- (void)removePresentationCoordinateChangedObserver:(id)arg1;
- (id)routeMatch;
- (void)setAnimatingToCoordinate:(bool)arg1;
- (void)setAnnotationView:(id)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setTracking:(bool)arg1;
- (bool)tracking;

@end
