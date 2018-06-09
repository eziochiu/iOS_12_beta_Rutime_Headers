/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCheckmarkCell : UITableViewCell <HUDisableableCellProtocol> {
    bool  _checked;
    bool  _disabled;
    HUTitleDescriptionContentView * _titleDescriptionView;
}

@property (nonatomic) bool checked;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <HFStringGenerator> *descriptionText;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUTitleDescriptionContentView *titleDescriptionView;
@property (nonatomic, retain) <HFStringGenerator> *titleText;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (bool)checked;
- (id)descriptionText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (void)prepareForReuse;
- (void)setChecked:(bool)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setTitleDescriptionView:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleDescriptionView;
- (id)titleText;

@end
