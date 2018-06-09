/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKNavigationPuck : NSObject <VKTrackableAnnotationPresentation> {
    bool  _animatingToCoordinate;
    struct AnimationRunner { struct MapEngine {} *x1; } * _animationRunner;
    <VKAnnotation> * _annotation;
    struct NavigationPuck { struct CPuckStyleInfo {} *x1; struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_2_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_2_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_2_1_3; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; float x4; float x5; int x6; bool x7; bool x8; bool x9; } * _navigationPuck;
    VKTimedAnimation * _puckStyleAnimation;
    bool  _stale;
    bool  _tracking;
}

@property (nonatomic) bool animatingToCoordinate;
@property (nonatomic, retain) <VKAnnotation> *annotation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mode;
@property (nonatomic) struct { double x1; double x2; } presentationCoordinate;
@property (nonatomic) double presentationCourse;
@property (nonatomic) float scale;
@property (nonatomic) bool showCourse;
@property (nonatomic) bool stale;
@property (readonly) Class superclass;
@property (nonatomic) bool tracking;

- (bool)animatingToCoordinate;
- (id)annotation;
- (void)dealloc;
- (void)destroyAnimationRunner;
- (bool)enabled;
- (id)initWithAnimationRunner:(struct AnimationRunner { struct MapEngine {} *x1; }*)arg1;
- (int)mode;
- (struct { double x1; double x2; })presentationCoordinate;
- (double)presentationCourse;
- (struct NavigationPuck { struct CPuckStyleInfo {} *x1; struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_2_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_2_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_2_1_3; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; float x4; float x5; int x6; bool x7; bool x8; bool x9; }*)puck;
- (void)runAnimation:(id)arg1;
- (float)scale;
- (void)setAnimatingToCoordinate:(bool)arg1;
- (void)setAnnotation:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMode:(int)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setScale:(float)arg1;
- (void)setShowCourse:(bool)arg1;
- (void)setStale:(bool)arg1;
- (void)setTracking:(bool)arg1;
- (bool)showCourse;
- (bool)stale;
- (bool)tracking;

@end
