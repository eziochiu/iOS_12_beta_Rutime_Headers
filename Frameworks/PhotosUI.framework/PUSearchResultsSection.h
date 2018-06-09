/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsSection : NSObject {
    bool  _expanded;
    NSMutableSet * _mutableSearchResultUUIDs;
    NSMutableArray * _mutableSearchResults;
    NSArray * _sortDescriptors;
    bool  _sorted;
    NSString * _title;
}

@property (getter=isExpandable, nonatomic, readonly) bool expandable;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, readonly) NSMutableSet *mutableSearchResultUUIDs;
@property (nonatomic, readonly) NSMutableArray *mutableSearchResults;
@property (nonatomic, readonly) NSArray *searchResults;
@property (nonatomic, copy) NSArray *sortDescriptors;
@property (getter=isSorted, nonatomic) bool sorted;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long visibleCount;

+ (id)_stringForCategory:(unsigned long long)arg1;
+ (id)sectionTitleForCategoryMask:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addSearchResult:(id)arg1;
- (id)debugDictionary;
- (id)description;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (bool)isExpandable;
- (bool)isExpanded;
- (bool)isSorted;
- (id)mutableSearchResultUUIDs;
- (id)mutableSearchResults;
- (id)searchResults;
- (void)setExpanded:(bool)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setSorted:(bool)arg1;
- (id)sortDescriptors;
- (id)title;
- (unsigned long long)visibleCount;

@end
