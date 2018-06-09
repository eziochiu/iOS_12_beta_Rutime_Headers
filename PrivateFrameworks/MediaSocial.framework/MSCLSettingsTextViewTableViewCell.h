/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLSettingsTextViewTableViewCell : UITableViewCell {
    <MSCLTokenTextViewDelegate> * _changeDelegate;
    MSCLTokenTextView * _textView;
}

@property (nonatomic) <MSCLTokenTextViewDelegate> *changeDelegate;
@property (nonatomic, readonly) MSCLTokenTextView *textView;

- (void).cxx_destruct;
- (id)changeDelegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setChangeDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textView;

@end
