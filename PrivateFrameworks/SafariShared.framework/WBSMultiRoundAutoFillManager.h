/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSMultiRoundAutoFillManager : NSObject {
    NSSet * _addressBookPropertiesThatCanBeFilled;
    NSString * _addressSetLabelUsedDuringFirstAutoFillPass;
    unsigned long long  _autoFillAttemptTrigger;
    NSMutableSet * _controlUniqueIDToBeIgnoredByFollowUpAutoFill;
    WBSFormMetadata * _formMetadataFromPreviousAutoFillAttempt;
    unsigned long long  _numberOfFollowUpAutoFillAttempts;
    NSTimer * _timerForFollowUpAutoFill;
    bool  _userDidInteractWithForm;
}

@property (nonatomic, copy) NSSet *addressBookPropertiesThatCanBeFilled;
@property (nonatomic, copy) NSString *addressSetLabelUsedDuringFirstAutoFillPass;

- (void).cxx_destruct;
- (void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)arg1;
- (void)addControlUniqueIDsIgnoredByFollowUpAutoFill:(id)arg1;
- (id)addressBookPropertiesThatCanBeFilled;
- (id)addressSetLabelUsedDuringFirstAutoFillPass;
- (unsigned long long)currentAutoFillAttemptTrigger;
- (void)dealloc;
- (void)didEditFormText;
- (void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)arg1 autoFillBlock:(id /* block */)arg2;
- (id)init;
- (void)setAddressBookPropertiesThatCanBeFilled:(id)arg1;
- (void)setAddressSetLabelUsedDuringFirstAutoFillPass:(id)arg1;
- (bool)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)arg1 requestType:(unsigned long long)arg2;
- (bool)shouldControlBeIgnoredByFollowUpAutoFill:(id)arg1;

@end
