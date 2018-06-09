/* made by EzioChiu.
 */

@protocol HUQuickControlContentHosting <NSObject>

@required

- (void)hideAuxiliaryViewForQuickControlContent:(id <HUQuickControlInteractiveContentContaining>)arg1;
- (void)quickControlContent:(id <HUQuickControlInteractiveContentContaining>)arg1 requestDismissalOfType:(unsigned long long)arg2;
- (void)quickControlContent:(id <HUQuickControlInteractiveContentContaining>)arg1 showAuxiliaryView:(UIView<HUQuickControlAuxiliaryView> *)arg2;

@end
