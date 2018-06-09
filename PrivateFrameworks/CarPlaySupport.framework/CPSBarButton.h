/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSBarButton : CPSButton {
    CPBarButton * _cyBarButton;
}

@property (nonatomic, retain) CPBarButton *cyBarButton;

+ (id)buttonWithCPBarButton:(id)arg1;

- (void).cxx_destruct;
- (id)_externalUnfocusedBorderColor;
- (id)cyBarButton;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setCyBarButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
