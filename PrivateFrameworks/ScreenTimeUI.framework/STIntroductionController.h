/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STIntroductionController : NSObject {
    bool  _allowParentalControls;
    id /* block */  _completionBlock;
    bool  _forceParentalControls;
    STIntroductionModel * _introductionModel;
}

@property bool allowParentalControls;
@property (copy) id /* block */ completionBlock;
@property bool forceParentalControls;
@property (retain) STIntroductionModel *introductionModel;

- (void).cxx_destruct;
- (bool)allowParentalControls;
- (id /* block */)completionBlock;
- (bool)forceParentalControls;
- (id)init;
- (id)introductionModel;
- (void)presentOverViewController:(id)arg1;
- (void)setAllowParentalControls:(bool)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setForceParentalControls:(bool)arg1;
- (void)setIntroductionModel:(id)arg1;
- (void)viewControllerCompleted:(id)arg1 model:(id)arg2;
- (id)viewControllerFollowingViewController:(id)arg1;

@end
