/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTNewsTodayResultsExplicitAllocationAggregator : NSObject <NTTodayResultsAggregator> {
    bool  _allowLeadingCell;
    bool  _allowSectionTitles;
    unsigned long long  _embedsLimit;
    <FCFeedPersonalizing> * _feedPersonalizer;
    NSDate * _filterDate;
    NTPBSectionSlotCostInfo * _nonVideoSectionSlotCostInfo;
    bool  _respectMinMaxLimit;
    double  _slotsLimit;
    NSObject<FCTodayPrivateData> * _todayData;
    NTPBSectionSlotCostInfo * _videoSectionSlotCostInfo;
}

@property (nonatomic) bool allowLeadingCell;
@property (nonatomic) bool allowSectionTitles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long embedsLimit;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (nonatomic, copy) NSDate *filterDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NTPBSectionSlotCostInfo *nonVideoSectionSlotCostInfo;
@property (nonatomic) bool respectMinMaxLimit;
@property (nonatomic) double slotsLimit;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSObject<FCTodayPrivateData> *todayData;
@property (nonatomic, copy) NTPBSectionSlotCostInfo *videoSectionSlotCostInfo;

- (void).cxx_destruct;
- (id)_itemsForSection:(id)arg1 items:(id)arg2 previouslyChosenItems:(id)arg3 allowLeadingCell:(bool)arg4 leadingCellItemID:(id*)arg5 priorClusterIDsInOtherSections:(id)arg6 sectionItemsLimit:(unsigned long long)arg7 otherArticleIDs:(id)arg8 embedsLimit:(unsigned long long)arg9 remainingSlots:(double)arg10 slotsUsed:(double*)arg11 noMoreItemsToGive:(bool*)arg12 noRoomForMoreItems:(bool*)arg13 slotAllocationByDynamicSlotItemID:(id)arg14;
- (id)_sectionFilterTransformationWithDescriptor:(id)arg1 priorClusterIDsInOtherSections:(id)arg2 priorClusterIDsInSection:(id)arg3 otherArticleIDs:(id)arg4 embedsLimit:(unsigned long long)arg5;
- (id)aggregateSections:(id)arg1 itemsBySectionDescriptor:(id)arg2;
- (bool)allowLeadingCell;
- (bool)allowSectionTitles;
- (unsigned long long)embedsLimit;
- (id)feedPersonalizer;
- (id)filterDate;
- (id)init;
- (id)initWithFeedPersonalizer:(id)arg1 nonVideoSectionSlotCostInfo:(id)arg2 videoSectionSlotCostInfo:(id)arg3 embedsLimit:(unsigned long long)arg4 allowLeadingCell:(bool)arg5 allowSectionTitles:(bool)arg6 respectMinMaxLimit:(bool)arg7 filterDate:(id)arg8 todayData:(id)arg9 slotsLimit:(double)arg10;
- (id)nonVideoSectionSlotCostInfo;
- (bool)respectMinMaxLimit;
- (void)setAllowLeadingCell:(bool)arg1;
- (void)setAllowSectionTitles:(bool)arg1;
- (void)setEmbedsLimit:(unsigned long long)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setFilterDate:(id)arg1;
- (void)setNonVideoSectionSlotCostInfo:(id)arg1;
- (void)setRespectMinMaxLimit:(bool)arg1;
- (void)setSlotsLimit:(double)arg1;
- (void)setTodayData:(id)arg1;
- (void)setVideoSectionSlotCostInfo:(id)arg1;
- (double)slotsLimit;
- (id)todayData;
- (id)videoSectionSlotCostInfo;

@end
