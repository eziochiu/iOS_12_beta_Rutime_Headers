/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingSheet : UIView <MPAVRoutingViewControllerDelegate> {
    UIView * _backgroundView;
    UIButton * _cancelButton;
    id /* block */  _completionHandler;
    UIView * _controlsView;
    UIButton * _dismissBackgroundButton;
    UIButton * _dismissControlsViewButton;
    bool  _mirroringOnly;
    UIWindow * _presentationWindow;
    MPAVRoutingViewController * _routingViewController;
}

@property (setter=setAVItemType:, nonatomic) long long avItemType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool mirroringOnly;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateControls:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_cancelButtonAction:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cancelButtonFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_controlsViewFrame;
- (struct CGSize { double x1; double x2; })_maxRoutingViewSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_routingViewFrame;
- (void)_updateDismissButtonText;
- (void)_updateRoutingSheetFrame;
- (long long)avItemType;
- (void)dealloc;
- (void)dismiss;
- (id)initWithAVItemType:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)mirroringOnly;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)routingViewControllerDidShowAirPlayDebugScreen:(id)arg1;
- (void)routingViewControllerDidUpdateContents:(id)arg1;
- (void)setAVItemType:(long long)arg1;
- (void)setMirroringOnly:(bool)arg1;
- (void)showInView:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)tintColorDidChange;

@end
