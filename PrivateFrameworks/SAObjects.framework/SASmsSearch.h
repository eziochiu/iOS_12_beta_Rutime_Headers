/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASmsSearch : SADomainCommand

@property (nonatomic, copy) NSDate *end;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSNumber *outgoing;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, copy) NSArray *senders;
@property (nonatomic, retain) SASmsGroupName *smsGroup;
@property (nonatomic, copy) NSDate *start;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSNumber *unread;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)end;
- (id)groupIdentifier;
- (id)message;
- (bool)mutatingCommand;
- (id)outgoing;
- (id)recipients;
- (bool)requiresResponse;
- (id)senders;
- (void)setEnd:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setOutgoing:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSenders:(id)arg1;
- (void)setSmsGroup:(id)arg1;
- (void)setStart:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setUnread:(id)arg1;
- (id)smsGroup;
- (id)start;
- (id)subject;
- (id)unread;

@end
