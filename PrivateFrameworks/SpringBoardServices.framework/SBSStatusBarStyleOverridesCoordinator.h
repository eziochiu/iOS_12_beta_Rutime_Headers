/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSStatusBarStyleOverridesCoordinator : NSObject {
    <SBSStatusBarStyleOverridesCoordinatorDelegate> * _delegate;
    int  _styleOverrides;
}

@property (nonatomic) <SBSStatusBarStyleOverridesCoordinatorDelegate> *delegate;
@property (nonatomic, readonly) int styleOverrides;

- (void).cxx_destruct;
- (void)_handleStatusBarTapWithContext:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_registrationInvalidated:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setRegisteredStyleOverrides:(int)arg1 reply:(id /* block */)arg2;
- (int)styleOverrides;

@end
