/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroProgressViewController : UIViewController <UIGestureRecognizerDelegate> {
    UIButton * _cancelButton;
    NSLayoutConstraint * _horizontalCenteredLabel;
    NSLayoutConstraint * _horizontalOffsetLabel;
    UILabel * _label;
    RoundProgressView * _landscapeProgressView;
    UIView * _placeholderView;
    UIView * _posterBackgroundView;
    RoundProgressView * _progressView;
    bool  _showCancelButton;
    NSLayoutConstraint * _verticalCenteredLabel;
    NSLayoutConstraint * _verticalProgressLabelSpace;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *horizontalCenteredLabel;
@property (nonatomic, retain) NSLayoutConstraint *horizontalOffsetLabel;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) NSString *labelText;
@property (nonatomic, retain) RoundProgressView *landscapeProgressView;
@property (nonatomic, retain) UIView *placeholderView;
@property (nonatomic, retain) UIView *posterBackgroundView;
@property (nonatomic) float progress;
@property (nonatomic, retain) RoundProgressView *progressView;
@property (nonatomic) bool showCancelButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *verticalCenteredLabel;
@property (nonatomic, retain) NSLayoutConstraint *verticalProgressLabelSpace;

- (void).cxx_destruct;
- (id)cancelButton;
- (void)didReceiveMemoryWarning;
- (id)horizontalCenteredLabel;
- (id)horizontalOffsetLabel;
- (id)label;
- (id)labelText;
- (id)landscapeProgressView;
- (void)loadView;
- (id)placeholderView;
- (id)posterBackgroundView;
- (bool)prefersStatusBarHidden;
- (float)progress;
- (id)progressView;
- (void)setCancelButton:(id)arg1;
- (void)setCancelTarget:(id)arg1 action:(SEL)arg2;
- (void)setHorizontalCenteredLabel:(id)arg1;
- (void)setHorizontalOffsetLabel:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setLandscapeProgressView:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)setPosterBackgroundView:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressView:(id)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (void)setVerticalCenteredLabel:(id)arg1;
- (void)setVerticalProgressLabelSpace:(id)arg1;
- (bool)showCancelButton;
- (void)updateLayoutWithTraitCollection:(id)arg1;
- (id)verticalCenteredLabel;
- (id)verticalProgressLabelSpace;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
