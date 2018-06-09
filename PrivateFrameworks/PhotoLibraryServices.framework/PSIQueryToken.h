/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIQueryToken : NSObject <NSSecureCoding> {
    bool  _belongsToSearchText;
    PSIDateFilter * _dateFilter;
    NSString * _identifier;
    bool  _isFullTextToken;
    unsigned long long  _matchType;
    PSIQueryToken * _parentToken;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeInSearchText;
    NSString * _resolvedText;
    NSIndexSet * _searchedCategories;
    NSString * _text;
    unsigned long long  _userCategory;
    bool  _userControlledCategoriesUseWildcard;
    bool  _usesWordEmbeddings;
    PSIWordEmbeddingMatch * _wordEmbeddingMatch;
}

@property (nonatomic) bool belongsToSearchText;
@property (nonatomic, readonly) bool containsMarker;
@property (nonatomic, retain) PSIDateFilter *dateFilter;
@property (nonatomic, readonly, copy) NSString *groupMatchingText;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) bool isFullTextToken;
@property (nonatomic, readonly) bool isTextSearchable;
@property (nonatomic, readonly) unsigned long long matchType;
@property (nonatomic, retain) PSIQueryToken *parentToken;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeInSearchText;
@property (nonatomic, copy) NSString *resolvedText;
@property (nonatomic, copy) NSIndexSet *searchedCategories;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic) unsigned long long userCategory;
@property (nonatomic) bool userControlledCategoriesUseWildcard;
@property (nonatomic) bool usesWordEmbeddings;
@property (nonatomic, readonly, copy) NSString *wildcardResolvedText;
@property (nonatomic, retain) PSIWordEmbeddingMatch *wordEmbeddingMatch;

+ (id)personQueryTokensFromSocialGroupQueryToken:(id)arg1;
+ (id)stringForMatchType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (bool)belongsToSearchText;
- (bool)containsMarker;
- (id)dateFilter;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupMatchingText;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 userCategory:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 userCategory:(unsigned long long)arg2 searchedCategories:(id)arg3;
- (id)initWithText:(id)arg1 resolvedText:(id)arg2 identifier:(id)arg3 userCategory:(unsigned long long)arg4 searchedCategories:(id)arg5 matchType:(unsigned long long)arg6;
- (id)initWithText:(id)arg1 resolvedText:(id)arg2 userCategory:(unsigned long long)arg3 matchType:(unsigned long long)arg4;
- (id)initWithText:(id)arg1 resolvedText:(id)arg2 userCategory:(unsigned long long)arg3 searchedCategories:(id)arg4 matchType:(unsigned long long)arg5;
- (id)initWithText:(id)arg1 userCategory:(unsigned long long)arg2 matchType:(unsigned long long)arg3;
- (id)initWithText:(id)arg1 userCategory:(unsigned long long)arg2 searchedCategories:(id)arg3 matchType:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isFullTextToken;
- (bool)isTextSearchable;
- (unsigned long long)matchType;
- (id)parentToken;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeInSearchText;
- (id)resolvedText;
- (id)searchedCategories;
- (void)setBelongsToSearchText:(bool)arg1;
- (void)setDateFilter:(id)arg1;
- (void)setIsFullTextToken:(bool)arg1;
- (void)setParentToken:(id)arg1;
- (void)setRangeInSearchText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setResolvedText:(id)arg1;
- (void)setSearchedCategories:(id)arg1;
- (void)setUserCategory:(unsigned long long)arg1;
- (void)setUserControlledCategoriesUseWildcard:(bool)arg1;
- (void)setUsesWordEmbeddings:(bool)arg1;
- (void)setWordEmbeddingMatch:(id)arg1;
- (id)text;
- (id)tokenByWordEmbeddingWithMatch:(id)arg1;
- (unsigned long long)userCategory;
- (bool)userControlledCategoriesUseWildcard;
- (bool)usesWordEmbeddings;
- (id)wildcardResolvedText;
- (id)wordEmbeddingMatch;

@end
