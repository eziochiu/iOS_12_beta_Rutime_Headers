/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlViewControllerGroup : NSObject {
    HUQuickControlViewController * _alternateViewController;
    HUQuickControlViewController * _primaryViewController;
}

@property (nonatomic, readonly) HUQuickControlViewController *alternateViewController;
@property (nonatomic, readonly) HUQuickControlViewController *primaryViewController;

- (void).cxx_destruct;
- (id)alternateViewController;
- (id)initWithPrimaryViewController:(id)arg1 alternateViewController:(id)arg2;
- (id)primaryViewController;

@end
