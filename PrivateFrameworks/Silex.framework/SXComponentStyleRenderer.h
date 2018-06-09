/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentStyleRenderer : NSObject <SXComponentStyleRenderer, SXViewportChangeListener> {
    UIView * _borderContainerView;
    SXComponentStyle * _componentStyle;
    SXComponentView * _componentView;
    bool  _didRegisterForDynamicBounds;
    SXDocumentController * _documentController;
    UIView * _fillClippingView;
    <SXGradientFactory> * _gradientFactory;
    SXGradientFillView * _gradientFillView;
    SXImageFillView * _imageFillView;
    <SXImageViewFactory> * _imageViewFactory;
    SXVideoFillView * _videoFillView;
}

@property (nonatomic, retain) UIView *borderContainerView;
@property (nonatomic, readonly) SXComponentStyle *componentStyle;
@property (nonatomic, readonly) SXComponentView *componentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRegisterForDynamicBounds;
@property (nonatomic, readonly) SXDocumentController *documentController;
@property (nonatomic, retain) UIView *fillClippingView;
@property (nonatomic, readonly) <SXGradientFactory> *gradientFactory;
@property (nonatomic, retain) SXGradientFillView *gradientFillView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXImageFillView *imageFillView;
@property (nonatomic, readonly) <SXImageViewFactory> *imageViewFactory;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXVideoFillView *videoFillView;

- (void).cxx_destruct;
- (void)applyComponentStyle;
- (void)applyFill:(id)arg1;
- (id)borderContainerView;
- (id)componentStyle;
- (id)componentView;
- (void)componentVisiblityStateDidChange:(long long)arg1;
- (bool)didRegisterForDynamicBounds;
- (id)documentController;
- (void)drawBorder:(id)arg1;
- (id)fillClippingView;
- (id)gradientFactory;
- (id)gradientFillView;
- (id)gradientViewForFill:(id)arg1;
- (id)imageFillView;
- (id)imageViewFactory;
- (id)imageViewForFill:(id)arg1;
- (id)initWithComponentStyle:(id)arg1 documentController:(id)arg2 imageViewFactory:(id)arg3 gradientViewFactory:(id)arg4;
- (void)prepareForComponentView:(id)arg1;
- (void)setBorderContainerView:(id)arg1;
- (void)setDidRegisterForDynamicBounds:(bool)arg1;
- (void)setFillClippingView:(id)arg1;
- (void)setGradientFillView:(id)arg1;
- (void)setImageFillView:(id)arg1;
- (void)setVideoFillView:(id)arg1;
- (id)videoFillView;
- (id)videoPlayerViewForFill:(id)arg1;
- (id)viewForFill:(id)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
