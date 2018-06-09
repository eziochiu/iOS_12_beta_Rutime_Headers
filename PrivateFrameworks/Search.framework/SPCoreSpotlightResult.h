/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPCoreSpotlightResult : SFSearchResult_Compatibility {
    struct ranking_index_score_t { 
        unsigned long long lsb; 
        unsigned long long msb; 
    }  _buddyScore;
    NSString * _bundleID;
    bool  _completed;
    NSDate * _contentCreationDate;
    NSString * _domainIdentifier;
    bool  _hasAssociatedUserActivity;
    long long  _incomingCount;
    NSDate * _interestingDate;
    NSString * _itemIdentifier;
    NSArray * _launchDates;
    NSString * _mailConversationIdentifier;
    long long  _outgoingCount;
    NSString * _relatedBundleID;
    NSString * _relatedUniqueIdentifier;
}

@property struct ranking_index_score_t { unsigned long long x1; unsigned long long x2; } buddyScore;
@property (nonatomic, retain) NSString *bundleID;
@property (retain) NSArray *compatibilityDescriptions;
@property bool completed;
@property (nonatomic, retain) NSDate *contentCreationDate;
@property (retain) NSString *domainIdentifier;
@property (nonatomic) bool hasAssociatedUserActivity;
@property long long incomingCount;
@property (retain) NSDate *interestingDate;
@property (retain) NSString *itemIdentifier;
@property (nonatomic, retain) NSArray *launchDates;
@property (retain) NSString *mailConversationIdentifier;
@property long long outgoingCount;
@property (retain) NSString *relatedBundleID;
@property (retain) NSString *relatedUniqueIdentifier;
@property int title_maxlines;

- (void).cxx_destruct;
- (struct ranking_index_score_t { unsigned long long x1; unsigned long long x2; })buddyScore;
- (id)bundleID;
- (Class)classForCoder;
- (id)compatibilityDescriptions;
- (bool)completed;
- (id)contentCreationDate;
- (id)debugDescription;
- (id)domainIdentifier;
- (bool)hasAssociatedUserActivity;
- (bool)hasDetail;
- (long long)incomingCount;
- (id)init;
- (id)interestingDate;
- (id)itemIdentifier;
- (id)launchDates;
- (id)mailConversationIdentifier;
- (long long)outgoingCount;
- (id)relatedBundleID;
- (id)relatedUniqueIdentifier;
- (void)setBuddyScore:(struct ranking_index_score_t { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setBundleID:(id)arg1;
- (void)setCompatibilityDescriptions:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setContentCreationDate:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setHasAssociatedUserActivity:(bool)arg1;
- (void)setIncomingCount:(long long)arg1;
- (void)setInterestingDate:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setLaunchDates:(id)arg1;
- (void)setMailConversationIdentifier:(id)arg1;
- (void)setOutgoingCount:(long long)arg1;
- (void)setRelatedBundleID:(id)arg1;
- (void)setRelatedUniqueIdentifier:(id)arg1;
- (void)setTitle_maxlines:(int)arg1;
- (int)title_maxlines;

@end
