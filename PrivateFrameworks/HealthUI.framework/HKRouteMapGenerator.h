/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKRouteMapGenerator : NSObject {
    HKLocationReadings * _locationReadings;
}

@property (nonatomic, retain) HKLocationReadings *locationReadings;

- (void).cxx_destruct;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_adjustedMapRectForPolyline:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_annotationViewWithIsStartPoint:(bool)arg1;
- (void)_drawLineFromPointA:(struct CGPoint { double x1; double x2; })arg1 toPointB:(struct CGPoint { double x1; double x2; })arg2 atSpeed:(double)arg3 context:(struct CGContext { }*)arg4 drawDashes:(bool)arg5 lineWidth:(double)arg6;
- (id)_imageWithPolyline:(id)arg1 lineWidth:(double)arg2 mapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg3 onSnapshot:(id)arg4;
- (void)_overlayAnnotationView:(id)arg1 point:(struct { double x1; double x2; })arg2 onSnapshot:(id)arg3 context:(struct CGContext { }*)arg4;
- (void)drawLinesWithPolyline:(id)arg1 lineWidth:(double)arg2 mapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4 pointFromMapPoint:(id /* block */)arg5;
- (id)locationReadings;
- (id)relativeColorForSpeed:(double)arg1;
- (void)setLocationReadings:(id)arg1;
- (void)snapshotWithSize:(struct CGSize { double x1; double x2; })arg1 lineWidth:(double)arg2 completion:(id /* block */)arg3;

@end
