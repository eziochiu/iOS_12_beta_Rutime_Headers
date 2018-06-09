/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface _PHUIViewControllerDefaultZoomAnimationCoordinator : PXZoomAnimationCoordinator {
    UIViewController * _viewController;
}

@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)animateContentForEndPointType:(long long)arg1 inView:(id)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4;
- (void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2;
- (id)init;
- (id)initWithViewController:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
