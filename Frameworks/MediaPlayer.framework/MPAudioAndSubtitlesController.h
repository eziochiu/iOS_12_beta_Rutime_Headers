/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAudioAndSubtitlesController : UIViewController {
    UINavigationController * _navController;
    _MPAudioAndSubtitlesController * _viewController;
    UIViewController * _viewControllerForOrientation;
}

@property (nonatomic) UIViewController *viewControllerForOrientation;

- (void).cxx_destruct;
- (id)initWithAVItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setViewControllerForOrientation:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)viewControllerForOrientation;
- (void)viewDidLoad;

@end
