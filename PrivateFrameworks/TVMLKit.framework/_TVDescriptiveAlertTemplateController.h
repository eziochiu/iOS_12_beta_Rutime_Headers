/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVDescriptiveAlertTemplateController : _TVBgImageLoadingViewController {
    UIColor * _backgroundColor;
    IKImageElement * _bgHeroImageElement;
    IKImageElement * _bgImageElement;
    UIView * _preferredFocusView;
    IKViewElement * _templateElement;
    NSArray * _templateSubcontrollers;
    NSArray * _templateSubviews;
}

- (void).cxx_destruct;
- (id)_backgroundImageProxy;
- (struct CGSize { double x1; double x2; })_backgroundImageProxySize;
- (bool)_backgroundImageRequiresBlur;
- (long long)_blurEffectStyle;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (void)_normalizeButtonsInViews:(id)arg1;
- (void)loadView;
- (void)updateWithViewElement:(id)arg1;

@end
