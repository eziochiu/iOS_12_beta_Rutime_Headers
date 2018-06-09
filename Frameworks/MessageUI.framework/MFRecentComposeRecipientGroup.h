/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFRecentComposeRecipientGroup : MFComposeRecipientGroup {
    CRRecentContact * _recentContact;
}

@property (nonatomic, readonly, retain) CRRecentContact *recentContact;

- (void)dealloc;
- (id)initWithChildren:(id)arg1 displayString:(id)arg2 recentContact:(id)arg3;
- (id)label;
- (id)placeholderName;
- (id)recentContact;
- (id)unlocalizedLabel;

@end
