/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptGroupHeaderViewController : CKTranscriptHeaderViewController

@property (nonatomic, readonly) UIButton *headerButton;

- (id)_groupHeaderComposeRecipients;
- (void)_handleConversationRecipientsChanged:(id)arg1;
- (void)dealloc;
- (id)headerButton;
- (void)loadView;
- (bool)shouldInvalidateOnAddressBookChange;

@end
