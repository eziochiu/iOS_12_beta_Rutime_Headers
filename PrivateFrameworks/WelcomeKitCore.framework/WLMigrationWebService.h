/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLMigrationWebService : NSObject {
    <WLMigrationWebServiceDelegate> * _delegate;
    WLSourceDevice * _device;
    unsigned long long  _expectedRecordCount;
    unsigned long long  _importedRecordCount;
    bool  _importsNilData;
    bool  _needsPreImportPhase;
    WLURLSessionController * _urlSessionController;
}

@property (nonatomic, readonly) <WLMigrationWebServiceDelegate> *delegate;
@property (nonatomic, readonly, retain) WLSourceDevice *device;
@property (nonatomic, readonly) unsigned long long expectedRecordCount;
@property (nonatomic, readonly) unsigned long long importedRecordCount;
@property (nonatomic) bool importsNilData;
@property (nonatomic) bool needsPreImportPhase;

+ (bool)_allowSegmentedDownloads;
+ (unsigned long long)_downloadSegmentSize;
+ (id)_requestSerialQueue;

- (void).cxx_destruct;
- (void)_downloadFileInMultipleSegmentsForSummary:(id)arg1 account:(id)arg2 segmentCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_downloadFileInSingleSegmentForSummary:(id)arg1 account:(id)arg2 completion:(id /* block */)arg3;
- (void)_downloadSegmentsStartingAtByteLocation:(unsigned long long)arg1 ofSummary:(id)arg2 account:(id)arg3 toFileHandle:(id)arg4 segmentCompletion:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)_fetchSummariesForAccount:(id)arg1 statistics:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)_newNumberOfRetriesAllowed:(unsigned long long)arg1 startDate:(id)arg2;
- (void)_performDownloadRequest:(id)arg1 toDestination:(id)arg2 numberOfRetriesAllowed:(unsigned long long)arg3 startDate:(id)arg4 logString:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_performRequest:(id)arg1 numberOfRetriesAllowed:(unsigned long long)arg2 startDate:(id)arg3 logString:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)_shouldDelayBetweenRequests;
- (id)contentType;
- (id)dataType;
- (id)delegate;
- (id)device;
- (void)didReceiveData:(id)arg1 response:(id)arg2 error:(id)arg3 forSummary:(id)arg4 completion:(id /* block */)arg5;
- (void)downloadDataForSummary:(id)arg1 account:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadFileForSummary:(id)arg1 account:(id)arg2 segmentCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (unsigned long long)expectedRecordCount;
- (void)fetchAccountsAndSummariesWithStatistics:(id)arg1 completion:(id /* block */)arg2;
- (void)importDataFromProvider:(id /* block */)arg1 forSummaries:(id)arg2 summaryStart:(id /* block */)arg3 summaryCompletion:(id /* block */)arg4;
- (void)importDidEnd;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (id)importWillBegin;
- (unsigned long long)importedRecordCount;
- (bool)importsNilData;
- (id)initWithSourceDevice:(id)arg1 urlSessionController:(id)arg2 delegate:(id)arg3;
- (bool)needsPreImportPhase;
- (void)performPreImportPhaseForSummary:(id)arg1 data:(id)arg2;
- (id)recordSummaryWithInfo:(id)arg1 account:(id)arg2;
- (void)setImportsNilData:(bool)arg1;
- (void)setNeedsPreImportPhase:(bool)arg1;
- (bool)shouldDownloadDataAsSeparateFileForSummary:(id)arg1 account:(id)arg2;
- (bool)shouldRetryWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)urlForAccounts;
- (id)urlForRecordSummariesWithAccount:(id)arg1;
- (id)urlForRecordWithSummary:(id)arg1 account:(id)arg2 segmentByteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (double)urlRequestTimeout;
- (id)urlScheme;

@end
