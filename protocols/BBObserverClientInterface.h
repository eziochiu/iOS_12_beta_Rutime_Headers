/* made by EzioChiu.
 */

@protocol BBObserverClientInterface

@required

- (void)getObserverDebugInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)noteAlertBehaviorOverrideStateChanged:(NSNumber *)arg1;
- (void)noteAlertBehaviorOverridesChanged:(NSNumber *)arg1;
- (void)noteServerReceivedResponseForBulletin:(BBBulletin *)arg1;
- (void)removeSection:(NSString *)arg1;
- (void)updateBulletin:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: BBBulletinUpdateTransaction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateSectionInfo:(BBSectionInfo *)arg1;
- (void)updateSectionOrder:(NSArray *)arg1;
- (void)updateSectionOrderRule:(NSNumber *)arg1;
- (void)updateSectionParameters:(BBSectionParameters *)arg1 forSectionID:(NSString *)arg2;

@end
