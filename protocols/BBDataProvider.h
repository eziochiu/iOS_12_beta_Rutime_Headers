/* made by EzioChiu.
 */

@protocol BBDataProvider <BBSectionIdentity>

@required

- (NSArray *)sortDescriptors;

@optional

- (float)attachmentAspectRatioForRecordID:(NSString *)arg1;
- (NSData *)attachmentPNGDataForRecordID:(NSString *)arg1 sizeConstraints:(BBThumbnailSizeConstraints *)arg2;
- (NSSet *)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3;
- (NSSet *)bulletinsFilteredBy:(unsigned long long)arg1 enabledSectionIDs:(NSSet *)arg2 count:(unsigned long long)arg3 lastCleared:(id)arg4;
- (NSSet *)bulletinsWithRequestParameters:(BBBulletinRequestParameters *)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(NSSet *)arg1;
- (id)clearedInfoForBulletins:(NSSet *)arg1 lastClearedInfo:(id)arg2;
- (id)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1;
- (id)clearedInfoForClearingBulletinsFromDate:(NSDate *)arg1 toDate:(NSDate *)arg2 lastClearedInfo:(id)arg3;
- (void)dataProviderDidLoad;
- (NSArray *)defaultSubsectionInfos;
- (NSString *)displayNameForFilterID:(NSString *)arg1;
- (NSString *)displayNameForSubsectionID:(NSString *)arg1;
- (void)getAspectRatioForAttachmentUUID:(void *)arg1 recordID:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (void)getDataForAttachmentUUID:(void *)arg1 recordID:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)getPNGDataForAttachmentUUID:(void *)arg1 recordID:(void *)arg2 sizeConstraints:(void *)arg3 withCompletionHandler:(void *)arg4; // needs 4 arg types, found 9: NSUUID *, NSString *, BBThumbnailSizeConstraints *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)handleBulletinActionResponse:(BBActionResponse *)arg1;
- (void)handleBulletinActionResponse:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: BBActionResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)migrateSectionInfo:(BBSectionInfo *)arg1 oldSectionInfo:(BBSectionInfo *)arg2;
- (void)noteSectionInfoDidChange:(BBSectionInfo *)arg1;
- (NSData *)primaryAttachmentDataForRecordID:(NSString *)arg1;
- (void)receiveMessageWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (BBSectionParameters *)sectionParameters;
- (bool)syncsBulletinDismissal;

@end
