/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedViewportHeadline : PBCodable <NSCopying> {
    NSString * _articleID;
    NSString * _clusterID;
    NTPBDate * _displayDate;
    struct { 
        unsigned int tileProminenceScore : 1; 
        unsigned int storyType : 1; 
        unsigned int surfacedByBinIDRef : 1; 
        unsigned int surfacedByChannelIDRef : 1; 
        unsigned int surfacedBySectionIDRef : 1; 
        unsigned int surfacedByTopicIDRef : 1; 
        unsigned int topStoryType : 1; 
        unsigned int usesImageOnTopLayout : 1; 
    }  _has;
    int  _storyType;
    int  _surfacedByBinIDRef;
    int  _surfacedByChannelIDRef;
    int  _surfacedBySectionIDRef;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _surfacedByTagIDsRefs;
    int  _surfacedByTopicIDRef;
    double  _tileProminenceScore;
    int  _topStoryType;
    bool  _usesImageOnTopLayout;
}

@property (nonatomic, retain) NSString *articleID;
@property (nonatomic, retain) NSString *clusterID;
@property (nonatomic, retain) NTPBDate *displayDate;
@property (nonatomic, readonly) bool hasArticleID;
@property (nonatomic, readonly) bool hasClusterID;
@property (nonatomic, readonly) bool hasDisplayDate;
@property (nonatomic) bool hasStoryType;
@property (nonatomic) bool hasSurfacedByBinIDRef;
@property (nonatomic) bool hasSurfacedByChannelIDRef;
@property (nonatomic) bool hasSurfacedBySectionIDRef;
@property (nonatomic) bool hasSurfacedByTopicIDRef;
@property (nonatomic) bool hasTileProminenceScore;
@property (nonatomic) bool hasTopStoryType;
@property (nonatomic) bool hasUsesImageOnTopLayout;
@property (nonatomic) int storyType;
@property (nonatomic) int surfacedByBinIDRef;
@property (nonatomic) int surfacedByChannelIDRef;
@property (nonatomic) int surfacedBySectionIDRef;
@property (nonatomic, readonly) int*surfacedByTagIDsRefs;
@property (nonatomic, readonly) unsigned long long surfacedByTagIDsRefsCount;
@property (nonatomic) int surfacedByTopicIDRef;
@property (nonatomic) double tileProminenceScore;
@property (nonatomic) int topStoryType;
@property (nonatomic) bool usesImageOnTopLayout;

- (void)addSurfacedByTagIDsRefs:(int)arg1;
- (id)articleID;
- (void)clearSurfacedByTagIDsRefs;
- (id)clusterID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayDate;
- (bool)hasArticleID;
- (bool)hasClusterID;
- (bool)hasDisplayDate;
- (bool)hasStoryType;
- (bool)hasSurfacedByBinIDRef;
- (bool)hasSurfacedByChannelIDRef;
- (bool)hasSurfacedBySectionIDRef;
- (bool)hasSurfacedByTopicIDRef;
- (bool)hasTileProminenceScore;
- (bool)hasTopStoryType;
- (bool)hasUsesImageOnTopLayout;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setClusterID:(id)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setHasStoryType:(bool)arg1;
- (void)setHasSurfacedByBinIDRef:(bool)arg1;
- (void)setHasSurfacedByChannelIDRef:(bool)arg1;
- (void)setHasSurfacedBySectionIDRef:(bool)arg1;
- (void)setHasSurfacedByTopicIDRef:(bool)arg1;
- (void)setHasTileProminenceScore:(bool)arg1;
- (void)setHasTopStoryType:(bool)arg1;
- (void)setHasUsesImageOnTopLayout:(bool)arg1;
- (void)setStoryType:(int)arg1;
- (void)setSurfacedByBinIDRef:(int)arg1;
- (void)setSurfacedByChannelIDRef:(int)arg1;
- (void)setSurfacedBySectionIDRef:(int)arg1;
- (void)setSurfacedByTagIDsRefs:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSurfacedByTopicIDRef:(int)arg1;
- (void)setTileProminenceScore:(double)arg1;
- (void)setTopStoryType:(int)arg1;
- (void)setUsesImageOnTopLayout:(bool)arg1;
- (int)storyType;
- (int)surfacedByBinIDRef;
- (int)surfacedByChannelIDRef;
- (int)surfacedBySectionIDRef;
- (int*)surfacedByTagIDsRefs;
- (int)surfacedByTagIDsRefsAtIndex:(unsigned long long)arg1;
- (unsigned long long)surfacedByTagIDsRefsCount;
- (int)surfacedByTopicIDRef;
- (double)tileProminenceScore;
- (int)topStoryType;
- (bool)usesImageOnTopLayout;
- (void)writeTo:(id)arg1;

@end
