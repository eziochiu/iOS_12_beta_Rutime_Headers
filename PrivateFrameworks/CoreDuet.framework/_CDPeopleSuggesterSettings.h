/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPeopleSuggesterSettings : NSObject <NSCopying> {
    bool  _aggregateByIdentifier;
    NSSet * _constrainAccounts;
    NSSet * _constrainBundleIds;
    NSSet * _constrainDomainIdentifiers;
    NSSet * _constrainIdentifiers;
    unsigned long long  _constrainMaxRecipientCount;
    NSSet * _constrainMechanisms;
    NSSet * _constrainPersonIdType;
    NSSet * _constrainPersonIds;
    NSSet * _ignoreContactIdentifiers;
    unsigned long long  _maxNumberOfPeopleSuggested;
    bool  _requireOutgoingInteraction;
    bool  _useFuture;
    bool  _useTitleToContrainKeywords;
}

@property bool aggregateByIdentifier;
@property (retain) NSSet *constrainAccounts;
@property (retain) NSSet *constrainBundleIds;
@property (retain) NSSet *constrainDomainIdentifiers;
@property (retain) NSSet *constrainIdentifiers;
@property unsigned long long constrainMaxRecipientCount;
@property (retain) NSSet *constrainMechanisms;
@property (retain) NSSet *constrainPersonIdType;
@property (retain) NSSet *constrainPersonIds;
@property (retain) NSSet *ignoreContactIdentifiers;
@property unsigned long long maxNumberOfPeopleSuggested;
@property bool requireOutgoingInteraction;
@property bool useFuture;
@property bool useTitleToContrainKeywords;

+ (id)defaultSettings;

- (void).cxx_destruct;
- (bool)aggregateByIdentifier;
- (id)constrainAccounts;
- (id)constrainBundleIds;
- (id)constrainDomainIdentifiers;
- (id)constrainIdentifiers;
- (unsigned long long)constrainMaxRecipientCount;
- (id)constrainMechanisms;
- (id)constrainPersonIdType;
- (id)constrainPersonIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)ignoreContactIdentifiers;
- (id)init;
- (unsigned long long)maxNumberOfPeopleSuggested;
- (bool)requireOutgoingInteraction;
- (void)setAggregateByIdentifier:(bool)arg1;
- (void)setConstrainAccounts:(id)arg1;
- (void)setConstrainBundleIds:(id)arg1;
- (void)setConstrainDomainIdentifiers:(id)arg1;
- (void)setConstrainIdentifiers:(id)arg1;
- (void)setConstrainMaxRecipientCount:(unsigned long long)arg1;
- (void)setConstrainMechanisms:(id)arg1;
- (void)setConstrainPersonIdType:(id)arg1;
- (void)setConstrainPersonIds:(id)arg1;
- (void)setIgnoreContactIdentifiers:(id)arg1;
- (void)setMaxNumberOfPeopleSuggested:(unsigned long long)arg1;
- (void)setRequireOutgoingInteraction:(bool)arg1;
- (void)setUseFuture:(bool)arg1;
- (void)setUseTitleToContrainKeywords:(bool)arg1;
- (bool)useFuture;
- (bool)useTitleToContrainKeywords;

@end
