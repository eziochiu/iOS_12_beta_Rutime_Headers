/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIModularControlCenterCardViewController : CCUIModularControlCenterViewController

@property (nonatomic) <CCUIModularControlCenterCardViewControllerDelegate> *delegate;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;

- (long long)_interfaceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_statusLabelViewFrame;
- (unsigned long long)_statusTextAlignment;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithSystemAgent:(id)arg1;
- (void)loadView;
- (id)obscuringBackgroundViewForModuleCollectionViewController:(id)arg1;
- (id)relevantSnapHeightsForOrientation:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willBecomeActive;
- (void)willResignActive;

@end
