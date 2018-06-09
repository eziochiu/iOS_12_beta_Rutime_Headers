/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

@interface IMAssistantMessageSearchChatParticipant : NSObject {
    NSArray * _contactIdentifiers;
    NSString * _handle;
    bool  _isMe;
}

@property (nonatomic, readonly, copy) NSArray *contactIdentifiers;
@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, readonly) bool isMe;

- (void).cxx_destruct;
- (id)contactIdentifiers;
- (id)handle;
- (id)initWithHandle:(id)arg1 contactIdentifiers:(id)arg2 isMe:(bool)arg3;
- (bool)isMe;
- (bool)matchesPerson:(id)arg1;

@end
