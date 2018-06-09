/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXFullscreenCanvasViewController : UIViewController {
    SVKeyValueObserver * _navigationBarObserver;
    bool  _visible;
}

@property (nonatomic, retain) SVKeyValueObserver *navigationBarObserver;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (id)navigationBarObserver;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (void)setNavigationBarObserver:(id)arg1;
- (void)setVisible:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)visible;

@end
