/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMeshInterpolator : CAMeshTransform {
    struct Interpolator { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Ref<CA::Render::Object> { struct Object {} *x_3_1_1; } x3; struct Ref<CA::Render::Object> { struct Object {} *x_4_1_1; } x4; struct Ref<CA::Render::Object> { struct Object {} *x_5_1_1; } x5; struct Ref<CA::Render::Object> { struct Object {} *x_6_1_1; } x6; struct ValueInterpolator { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; double x_7_1_5; double x_7_1_6; double x_7_1_7; double x_7_1_8; double x_7_1_9; bool x_7_1_10; } x7; } * _interp;
}

- (void)dealloc;
- (id)meshTransformForLayer:(id)arg1;

@end
