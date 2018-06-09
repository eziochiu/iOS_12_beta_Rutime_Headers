/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKAggregateMapping : NSObject <NSCopying> {
    GKCollectionViewDataSource * _dataSource;
    NSString * _dynamicTag;
    NSMutableDictionary * _globalSectionsToTags;
    NSMutableDictionary * _globalToLocalSections;
    NSMutableDictionary * _localToGlobalSections;
    long long  _sectionCount;
}

@property (nonatomic, retain) GKCollectionViewDataSource *dataSource;
@property (nonatomic, retain) NSString *dynamicTag;
@property (nonatomic, retain) NSMutableDictionary *globalSectionsToTags;
@property (nonatomic, retain) NSMutableDictionary *globalToLocalSections;
@property (nonatomic, retain) NSMutableDictionary *localToGlobalSections;
@property (nonatomic) long long sectionCount;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)addMappingFromGlobalSection:(unsigned long long)arg1 toLocalSection:(unsigned long long)arg2 withTag:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)description;
- (id)dynamicTag;
- (id)globalIndexPathForLocalIndexPath:(id)arg1;
- (unsigned long long)globalSectionForLocalSection:(unsigned long long)arg1;
- (id)globalSectionsToTags;
- (id)globalToLocalSections;
- (id)init;
- (id)initWithGlobalToLocalMapping:(id)arg1;
- (id)localIndexPathForGlobalIndexPath:(id)arg1;
- (unsigned long long)localSectionForGlobalSection:(unsigned long long)arg1;
- (id)localToGlobalSections;
- (long long)sectionCount;
- (void)setDataSource:(id)arg1;
- (void)setDynamicTag:(id)arg1;
- (void)setGlobalSectionsToTags:(id)arg1;
- (void)setGlobalToLocalSections:(id)arg1;
- (void)setLocalToGlobalSections:(id)arg1;
- (void)setSectionCount:(long long)arg1;
- (id)tagForGlobalSection:(long long)arg1;
- (unsigned long long)updateMappingsStartingWithGlobalSection:(unsigned long long)arg1;

@end
