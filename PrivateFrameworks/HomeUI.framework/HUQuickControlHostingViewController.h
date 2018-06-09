/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlHostingViewController : UIViewController <HUQuickControlInteractiveViewController> {
    UIViewController * _contraption;
    HUQuickControlViewProfile * _profile;
}

@property (nonatomic, readonly) UIViewController *contraption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUQuickControlViewProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView<HUQuickControlInteractiveView> *view;

- (void).cxx_destruct;
- (id)contraption;
- (id)initWithViewController:(id)arg1 profile:(id)arg2;
- (void)loadView;
- (id)profile;
- (void)viewDidLoad;

@end
