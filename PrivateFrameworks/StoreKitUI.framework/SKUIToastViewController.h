/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIToastViewController : UIViewController {
    id /* block */  _completion;
    NSString * _descriptionText;
    UIImageView * _imageView;
    SKUIToastPresentationWindow * _presentationWindow;
    UILabel * _primaryLabel;
    UILabel * _secondaryLabel;
    NSString * _titleText;
    UIVisualEffectView * _toastView;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) SKUIToastPresentationWindow *presentationWindow;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, retain) UIVisualEffectView *toastView;

+ (id)_fontWithSize:(double)arg1 textStyleAttribute:(struct __CFString { }*)arg2;
+ (id)_primaryLabelFont;
+ (id)_secondaryLabelFont;

- (void).cxx_destruct;
- (void)_dismissWithDelay:(double)arg1;
- (id /* block */)completion;
- (id)descriptionText;
- (id)imageView;
- (id)initWithDialogTemplate:(id)arg1;
- (id)initWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3;
- (void)present;
- (void)presentFromViewController:(id)arg1 completion:(id /* block */)arg2;
- (id)presentationWindow;
- (id)primaryLabel;
- (id)secondaryLabel;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setPresentationWindow:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setToastView:(id)arg1;
- (id)titleText;
- (id)toastView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
