/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAMessagesInviteContext : NSObject {
    NSString * _action;
    bool  _canEditRecipients;
    NSURL * _imageURL;
    NSURL * _inviteURL;
    NSArray * _invitees;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, copy) NSString *action;
@property (nonatomic) bool canEditRecipients;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, copy) NSURL *inviteURL;
@property (nonatomic, copy) NSArray *invitees;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_parseResultsDictionary:(id)arg1;
- (id)action;
- (bool)canEditRecipients;
- (id)description;
- (id)imageURL;
- (id)initWithResults:(id)arg1;
- (id)inviteURL;
- (id)invitees;
- (void)setAction:(id)arg1;
- (void)setCanEditRecipients:(bool)arg1;
- (void)setImageURL:(id)arg1;
- (void)setInviteURL:(id)arg1;
- (void)setInvitees:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
