/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVViewControllerPresentingManager : NSObject <SVViewControllerPresenting> {
    <SVModalPresentationViewControllerProviding> * _modalPresentationViewControllerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVModalPresentationViewControllerProviding> *modalPresentationViewControllerProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithModalPresentationViewControllerProvider:(id)arg1;
- (id)modalPresentationViewControllerProvider;
- (void)presentViewController:(id)arg1 animated:(bool)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

@end
