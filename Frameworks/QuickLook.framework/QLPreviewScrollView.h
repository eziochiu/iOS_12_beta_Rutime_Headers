/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewScrollView : UIScrollView <UIScrollViewDelegate> {
    double  _contentIsSmallerThanView;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentViewSize;
    double  _fillZoomScale;
    double  _fitZoomScale;
    bool  _inSizeChange;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastUpdatedSize;
    double  _maxZoomScale;
    double  _minZoomScale;
    bool  _needsZoomUpdate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _peripheryInsetsLandscape;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _peripheryInsetsPortrait;
    double  _pinchMaxZoomScale;
    bool  _preventZoomUpdate;
    bool  _readyToCancelPanGesture;
    bool  _shouldFit;
    <QLPreviewScrollViewZoomDelegate> * _zoomDelegate;
}

@property (readonly) double contentIsSmallerThanView;
@property (nonatomic) struct CGSize { double x1; double x2; } contentViewSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double fillZoomScale;
@property (readonly) double fitZoomScale;
@property (readonly) unsigned long long hash;
@property (readonly) double maxZoomScale;
@property (readonly) double minZoomScale;
@property (nonatomic) bool needsZoomUpdate;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsetsLandscape;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsetsPortrait;
@property (readonly) double pinchMaxZoomScale;
@property (nonatomic) bool preventZoomUpdate;
@property bool shouldFit;
@property (readonly) Class superclass;
@property <QLPreviewScrollViewZoomDelegate> *zoomDelegate;

- (void).cxx_destruct;
- (double)_maxZoomScaleForContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateScrollViewZomming;
- (double)contentIsSmallerThanView;
- (struct CGSize { double x1; double x2; })contentViewSize;
- (double)fillZoomScale;
- (double)fitZoomScale;
- (id)init;
- (void)layoutSubviews;
- (double)maxZoomScale;
- (double)minZoomScale;
- (bool)needsZoomUpdate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsetsLandscape;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsetsPortrait;
- (double)pinchMaxZoomScale;
- (bool)preventZoomUpdate;
- (void)resetZoomScale;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setContentViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNeedsZoomUpdate:(bool)arg1;
- (void)setPeripheryInsetsLandscape:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPeripheryInsetsPortrait:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreventZoomUpdate:(bool)arg1;
- (void)setShouldFit:(bool)arg1;
- (void)setZoomDelegate:(id)arg1;
- (bool)shouldFit;
- (void)updateZoomScales;
- (void)updateZoomScalesWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)zoomDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zoomRectForScale:(double)arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2;

@end
