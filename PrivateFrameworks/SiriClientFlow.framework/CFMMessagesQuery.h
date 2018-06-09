/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFMMessagesQuery : SABaseClientBoundCommand <CFLocalAceHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *guid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)messagesQuery;
+ (id)messagesQueryWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)guid;
- (void)handleWithCompletion:(id /* block */)arg1;
- (bool)requiresResponse;
- (void)setGuid:(id)arg1;

@end
