/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationListCell : UITableViewCell <CKConversationListCell> {
    UIImageView * _chevronImageView;
    CKConversation * _conversation;
    UIDateLabel * _dateLabel;
    NSObject<CKConversationListCellDelegate> * _delegate;
    CKLabel * _fromLabel;
    bool  _hasLiveRemoteConversationParticipants;
    bool  _isPlaceholder;
    NSDate * _searchMessageDate;
    NSString * _searchMessageGUID;
    NSString * _searchSummaryText;
    UILabel * _summaryLabel;
    bool  _verified;
}

@property (nonatomic, readonly) CKAvatarView *avatarView;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CKConversationListCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasLiveRemoteConversationParticipants;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *searchMessageDate;
@property (nonatomic, copy) NSString *searchMessageGUID;
@property (nonatomic, copy) NSString *searchSummaryText;
@property (readonly) Class superclass;
@property (nonatomic) bool verified;

+ (double)cellHeight;
+ (id)identifierForConversation:(id)arg1;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_makeSummaryAttributedStringWithText:(id)arg1;
- (id)avatarView;
- (void)contentSizeCategoryDidChange;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (bool)hasLiveRemoteConversationParticipants;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (id)searchMessageDate;
- (id)searchMessageGUID;
- (id)searchSummaryText;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHasLiveRemoteConversationParticipants:(bool)arg1;
- (void)setSearchMessageDate:(id)arg1;
- (void)setSearchMessageGUID:(id)arg1;
- (void)setSearchSummaryText:(id)arg1;
- (void)setVerified:(bool)arg1;
- (bool)showingEditControl;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateForEditing:(bool)arg1;
- (void)updateFromLabelWithText:(id)arg1;
- (void)updateLiveConversationIndicatorWithImage:(id)arg1;
- (void)updateUnreadIndicatorWithImage:(id)arg1;
- (void)updateWithSearchResult:(id)arg1;
- (bool)verified;

@end
