/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLMigrator : NSObject <WLDataMigratorProtocol, WLMigrationWebServiceDelegate> {
    WLDeviceAuthentication * _auth;
    NSString * _connectionKey;
    unsigned long long  _dataTypes;
    <WLDataMigrationDelegate> * _delegate;
    double  _lastProgressSentToAndroidDevice;
    NSMutableArray * _migrators;
    double  _progress;
    NSLock * _progressLock;
    NSString * _progressString;
    WLProgressWebService * _progressWebService;
    bool  _shouldSendProgressToDevice;
    WLSourceDevice * _sourceDevice;
}

@property (nonatomic, readonly) WLDeviceAuthentication *auth;
@property (nonatomic, readonly) NSString *connectionKey;
@property (nonatomic, readonly) unsigned long long dataTypes;
@property (nonatomic, retain) <WLDataMigrationDelegate> *delegate;
@property (nonatomic, readonly, retain) WLSourceDevice *sourceDevice;

+ (id)_aggdStringForContentTypeToStatsMap:(id)arg1 aggregateStatistics:(id)arg2 metadata:(id)arg3 allowAllFields:(bool)arg4;
+ (id)_aggdStringForStatistics:(id)arg1 allowAllFields:(bool)arg2;
+ (unsigned long long)_bucketedUnsignedInteger:(unsigned long long)arg1;
+ (unsigned long long)_bytesFreeOnDevice;
+ (void)_cleanUpAfterFinalizeMigratableAppsWithCompletion:(id /* block */)arg1;
+ (id)_dataTypesAndSizesXMLDataFromMap:(id)arg1;
+ (id)_deviceType;
+ (void)_parseDataTypesXMLData:(id)arg1 completion:(id /* block */)arg2;
+ (void)_presentPromptForMigrableApps:(id /* block */)arg1;
+ (bool)_shouldContinueMigrationFromAnotherDevice;
+ (bool)_shouldTerminateMigrationBeforeImport;
+ (id)_systemVersion;
+ (id)_unselectedContentTypeAggdString;
+ (id)_unsupportedContentTypeAggdString;
+ (void)finalizeMigratableAppsWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_deleteDownloadsPath;
- (id)_downloadData;
- (id)_fetchAccountsAndSummaries;
- (id)_importData;
- (void)_incrementProgressBy:(double)arg1;
- (void)_logMigratorAndAggregateStatistics:(id)arg1 metadata:(id)arg2;
- (void)_performMigration;
- (double)_progressIncrementForImportedSummary:(id)arg1 summaries:(id)arg2 accounts:(id)arg3 migrator:(id)arg4;
- (id)_selectDataTypes;
- (void)_selectFromDataTypeToSizeMap:(id)arg1 completion:(id /* block */)arg2;
- (void)_setProgressTo:(double)arg1 string:(id)arg2;
- (void)_setProgressToSegmentsDownloaded:(unsigned long long)arg1 ofExpectedSegments:(unsigned long long)arg2;
- (bool)_shouldDelayBetweenMigrationSteps;
- (bool)_shouldTerminateMigrationOnError;
- (void)_updateProgressOnAndroidDevice_progressLocked;
- (id)auth;
- (void)cancelMigrationWithReply:(id /* block */)arg1;
- (void)connectionDidEnd;
- (id)connectionKey;
- (unsigned long long)dataTypes;
- (void)dealloc;
- (id)delegate;
- (id)downloadsPath;
- (id)init;
- (id)initWithSourceDevice:(id)arg1 dataTypes:(unsigned long long)arg2 delegate:(id)arg3 connectionKey:(id)arg4;
- (void)invalidateWithError:(id)arg1;
- (void)migrator:(id)arg1 didImportRecordCount:(unsigned long long)arg2;
- (bool)migrator:(id)arg1 shouldTerminateFetchWithError:(id)arg2;
- (bool)migratorShouldPauseBeforeRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)sourceDevice;
- (void)startMigration;

@end