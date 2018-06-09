/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextView : UIView <STTextCanvasRenderSource, STTextTangierRepAccessibilityDataSource, TSDRepDirectLayerHosting> {
    TSDCanvas * _canvas;
    <SXTextViewDelegate> * _delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameInCanvas;
    bool  _isSelectable;
    TSDLayoutController * _layoutController;
    bool  _mightBeVisuallyMisplaced;
    CALayer * _overlayContainerLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _parentFrame;
    STTextTangierFlowRep<STTextTangierRepAccessibilityElement> * _rep;
    CALayer * _repContainerLayer;
    bool  _shouldHyphenate;
    STTextTangierContainerInfo * _textInfo;
    SXTextLayouter * _textLayouter;
    SXTextSource * _textSource;
}

@property (nonatomic) TSDCanvas *canvas;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInCanvas;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSelectable;
@property (nonatomic, readonly) TSDLayoutController *layoutController;
@property (nonatomic) bool mightBeVisuallyMisplaced;
@property (nonatomic, retain) CALayer *overlayContainerLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } parentFrame;
@property (nonatomic) STTextTangierFlowRep<STTextTangierRepAccessibilityElement> *rep;
@property (nonatomic, retain) CALayer *repContainerLayer;
@property (nonatomic) bool shouldHyphenate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) STTextTangierContainerInfo *textInfo;
@property (nonatomic, retain) SXTextLayouter *textLayouter;
@property (nonatomic, readonly) SXTextSource *textSource;

- (void).cxx_destruct;
- (void)_updateOverlayTransform;
- (id)accessibilityCustomRotorMembershipForRep:(id)arg1;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (bool)accessibilityRepIsSelectable:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)canvas;
- (id)delegate;
- (id)description;
- (void)directLayerHostRemoveIfMatchingContainerLayer:(id)arg1 forRep:(id)arg2;
- (void)directLayerHostUpdateOverlayLayers:(id)arg1 forRep:(id)arg2;
- (void)directLayerHostUpdateWithContainerLayer:(id)arg1 forRep:(id)arg2;
- (void)directLayerhostUpdateTopLevelTilingLayers:(id)arg1 forRep:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInCanvas;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)infoGeometry;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidate;
- (bool)isAccessibilityElement;
- (bool)isSelectable;
- (id)layoutController;
- (bool)mightBeVisuallyMisplaced;
- (id)overlayContainerLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })parentFrame;
- (void)provideInfosLayoutTo:(id)arg1;
- (id)rep;
- (id)repContainerLayer;
- (void)setCanvas:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameInCanvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsSelectable:(bool)arg1;
- (void)setMightBeVisuallyMisplaced:(bool)arg1;
- (void)setNeedsLayout;
- (void)setOverlayContainerLayer:(id)arg1;
- (void)setParentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRep:(id)arg1;
- (void)setRepContainerLayer:(id)arg1;
- (void)setShouldHyphenate:(bool)arg1;
- (void)setTextLayouter:(id)arg1;
- (bool)shouldHyphenate;
- (id)textInfo;
- (id)textLayouter;
- (id)textSource;

@end
