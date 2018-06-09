/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFMagnifierController : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _controlPointSize;
    double  _enlargementScale;
    struct CGColor { } * _grabberColor;
    CALayer * _hiLayer;
    CALayer * _imageContainer;
    CALayer * _imageLayer;
    CALayer * _leftBar;
    CALayer * _leftGrabber;
    CALayer * _loLayer;
    bool  _loupe;
    struct CGSize { 
        double width; 
        double height; 
    }  _magnifierSize;
    CALayer * _maskLayer;
    unsigned long long  _pageRotation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pointToMagnify;
    double  _power;
    CALayer * _rightBar;
    CALayer * _rightGrabber;
    CAShapeLayer * _selectionLayer;
    UIView * _textEffectsSubView;
    UIWindow * _textEffectsWindow;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchPoint;
    bool  _visible;
    UIPDFPageView * pageView;
}

@property (nonatomic) UIPDFPageView *pageView;

- (void)_show;
- (void)addBling;
- (void)addTextRangeHandles;
- (struct CGPoint { double x1; double x2; })convertPointToEnlargedSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointToRotatedPage:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToEnlargedSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToRotatedPage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertViewPointToEnlargedSpace:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)hide;
- (id)imageReceived:(id)arg1 data:(id)arg2;
- (id)init;
- (bool)isSelectionUniformlyRotated:(double*)arg1;
- (void)move;
- (id)pageView;
- (void)placeImage;
- (struct CGPoint { double x1; double x2; })pointToMagnifyInPDFSpace;
- (void)setImageContainerMask;
- (void)setImageContainerPositionLoupe;
- (void)setImageContainerPositionMagnifier;
- (void)setLayerPositions;
- (void)setPageView:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1 viewPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setPower;
- (void)setSelectionPath;
- (void)setSelectionPath:(struct CGPath { }*)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (void)setTextRangeHandlePositions;
- (void)showLoupe;
- (void)showMagnifier;
- (void)tearDownLayers;
- (struct CGPoint { double x1; double x2; })viewPointInTextEffectsSpace;
- (bool)visible;

@end
