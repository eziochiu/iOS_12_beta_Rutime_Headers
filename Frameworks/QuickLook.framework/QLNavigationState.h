/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLNavigationState : NSObject {
    bool  _navigationBarHidden;
    UINavigationController * _navigationController;
    bool  _toolBarHidden;
    bool  _translucentNavigationBar;
    bool  _translucentToolbar;
}

@property bool navigationBarHidden;
@property (retain) UINavigationController *navigationController;
@property bool toolBarHidden;
@property bool translucentNavigationBar;
@property bool translucentToolbar;

- (void).cxx_destruct;
- (bool)navigationBarHidden;
- (id)navigationController;
- (void)setNavigationBarHidden:(bool)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setToolBarHidden:(bool)arg1;
- (void)setTranslucentNavigationBar:(bool)arg1;
- (void)setTranslucentToolbar:(bool)arg1;
- (bool)toolBarHidden;
- (bool)translucentNavigationBar;
- (bool)translucentToolbar;

@end
