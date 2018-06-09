/* made by EzioChiu.
 */

@protocol PLSyncableObject <NSObject>

@required

- (short)cloudLocalState;
- (CPLRecordChange *)cplFullRecord;
- (id)localID;
- (PLMomentShare *)momentShare;
- (void)setCloudLocalState:(short)arg1;

@end
