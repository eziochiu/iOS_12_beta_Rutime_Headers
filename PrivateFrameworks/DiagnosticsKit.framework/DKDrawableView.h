/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKDrawableView : UIView {
    bool  _isDrawing;
    UIColor * _rectangleEdgeColor;
    UIColor * _rectangleFillColor;
    UIView * _shapeView;
}

@property (nonatomic) bool isDrawing;
@property (nonatomic, retain) UIColor *rectangleEdgeColor;
@property (nonatomic, retain) UIColor *rectangleFillColor;
@property (nonatomic, retain) UIView *shapeView;

- (void).cxx_destruct;
- (void)endDrawing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 rectangleFillColor:(id)arg2 rectangleEdgeColor:(id)arg3;
- (bool)isDrawing;
- (id)rectangleEdgeColor;
- (id)rectangleFillColor;
- (void)setIsDrawing:(bool)arg1;
- (void)setRectangleEdgeColor:(id)arg1;
- (void)setRectangleFillColor:(id)arg1;
- (void)setShapeView:(id)arg1;
- (id)shapeView;
- (void)updateDrawing:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
