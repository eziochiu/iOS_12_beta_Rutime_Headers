/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFTextRangeWidget : NSObject <UIPDFSelectionWidget> {
    CALayer * _endBar;
    CALayer * _endHandle;
    unsigned long long  _endIndex;
    long long  _endRectangle;
    bool  _endRight;
    CALayer * _endSelectionGrabber;
    double  _endX;
    CALayer * _fixedSelectionGrabber;
    struct CGColor { } * _grabberColor;
    double  _handleHeight;
    double  _handleWidth;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialSelectionPointOnPage;
    double  _offsetX;
    double  _offsetY;
    UIPDFPageView * _pageView;
    CALayer * _startBar;
    CALayer * _startHandle;
    unsigned long long  _startIndex;
    bool  _startLeft;
    long long  _startRectangle;
    CALayer * _startSelectionGrabber;
    double  _startX;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } currentSelectionPointOnPage;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } initialSelectionPointOnPage;
@property (nonatomic) UIPDFPageView *pageView;

- (struct CGPoint { double x1; double x2; })currentSelectionPointOnPage;
- (void)dealloc;
- (id)description;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)endTracking;
- (void)hide;
- (bool)hitTest:(struct CGPoint { double x1; double x2; })arg1 fixedPoint:(struct CGPoint { double x1; double x2; }*)arg2 preceeds:(bool*)arg3;
- (id)init;
- (struct CGPoint { double x1; double x2; })initialSelectionPointOnPage;
- (void)layout;
- (void)layoutEndSelectionGrabber:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2 width:(double)arg3 extraHeight:(double)arg4 unitSize:(struct CGSize { double x1; double x2; })arg5;
- (void)layoutStartSelectionGrabber:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2 width:(double)arg3 extraHeight:(double)arg4 unitSize:(struct CGSize { double x1; double x2; })arg5;
- (void)layoutWidget;
- (id)pageView;
- (void)remove;
- (struct CGPoint { double x1; double x2; })selectedPointFor:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionRectangle;
- (void)setPageView:(id)arg1;
- (void)setSelectedGrabber:(unsigned long long)arg1;
- (void)setSelection:(id)arg1;
- (void)track:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })viewOffset;

@end
