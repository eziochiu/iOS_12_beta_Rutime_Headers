/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFMMessagesQueryResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *messages;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)messagesQueryResponse;
+ (id)messagesQueryResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)messages;
- (bool)requiresResponse;
- (void)setMessages:(id)arg1;

@end
