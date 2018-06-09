/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVCustomControlsViewProvider : NSObject <SVCustomControlsViewProviding> {
    AVPlayerViewControllerCustomControlsView * _controlsView;
    <SVVideoViewControllerProviding> * _viewControllerProvider;
}

@property (nonatomic, readonly) AVPlayerViewControllerCustomControlsView *controlsView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *viewControllerProvider;

- (void).cxx_destruct;
- (id)controlsView;
- (id)initWithViewControllerProvider:(id)arg1;
- (id)viewControllerProvider;

@end
