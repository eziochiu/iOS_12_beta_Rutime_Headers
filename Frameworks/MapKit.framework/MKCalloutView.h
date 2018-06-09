/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCalloutView : UIView <_MKMotionEffectDelegate> {
    MKAnnotationView * _annotationView;
}

@property (nonatomic, readonly) long long anchorPosition;
@property (readonly) MKAnnotationView *annotationView;
@property (getter=isVisibile, nonatomic, readonly) bool visible;

- (void).cxx_destruct;
- (long long)anchorPosition;
- (id)annotationView;
- (void)dismissAnimated:(bool)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithAnnotationView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isVisibile;
- (void)motionEffectDidUpdate:(id)arg1;
- (void)showAnimated:(bool)arg1 completionBlock:(id /* block */)arg2;

@end
