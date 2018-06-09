/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAggregateZonePCSOperation : CKDDatabaseOperation {
    bool  _isHandlingPCSOplockFailure;
    long long  _maxZoneSaveAttempts;
    long long  _numZoneSaveAttempts;
    NSArray * _sourceZoneIDs;
    CKRecordZone * _targetZone;
    NSMutableDictionary * _zonePCSDataByZoneID;
}

@property bool isHandlingPCSOplockFailure;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic) long long numZoneSaveAttempts;
@property (nonatomic, retain) NSArray *sourceZoneIDs;
@property (nonatomic, retain) CKRecordZone *targetZone;
@property (nonatomic, retain) NSMutableDictionary *zonePCSDataByZoneID;

- (void).cxx_destruct;
- (void)_fetchPCSDataForZoneID:(id)arg1;
- (void)_fetchZonePCS;
- (void)_handleZoneSavedWithID:(id)arg1 responseCode:(id)arg2;
- (void)_prepareTargetZonePCS;
- (bool)_saveTargetZone;
- (void)_setPermanentOplockFailure;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (bool)isHandlingPCSOplockFailure;
- (void)main;
- (bool)makeStateTransition;
- (long long)maxZoneSaveAttempts;
- (id)nameForState:(unsigned long long)arg1;
- (long long)numZoneSaveAttempts;
- (void)setIsHandlingPCSOplockFailure:(bool)arg1;
- (void)setMaxZoneSaveAttempts:(long long)arg1;
- (void)setNumZoneSaveAttempts:(long long)arg1;
- (void)setSourceZoneIDs:(id)arg1;
- (void)setTargetZone:(id)arg1;
- (void)setZonePCSDataByZoneID:(id)arg1;
- (id)sourceZoneIDs;
- (id)targetZone;
- (id)zonePCSDataByZoneID;

@end
