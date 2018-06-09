/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBCategory : PBCodable <NSCopying> {
    NSMutableArray * _categoryHierarchys;
    NSMutableArray * _curatedTagIds;
    NSString * _entityId;
    NSString * _name;
    NSMutableArray * _recommendedChannels;
    NSMutableArray * _recommendedTopics;
}

@property (nonatomic, retain) NSMutableArray *categoryHierarchys;
@property (nonatomic, retain) NSMutableArray *curatedTagIds;
@property (nonatomic, retain) NSString *entityId;
@property (nonatomic, readonly) bool hasEntityId;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *recommendedChannels;
@property (nonatomic, retain) NSMutableArray *recommendedTopics;

+ (Class)categoryHierarchyType;
+ (Class)curatedTagIdsType;
+ (Class)recommendedChannelsType;
+ (Class)recommendedTopicsType;

- (void).cxx_destruct;
- (void)addCategoryHierarchy:(id)arg1;
- (void)addCuratedTagIds:(id)arg1;
- (void)addRecommendedChannels:(id)arg1;
- (void)addRecommendedTopics:(id)arg1;
- (id)categoryHierarchyAtIndex:(unsigned long long)arg1;
- (id)categoryHierarchys;
- (unsigned long long)categoryHierarchysCount;
- (void)clearCategoryHierarchys;
- (void)clearCuratedTagIds;
- (void)clearRecommendedChannels;
- (void)clearRecommendedTopics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)curatedTagIds;
- (id)curatedTagIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)curatedTagIdsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityId;
- (bool)hasEntityId;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (id)recommendedChannels;
- (id)recommendedChannelsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendedChannelsCount;
- (id)recommendedTopics;
- (id)recommendedTopicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendedTopicsCount;
- (void)setCategoryHierarchys:(id)arg1;
- (void)setCuratedTagIds:(id)arg1;
- (void)setEntityId:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRecommendedChannels:(id)arg1;
- (void)setRecommendedTopics:(id)arg1;
- (void)writeTo:(id)arg1;

@end
