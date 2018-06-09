/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTItemAggregationResult : NSObject <NSCopying> {
    NSDictionary * _aggregatedItemsBySectionDescriptor;
    NSSet * _itemIDsOfLeadingCells;
    NSDictionary * _slotAllocationByDynamicSlotItemID;
    NSArray * _unusedSectionDescriptors;
}

@property (nonatomic, copy) NSDictionary *aggregatedItemsBySectionDescriptor;
@property (nonatomic, copy) NSSet *itemIDsOfLeadingCells;
@property (nonatomic, copy) NSDictionary *slotAllocationByDynamicSlotItemID;
@property (nonatomic, copy) NSArray *unusedSectionDescriptors;

- (void).cxx_destruct;
- (id)aggregatedItemsBySectionDescriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithAggregatedItemsBySectionDescriptor:(id)arg1 itemIDsOfLeadingCells:(id)arg2 slotAllocationByDynamicSlotItemID:(id)arg3 unusedSectionDescriptors:(id)arg4;
- (id)itemIDsOfLeadingCells;
- (void)setAggregatedItemsBySectionDescriptor:(id)arg1;
- (void)setItemIDsOfLeadingCells:(id)arg1;
- (void)setSlotAllocationByDynamicSlotItemID:(id)arg1;
- (void)setUnusedSectionDescriptors:(id)arg1;
- (id)slotAllocationByDynamicSlotItemID;
- (id)unusedSectionDescriptors;

@end
