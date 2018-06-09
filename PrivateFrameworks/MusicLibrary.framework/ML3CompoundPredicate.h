/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3CompoundPredicate : ML3Predicate {
    NSArray * _predicates;
}

@property (nonatomic, readonly, copy) NSString *compoundOperatorJoiner;
@property (nonatomic, retain) NSArray *predicates;

+ (id)predicateMatchingPredicates:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;
- (id)databaseStatementParameters;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicates:(id)arg1;
- (bool)isDynamicForEntityClass:(Class)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicates;
- (void)setPredicates:(id)arg1;
- (id)spotlightPredicate;

@end
