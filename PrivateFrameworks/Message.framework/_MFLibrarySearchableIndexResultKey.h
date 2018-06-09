/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFLibrarySearchableIndexResultKey : NSObject {
    MFMessageCriterion * _criterion;
    NSIndexSet * _mailboxIDs;
}

@property (nonatomic, retain) MFMessageCriterion *criterion;
@property (nonatomic, copy) NSIndexSet *mailboxIDs;

- (id)criterion;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxIDs;
- (void)setCriterion:(id)arg1;
- (void)setMailboxIDs:(id)arg1;

@end
