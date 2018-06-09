/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISearchControllerLimitedUIShieldViewController : UIViewController {
    id /* block */  _dismissAction;
    _UISearchControllerLimitedAccessView * _limitedAccessView;
}

@property (nonatomic, copy) id /* block */ dismissAction;
@property (nonatomic, retain) _UISearchControllerLimitedAccessView *limitedAccessView;

- (void).cxx_destruct;
- (void)_backButtonPressed:(id)arg1;
- (void)dealloc;
- (id /* block */)dismissAction;
- (id)limitedAccessView;
- (void)setDismissAction:(id /* block */)arg1;
- (void)setLimitedAccessView:(id)arg1;
- (void)viewDidLoad;

@end
