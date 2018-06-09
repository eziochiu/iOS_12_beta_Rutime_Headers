/* made by EzioChiu.
 */

@protocol BCCloudKitSyncEnablement

@required

- (void)setEnableCloudSync:(bool)arg1 enableReadingNowSync:(bool)arg2;
- (void)setEnableCollectionSync:(bool)arg1;
- (void)setEnableSecureUserDataCloudSync:(bool)arg1;

@end
