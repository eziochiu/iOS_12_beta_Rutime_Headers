/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSSetupView : UIView {
    NSString * _appsButtonTitle;
    NSString * _beginButtonTitle;
    NSString * _caption;
    <VSSetupViewDelegate> * _delegate;
    VSFontCenter * _fontCenter;
    NSString * _footer;
    NSString * _footnote;
    UIImage * _image;
    NSString * _message;
    UIView * _privacyButtonContainer;
    bool  _shouldShowAboutButton;
    bool  _shouldShowAppsButton;
    NSString * _skipButtonTitle;
    NSString * _title;
}

@property (nonatomic, copy) NSString *appsButtonTitle;
@property (nonatomic, copy) NSString *beginButtonTitle;
@property (nonatomic, retain) NSString *caption;
@property (nonatomic) <VSSetupViewDelegate> *delegate;
@property (nonatomic, retain) VSFontCenter *fontCenter;
@property (nonatomic, copy) NSString *footer;
@property (nonatomic, retain) NSString *footnote;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) UIView *privacyButtonContainer;
@property (nonatomic) bool shouldShowAboutButton;
@property (nonatomic) bool shouldShowAppsButton;
@property (nonatomic, copy) NSString *skipButtonTitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_appsButtonPressed:(id)arg1;
- (void)_beginButtonPressed:(id)arg1;
- (void)_skipButtonPressed:(id)arg1;
- (id)appsButtonTitle;
- (id)beginButtonTitle;
- (id)caption;
- (void)dealloc;
- (id)delegate;
- (id)fontCenter;
- (id)footer;
- (id)footnote;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)message;
- (id)privacyButtonContainer;
- (void)setAppsButtonTitle:(id)arg1;
- (void)setBeginButtonTitle:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFontCenter:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setShouldShowAboutButton:(bool)arg1;
- (void)setShouldShowAppsButton:(bool)arg1;
- (void)setSkipButtonTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldShowAboutButton;
- (bool)shouldShowAppsButton;
- (id)skipButtonTitle;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
