/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNavigationButtonView : UIView {
    id /* block */  _buttonTappedCallback;
    CNContactInlineActionsViewController * _contactVC;
    UIImage * _defaultImage;
    CKEntity * _entity;
    UIImage * _image;
    UIButton * _imageButton;
    long long  _joinButtonStyle;
    NSString * _text;
    UILabel * _textLabel;
}

@property (nonatomic, copy) id /* block */ buttonTappedCallback;
@property (nonatomic, retain) CNContactInlineActionsViewController *contactVC;
@property (nonatomic, retain) UIImage *defaultImage;
@property (nonatomic, retain) CKEntity *entity;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIButton *imageButton;
@property (nonatomic) long long joinButtonStyle;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UILabel *textLabel;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (void)_setupImageButton;
- (id /* block */)buttonTappedCallback;
- (id)contactVC;
- (id)defaultImage;
- (id)entity;
- (id)image;
- (id)imageButton;
- (id)initWithImage:(id)arg1 text:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)joinButtonStyle;
- (void)layoutSubviews;
- (void)setButtonTappedCallback:(id /* block */)arg1;
- (void)setContactVC:(id)arg1;
- (void)setDefaultImage:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageButton:(id)arg1;
- (void)setJoinButtonStyle:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)text;
- (id)textLabel;

@end
