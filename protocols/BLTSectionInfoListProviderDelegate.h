/* made by EzioChiu.
 */

@protocol BLTSectionInfoListProviderDelegate <NSObject>

@required

- (void)removedSectionWithSectionID:(NSString *)arg1;
- (void)updateOverrides:(NSDictionary *)arg1 forSectionID:(NSString *)arg2;
- (void)updateSectionInfo:(BBSectionInfo *)arg1 withUniversalSectionID:(NSString *)arg2 displayName:(NSString *)arg3;

@end
