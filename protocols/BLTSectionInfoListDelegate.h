/* made by EzioChiu.
 */

@protocol BLTSectionInfoListDelegate <NSObject>

@required

- (void)sectionInfoList:(BLTSectionInfoList *)arg1 receivedRemoveSectionWithSectionID:(NSString *)arg2;
- (void)sectionInfoList:(BLTSectionInfoList *)arg1 receivedUpdatedSectionInfoForSectionID:(NSString *)arg2;

@end
