/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBusinessInfoView : UIView {
    <CKBusinessInfoViewDelegate> * _delegate;
    NSString * _descriptionText;
    UILabel * _descriptionTextLabel;
    UIButton * _infoButton;
    long long  _layoutType;
}

@property (nonatomic) <CKBusinessInfoViewDelegate> *delegate;
@property (nonatomic, retain) NSString *descriptionText;
@property (nonatomic, retain) UILabel *descriptionTextLabel;
@property (nonatomic, retain) UIButton *infoButton;
@property (nonatomic) long long layoutType;

- (void).cxx_destruct;
- (id)delegate;
- (id)descriptionText;
- (id)descriptionTextLabel;
- (id)infoButton;
- (void)infoButtonTapped:(id)arg1;
- (id)initWithLayoutType:(long long)arg1;
- (void)layoutSubviews;
- (long long)layoutType;
- (void)setDelegate:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setDescriptionTextLabel:(id)arg1;
- (void)setInfoButton:(id)arg1;
- (void)setLayoutType:(long long)arg1;
- (void)setup;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
