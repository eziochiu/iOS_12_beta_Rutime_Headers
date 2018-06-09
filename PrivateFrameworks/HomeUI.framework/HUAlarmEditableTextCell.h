/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAlarmEditableTextCell : UITableViewCell <UITextFieldDelegate> {
    UITextField * _textField;
}

@property (nonatomic) long long autocapitalizationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextField *textField;

- (void).cxx_destruct;
- (long long)autocapitalizationType;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setAutocapitalizationType:(long long)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (id)textField;
- (bool)textFieldShouldReturn:(id)arg1;

@end
