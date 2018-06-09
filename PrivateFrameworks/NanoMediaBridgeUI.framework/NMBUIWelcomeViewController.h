/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
 */

@interface NMBUIWelcomeViewController : UIViewController {
    UIStackView * _buttonsContainerView;
    NMBUIConfigurationButton * _cancelButton;
    NMBUIConfigurationButton * _confirmButton;
    UIStackView * _contentView;
    <NMBUIOnboardingDataSource> * _dataSource;
    <NMBUIWelcomeViewControllerDelegate> * _delegate;
    UIImageView * _iconImageView;
    UIViewController * _presentingViewController;
    UILabel * _textLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) <NMBUIOnboardingDataSource> *dataSource;
@property (nonatomic) <NMBUIWelcomeViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_didPressButton:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
