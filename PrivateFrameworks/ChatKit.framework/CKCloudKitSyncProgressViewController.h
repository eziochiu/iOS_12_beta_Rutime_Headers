/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKCloudKitSyncProgressViewController : UIViewController {
    UIButton * _actionButton;
    <CKCloudKitSyncProgressViewControllerDelegate> * _delegate;
    bool  _hidden;
    IMCloudKitSyncProgress * _lastProgress;
    UIColor * _originalProgressTintColor;
    UIProgressView * _progressBar;
    UILabel * _progressLabel;
    UILabel * _userMessageLabel;
}

@property (nonatomic, readonly) UIButton *actionButton;
@property (nonatomic) bool actionButtonEnabled;
@property (nonatomic) <CKCloudKitSyncProgressViewControllerDelegate> *delegate;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) IMCloudKitSyncProgress *lastProgress;
@property (nonatomic, copy) UIColor *originalProgressTintColor;
@property (nonatomic, readonly) UIProgressView *progressBar;
@property (nonatomic, readonly) UILabel *progressLabel;
@property (nonatomic, readonly) UILabel *userMessageLabel;

- (void).cxx_destruct;
- (void)_actionButtonWasPressed:(id)arg1;
- (void)_addActionButton;
- (void)_addProgressLabel;
- (void)_addProgressView;
- (void)_addUserMessageLabel;
- (id)_createLabel;
- (id)actionButton;
- (bool)actionButtonEnabled;
- (void)addToToolbar:(id)arg1;
- (id)delegate;
- (id)init;
- (bool)isHidden;
- (id)lastProgress;
- (void)loadView;
- (id)originalProgressTintColor;
- (id)progressBar;
- (id)progressLabel;
- (void)setActionButtonEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLastProgress:(id)arg1;
- (void)setOriginalProgressTintColor:(id)arg1;
- (void)showProgressBarWithIndeterminateProgress:(bool)arg1 percentComplete:(double)arg2;
- (void)showUserMessageWithString:(id)arg1 showActionButton:(bool)arg2 withActionButtonLabel:(id)arg3;
- (void)updateWithCloudKitProgress:(id)arg1;
- (id)userMessageLabel;
- (void)viewDidLayoutSubviews;

@end
