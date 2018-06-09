/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRevGeoCompoundNameInfo : NSObject {
    bool  _isContinuation;
    NSString * _namePrefix;
    NSString * _nameSuffix;
    NSArray * _sortedNames;
    bool  _suffixWhenPrefixOnly;
}

@property (nonatomic) bool isContinuation;
@property (nonatomic, readonly, copy) NSArray *localizedSortedNames;
@property (nonatomic, readonly, copy) NSString *localizedTitleForNameInfo;
@property (nonatomic, copy) NSString *namePrefix;
@property (nonatomic, copy) NSString *nameSuffix;
@property (nonatomic, copy) NSArray *sortedNames;
@property (nonatomic) bool suffixWhenPrefixOnly;

+ (id)_localizedNameForName:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)dictionaryForInfo;
- (id)initWithDictionary:(id)arg1;
- (bool)isContinuation;
- (id)localizedSortedNames;
- (id)localizedTitleForNameInfo;
- (id)namePrefix;
- (id)nameSuffix;
- (void)setIsContinuation:(bool)arg1;
- (void)setNamePrefix:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setSortedNames:(id)arg1;
- (void)setSuffixWhenPrefixOnly:(bool)arg1;
- (id)sortedNames;
- (bool)suffixWhenPrefixOnly;

@end
