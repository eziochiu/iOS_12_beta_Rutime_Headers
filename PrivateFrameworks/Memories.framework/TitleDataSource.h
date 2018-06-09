/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface TitleDataSource : NSObject <ItemStylePickerDataSource> {
    NSArray * _allTitleNames;
    NSArray * _genericTitleInfoItems;
    NSMutableArray * _genericTitleNames;
    bool  _includeMotionTitles;
    bool  _includeNone;
    bool  _includeThemeTitles;
    NSMutableArray * _motionTitleNames;
    NSArray * _themeTitleNames;
}

@property (nonatomic, retain) NSArray *allTitleNames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *genericTitleInfoItems;
@property (nonatomic, retain) NSMutableArray *genericTitleNames;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeMotionTitles;
@property (nonatomic) bool includeNone;
@property (nonatomic) bool includeThemeTitles;
@property (nonatomic, retain) NSMutableArray *motionTitleNames;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *themeTitleNames;

+ (id)sharedDataSource;

- (id)allTitleNames;
- (void)dealloc;
- (id)genericTitleInfoItems;
- (id)genericTitleNames;
- (bool)includeMotionTitles;
- (bool)includeNone;
- (bool)includeThemeTitles;
- (id)indexPathOfItemName:(id)arg1;
- (id)indexPathOfTitleName:(id)arg1;
- (id)init;
- (id)itemNameAtIndexPath:(id)arg1;
- (id)itemNames;
- (id)micaFileNameForTitleIdentifier:(id)arg1 micaFileBaseName:(id)arg2;
- (id)motionTitleNames;
- (long long)numberOfItems;
- (unsigned long long)numberOfTitles;
- (id)representativeTitleNameForTitleDefinition:(id)arg1;
- (void)setAllTitleNames:(id)arg1;
- (void)setGenericTitleInfoItems:(id)arg1;
- (void)setGenericTitleNames:(id)arg1;
- (void)setIncludeMotionTitles:(bool)arg1;
- (void)setIncludeNone:(bool)arg1;
- (void)setIncludeThemeTitles:(bool)arg1;
- (void)setMotionTitleNames:(id)arg1;
- (void)setThemeTitleNames:(id)arg1;
- (id)themeTitleNames;
- (id)titleNameAtIndex:(unsigned long long)arg1;
- (id)titleStylesIncludingTheme:(bool)arg1 includingMotion:(bool)arg2;
- (id)titleTypesForTitleDefinition:(id)arg1;

@end
