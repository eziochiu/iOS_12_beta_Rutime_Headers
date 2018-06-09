/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDBackupInfoRecoveryFlowController : CDPDRecoveryFlowController {
    <CDPDBackupRecoveryErrorProvider> * _errorProvider;
    NSArray * _recoveryRecords;
    <CDPDBackupRecoveryResultsParser> * _resultParser;
}

@property (nonatomic, retain) <CDPDBackupRecoveryErrorProvider> *errorProvider;
@property (nonatomic, retain) NSArray *recoveryRecords;
@property (nonatomic, retain) <CDPDBackupRecoveryResultsParser> *resultParser;

- (void).cxx_destruct;
- (id)_recoveryListFromDevices:(id)arg1;
- (void)_updateRecordRecoveryStatusForRecordDictionary:(id)arg1;
- (void)beginRecoveryWithCompletion:(id /* block */)arg1;
- (id)errorProvider;
- (id)recoveryRecords;
- (id)resultParser;
- (void)retrieveInflatedDevices:(id /* block */)arg1;
- (void)secretValidator:(id)arg1 didFailRecoveryWithErrors:(id)arg2 completion:(id /* block */)arg3;
- (bool)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2;
- (void)setErrorProvider:(id)arg1;
- (void)setRecoveryRecords:(id)arg1;
- (void)setResultParser:(id)arg1;

@end
