/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebTextRangeView : UIView {
    UIWebDragDotView * _endDot;
    bool  _magnifying;
    NSMutableArray * _rectViews;
    NSArray * _rects;
    UIWebDragDotView * _startDot;
    UIView<UITextInput> * m_container;
}

@property (nonatomic, readonly) UIView<UITextInput> *container;
@property (nonatomic, copy) NSArray *rects;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (id)container;
- (void)dealloc;
- (void)doneMagnifying;
- (struct CGPoint { double x1; double x2; })endCorner;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endEdge;
- (bool)endIsHorizontal;
- (void)geometryChanged;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)prepareForMagnification;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectAtIndex:(int)arg1;
- (id)rectViewAtIndex:(int)arg1;
- (id)rects;
- (void)removeFromSuperview;
- (void)setRects:(id)arg1;
- (struct CGPoint { double x1; double x2; })startCorner;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startEdge;
- (bool)startIsHorizontal;
- (void)updateDragDots;
- (void)updateRectViews;

@end
