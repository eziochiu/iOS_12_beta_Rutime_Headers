/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

@interface IMAssistantChatParticipant : NSObject {
    CNContact * _contact;
    IMHandle * _imHandle;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) IMHandle *imHandle;

- (void).cxx_destruct;
- (id)contact;
- (id)description;
- (id)imHandle;
- (id)initWithIMHandle:(id)arg1 contact:(id)arg2;
- (void)setContact:(id)arg1;
- (void)setImHandle:(id)arg1;

@end
