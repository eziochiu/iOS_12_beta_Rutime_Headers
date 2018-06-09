/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSectionSlotCostInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int leadingFirstHeadlineSlotCost : 1; 
        unsigned int sectionTitleSlotCost : 1; 
        unsigned int standardFirstHeadlineSlotCost : 1; 
        unsigned int subsequentHeadlineSlotCost : 1; 
    }  _has;
    double  _leadingFirstHeadlineSlotCost;
    double  _sectionTitleSlotCost;
    double  _standardFirstHeadlineSlotCost;
    double  _subsequentHeadlineSlotCost;
}

@property (nonatomic) bool hasLeadingFirstHeadlineSlotCost;
@property (nonatomic) bool hasSectionTitleSlotCost;
@property (nonatomic) bool hasStandardFirstHeadlineSlotCost;
@property (nonatomic) bool hasSubsequentHeadlineSlotCost;
@property (nonatomic) double leadingFirstHeadlineSlotCost;
@property (nonatomic) double sectionTitleSlotCost;
@property (nonatomic) double standardFirstHeadlineSlotCost;
@property (nonatomic) double subsequentHeadlineSlotCost;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLeadingFirstHeadlineSlotCost;
- (bool)hasSectionTitleSlotCost;
- (bool)hasStandardFirstHeadlineSlotCost;
- (bool)hasSubsequentHeadlineSlotCost;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)leadingFirstHeadlineSlotCost;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)sectionTitleSlotCost;
- (void)setHasLeadingFirstHeadlineSlotCost:(bool)arg1;
- (void)setHasSectionTitleSlotCost:(bool)arg1;
- (void)setHasStandardFirstHeadlineSlotCost:(bool)arg1;
- (void)setHasSubsequentHeadlineSlotCost:(bool)arg1;
- (void)setLeadingFirstHeadlineSlotCost:(double)arg1;
- (void)setSectionTitleSlotCost:(double)arg1;
- (void)setStandardFirstHeadlineSlotCost:(double)arg1;
- (void)setSubsequentHeadlineSlotCost:(double)arg1;
- (double)standardFirstHeadlineSlotCost;
- (double)subsequentHeadlineSlotCost;
- (void)writeTo:(id)arg1;

@end
