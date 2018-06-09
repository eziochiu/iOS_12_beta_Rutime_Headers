/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVPopoverView : UIView <UIGestureRecognizerDelegate> {
    bool  _imageLoaded;
    TVImageProxy * _imageProxy;
    _TVPopoverDescriptor * _popoverDescriptor;
    _TVButton * _tvPopoverButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isImageLoaded, nonatomic) bool imageLoaded;
@property (nonatomic, retain) TVImageProxy *imageProxy;
@property (nonatomic, retain) _TVPopoverDescriptor *popoverDescriptor;
@property (readonly) Class superclass;
@property (nonatomic, retain) _TVButton *tvPopoverButton;

- (void).cxx_destruct;
- (void)_popoverButtonPressed:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)imageProxy;
- (bool)isImageLoaded;
- (void)layoutSubviews;
- (id)popoverDescriptor;
- (void)setImageLoaded:(bool)arg1;
- (void)setImageProxy:(id)arg1;
- (void)setPopoverDescriptor:(id)arg1;
- (void)setTvPopoverButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tvPopoverButton;

@end
