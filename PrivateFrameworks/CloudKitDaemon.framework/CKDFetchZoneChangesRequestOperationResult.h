/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchZoneChangesRequestOperationResult : NSObject {
    bool  _hasPendingArchivedRecords;
    NSData * _resultClientChangeTokenData;
    NSData * _resultServerChangeTokenData;
    long long  _status;
}

@property (nonatomic) bool hasPendingArchivedRecords;
@property (nonatomic, retain) NSData *resultClientChangeTokenData;
@property (nonatomic, retain) NSData *resultServerChangeTokenData;
@property (nonatomic) long long status;

- (void).cxx_destruct;
- (bool)hasPendingArchivedRecords;
- (id)init;
- (id)resultClientChangeTokenData;
- (id)resultServerChangeTokenData;
- (void)setHasPendingArchivedRecords:(bool)arg1;
- (void)setResultClientChangeTokenData:(id)arg1;
- (void)setResultServerChangeTokenData:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
