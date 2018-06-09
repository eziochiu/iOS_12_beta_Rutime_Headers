/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKGraphSeriesSecondaryRenderContext : NSObject {
    NSMutableArray * _aboveScreenRegions;
    NSMutableArray * _belowScreenRegions;
}

- (void).cxx_destruct;
- (void)addOffScreenRegionAtLocation:(double)arg1 color:(id)arg2 aboveScreen:(bool)arg3;
- (void)addOffScreenRegionWithStartLocation:(double)arg1 endLocation:(double)arg2 color:(id)arg3 aboveScreen:(bool)arg4;
- (void)drawInAxisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundColor:(id)arg2 renderContext:(struct CGContext { }*)arg3;
- (id)init;

@end
