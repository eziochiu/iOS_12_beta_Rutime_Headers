/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationListLargeTextCell : CKConversationListCell {
    NSArray * _contentSizeCategoryDependentConstraints;
    NSLayoutConstraint * _editingDependentConstraint;
    UILayoutGuide * _firstLineLayoutGuide;
    NSTextAttachment * _liveConversationIndicatorAttachment;
    NSTextAttachment * _unreadIndicatorAttachment;
}

@property (nonatomic, retain) NSArray *contentSizeCategoryDependentConstraints;
@property (nonatomic, retain) NSLayoutConstraint *editingDependentConstraint;
@property (nonatomic, retain) UILayoutGuide *firstLineLayoutGuide;
@property (nonatomic, retain) NSTextAttachment *liveConversationIndicatorAttachment;
@property (nonatomic, retain) NSTextAttachment *unreadIndicatorAttachment;

+ (id)hyphenationParagraphStyle;
+ (id)identifierForConversation:(id)arg1;

- (void).cxx_destruct;
- (id)_constraintForEditing:(bool)arg1;
- (id)_contentSizeCategoryDependentConstraints;
- (id)contentSizeCategoryDependentConstraints;
- (void)contentSizeCategoryDidChange;
- (id)editingDependentConstraint;
- (id)firstLineLayoutGuide;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)liveConversationIndicatorAttachment;
- (void)setContentSizeCategoryDependentConstraints:(id)arg1;
- (void)setEditingDependentConstraint:(id)arg1;
- (void)setFirstLineLayoutGuide:(id)arg1;
- (void)setLiveConversationIndicatorAttachment:(id)arg1;
- (void)setUnreadIndicatorAttachment:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)unreadIndicatorAttachment;
- (void)updateForEditing:(bool)arg1;
- (void)updateFromLabelWithText:(id)arg1;
- (void)updateLiveConversationIndicatorWithImage:(id)arg1;
- (void)updateUnreadIndicatorWithImage:(id)arg1;

@end
