/* made by EzioChiu.
 */

@protocol BBRemoteDataProviderClientProxy <NSObject>

@required

- (void)bulletinsWithRequestParameters:(void *)arg1 lastCleared:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: BBBulletinRequestParameters *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)clearedInfoForBulletins:(void *)arg1 lastClearedInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 12: NSSet *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: BBSectionInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)clearedInfoForClearingBulletinsFromDate:(void *)arg1 toDate:(void *)arg2 lastClearedInfo:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 13: NSDate *, NSDate *, BBSectionInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)dataProviderDidLoad;
- (void)deliverBulletinActionResponse:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: BBActionResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)deliverMessageWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)getAspectRatioForAttachmentUUID:(void *)arg1 recordID:(void *)arg2 isPrimary:(void *)arg3 withHandler:(void *)arg4; // needs 4 arg types, found 10: NSUUID *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, NSError *, void*
- (void)getDataForAttachmentUUID:(void *)arg1 recordID:(void *)arg2 isPrimary:(void *)arg3 withHandler:(void *)arg4; // needs 4 arg types, found 10: NSUUID *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)getPNGDataForAttachmentUUID:(void *)arg1 recordID:(void *)arg2 isPrimary:(void *)arg3 sizeConstraints:(void *)arg4 withHandler:(void *)arg5; // needs 5 arg types, found 11: NSUUID *, NSString *, bool, BBThumbnailSizeConstraints *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)noteSectionInfoDidChange:(BBSectionInfo *)arg1;

@end
