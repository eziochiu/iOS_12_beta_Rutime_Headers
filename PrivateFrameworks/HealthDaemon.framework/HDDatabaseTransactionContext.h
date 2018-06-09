/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabaseTransactionContext : NSObject <NSCopying> {
    NSMutableSet * _accessibilityAssertions;
    long long  _journalType;
    unsigned long long  _options;
}

@property (nonatomic, readonly, copy) NSSet *accessibilityAssertions;
@property (nonatomic) bool highPriority;
@property (nonatomic) long long journalType;
@property (nonatomic) bool requiresNewDatabaseConnection;
@property (nonatomic) bool requiresSecureDelete;
@property (nonatomic) bool skipJournalMerge;

- (void).cxx_destruct;
- (void)_applyOptions:(unsigned long long)arg1 enable:(bool)arg2;
- (id)accessibilityAssertions;
- (void)addAccessibilityAssertion:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)highPriority;
- (bool)isCompatibleWithContext:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (long long)journalType;
- (bool)requiresNewDatabaseConnection;
- (bool)requiresSecureDelete;
- (void)setHighPriority:(bool)arg1;
- (void)setJournalType:(long long)arg1;
- (void)setRequiresNewDatabaseConnection:(bool)arg1;
- (void)setRequiresSecureDelete:(bool)arg1;
- (void)setSkipJournalMerge:(bool)arg1;
- (bool)skipJournalMerge;

@end
