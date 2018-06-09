/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.InCallControlsTitleCell : UITableViewCell {
    void delegate;
    void isAccessiblityConstraintsEnabled;
    void messagesButton;
    void subtitleLabelFirstBaselineLayoutConstraint;
    void summaryLabel;
    void titleLabel;
    void titleLabelFirstBaselineLayoutConstraint;
    void titleLabelFirstBaselineTopLayoutConstraint;
    void titleLabelLastBaselineBottomLayoutConstraint;
    void titleLabelLastBaselineLayoutConstraint;
    void trailingTextHidingButtonLayoutConstraint;
    void trailingTextLayoutGuide;
    void trailingTextShowingButtonLayoutConstraint;
}

@property (nonatomic, readonly) UIButton *messagesButton;

- (id /* block */).cxx_destruct;
- (void)didTapMessagesButton;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)messagesButton;
- (void)traitCollectionDidChange:(id)arg1;

@end
