/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKMailboxSelection : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _aggregatedMailboxes;
    unsigned long long  _aggregatedMailboxesFilterTypes;
    NSSet * _aggregatedMailboxesId;
    NSArray * _allMailboxesSyncEnabled;
    NSMutableDictionary * _allMailboxesSyncEnabledById;
    NSArray * _mailboxesWithAllMessagesSyncEnabled;
    NSSet * _mailboxesWithAllMessagesSyncEnabledIds;
}

@property (nonatomic, retain) NSArray *aggregatedMailboxes;
@property (nonatomic) unsigned long long aggregatedMailboxesFilterTypes;
@property (nonatomic, retain) NSSet *aggregatedMailboxesId;
@property (nonatomic, retain) NSArray *allMailboxesSyncEnabled;
@property (nonatomic, retain) NSMutableDictionary *allMailboxesSyncEnabledById;
@property (nonatomic, retain) NSArray *mailboxesWithAllMessagesSyncEnabled;
@property (nonatomic, retain) NSSet *mailboxesWithAllMessagesSyncEnabledIds;

+ (unsigned long long)firstFilterTypeFromTypes:(unsigned long long)arg1;
+ (id)mailboxChangesApplyingSelection:(id)arg1 previousSelection:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setupWithAccounts:(id)arg1;
- (void)_setupWithMailboxes:(id)arg1;
- (id)aggregatedMailboxes;
- (unsigned long long)aggregatedMailboxesFilterTypes;
- (id)aggregatedMailboxesId;
- (id)allMailboxesSyncEnabled;
- (id)allMailboxesSyncEnabledById;
- (bool)containsMailboxFilter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAggregateMailboxesForAllMessagesOnly;
- (bool)hasSelection;
- (bool)hasSingleMailboxSelectionOnly;
- (id)initWithAccounts:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMailboxFilterEnabled:(unsigned long long)arg1;
- (id)mailboxWithId:(id)arg1;
- (id)mailboxesWithAllMessagesSyncEnabled;
- (id)mailboxesWithAllMessagesSyncEnabledIds;
- (void)setAggregatedMailboxes:(id)arg1;
- (void)setAggregatedMailboxesFilterTypes:(unsigned long long)arg1;
- (void)setAggregatedMailboxesId:(id)arg1;
- (void)setAllMailboxesSyncEnabled:(id)arg1;
- (void)setAllMailboxesSyncEnabledById:(id)arg1;
- (void)setMailboxesWithAllMessagesSyncEnabled:(id)arg1;
- (void)setMailboxesWithAllMessagesSyncEnabledIds:(id)arg1;

@end
