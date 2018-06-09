/* made by EzioChiu.
 */

@protocol BLTSectionInfoObserverDelegate <NSObject>

@required

- (void)sectionInfoObserver:(BLTSectionInfoObserver *)arg1 updatedSectionInfo:(BBSectionInfo *)arg2 withUniversalSectionID:(NSString *)arg3 displayName:(NSString *)arg4;

@optional

- (void)sectionInfoObserver:(BLTSectionInfoObserver *)arg1 removedSectionWithSectionID:(NSString *)arg2;

@end
