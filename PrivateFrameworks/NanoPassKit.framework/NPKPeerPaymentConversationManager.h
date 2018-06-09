/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPeerPaymentConversationManager : NSObject {
    MSConversation * _activeConversation;
    NPKPeerPaymentConversationContext * _conversationContext;
    NSString * _currentRecipientAddressLookup;
    PKPeerPaymentRecipient * _recipient;
}

@property (nonatomic, retain) MSConversation *activeConversation;
@property (nonatomic, retain) NPKPeerPaymentConversationContext *conversationContext;
@property (retain) NSString *currentRecipientAddressLookup;
@property (retain) PKPeerPaymentRecipient *recipient;
@property (nonatomic, readonly, copy) NSString *recipientDisplayName;
@property (nonatomic, readonly) bool recipientFoundInContacts;
@property (nonatomic, readonly) NSString *recipientPhoneOrEmail;
@property (nonatomic, readonly) NSString *senderPhoneOrEmail;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_ambiguousSenderAddressErrorWithUnderlyingError:(id)arg1;
- (id)_displayableErrorWithError:(id)arg1;
- (id)_lockedOrRestrictedAccountErrorWithUnderlyingError:(id)arg1;
- (id)_negativeBalanceErrorWithUnderlyingError:(id)arg1;
- (id)_peerPaymentController;
- (void)_postNotificationWithRecipient:(id)arg1 error:(id)arg2;
- (id)_sharedPeerPaymentWebService;
- (id)_skeletonPeerPaymentQuoteWithPeerPaymentController:(id)arg1 selectedAmount:(id)arg2 recipient:(id)arg3;
- (id)_unknownPaymentErrorWithUnderlyingError:(id)arg1;
- (id)activeConversation;
- (id)conversationContext;
- (id)currentRecipientAddressLookup;
- (id)init;
- (void)lookupRecipientInformationIfNecessary;
- (void)lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2;
- (void)performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(id /* block */)arg3;
- (id)recipient;
- (id)recipientDisplayName;
- (bool)recipientFoundInContacts;
- (id)recipientPhoneOrEmail;
- (id)senderPhoneOrEmail;
- (void)setActiveConversation:(id)arg1;
- (void)setConversationContext:(id)arg1;
- (void)setCurrentRecipientAddressLookup:(id)arg1;
- (void)setRecipient:(id)arg1;

@end
