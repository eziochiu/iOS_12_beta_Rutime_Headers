/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTextViewController : UIViewController <HUPreloadableViewController> {
    UIView * _curtainView;
    NAFuture * _loadingFuture;
    HUActivityLoadingView * _loadingView;
    UIBarButtonItem * _shareButton;
    bool  _showProgressIndicatorView;
    bool  _showsShareButton;
    NSAttributedString * _textContent;
    UITextView * _textView;
    NSString * _titleText;
}

@property (nonatomic, readonly) UIView *curtainView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NAFuture *loadingFuture;
@property (nonatomic, readonly) HUActivityLoadingView *loadingView;
@property (nonatomic, readonly) UIBarButtonItem *shareButton;
@property (nonatomic) bool showProgressIndicatorView;
@property (nonatomic) bool showsShareButton;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSAttributedString *textContent;
@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (void)_fulfillProgressIndicatorState:(bool)arg1;
- (void)_shareLog:(id)arg1;
- (id)_textContentWithDefaultAttributes;
- (id)curtainView;
- (id)hu_preloadContent;
- (void)loadTextFromFuture:(id)arg1 textTitle:(id)arg2;
- (id)loadingFuture;
- (id)loadingView;
- (void)setLoadingFuture:(id)arg1;
- (void)setShowProgressIndicatorView:(bool)arg1;
- (void)setShowProgressIndicatorView:(bool)arg1 animated:(bool)arg2;
- (void)setShowsShareButton:(bool)arg1;
- (void)setTextContent:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)shareButton;
- (bool)showProgressIndicatorView;
- (bool)showsShareButton;
- (id)textContent;
- (id)textView;
- (id)titleText;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
