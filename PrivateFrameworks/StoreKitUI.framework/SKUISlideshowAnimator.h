/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISlideshowAnimator : NSObject <UIViewControllerAnimatorTransitioning> {
    UIImageView * _imageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
