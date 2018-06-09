/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3SearchStringPredicate : ML3Predicate {
    NSArray * _properties;
    NSString * _searchString;
}

@property (nonatomic, copy) NSArray *properties;
@property (nonatomic, copy) NSString *searchString;

+ (id)predicateWithConcatenatedProperties:(id)arg1 searchString:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)databaseStatementParameters;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConcatenatedProperties:(id)arg1 searchString:(id)arg2;
- (bool)isDynamicForEntityClass:(Class)arg1;
- (bool)isEqual:(id)arg1;
- (id)properties;
- (id)searchString;
- (void)setProperties:(id)arg1;
- (void)setSearchString:(id)arg1;

@end
