/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUItemTableSectionHeaderFooterView : UITableViewHeaderFooterView {
    NSArray * _constraints;
    <HFStringGenerator> * _message;
    UITextView * _messageTextView;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic, copy) <HFStringGenerator> *message;
@property (nonatomic, retain) UITextView *messageTextView;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic) unsigned long long type;

+ (id)defaultAttributesForType:(unsigned long long)arg1;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (bool)_updateViewContent;
- (id)constraints;
- (id)detailTextLabel;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)message;
- (id)messageTextView;
- (void)prepareForReuse;
- (void)setConstraints:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageTextView:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)textLabel;
- (unsigned long long)type;
- (void)updateConstraints;

@end
