/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBHandwritingStrokeView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _aggregateInvalidRect;
    struct CGContext { } * _bitmapContext;
    UIKBHandwritingView * _keyView;
    double  _scaleFactor;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } aggregateInvalidRect;
@property (nonatomic, readonly) struct CGContext { }*bitmapContext;
@property (nonatomic) UIKBHandwritingView *keyView;
@property (nonatomic, readonly) double scaleFactor;

- (void).cxx_destruct;
- (bool)_wantsDeepDrawing;
- (void)addHandwritingPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;
- (void)addTrapezoidFromFirstPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1 secondPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })aggregateInvalidRect;
- (struct CGContext { }*)bitmapContext;
- (void)clearRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToBitmapCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToViewCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)createBitmapIfNeeded;
- (void)dealloc;
- (void)displayAggregateInvalidRect;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })handwritingPointToRect:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;
- (id)keyView;
- (void)redrawStrokesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)scaleFactor;
- (void)setKeyView:(id)arg1;
- (void)updateInkColor;

@end
