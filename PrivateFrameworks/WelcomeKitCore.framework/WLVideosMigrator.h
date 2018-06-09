/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLVideosMigrator : WLFileMigrationWebService {
    bool  _didSaveVideo;
    NSObject<OS_dispatch_semaphore> * _importSema;
    NSError * _saveError;
}

+ (id)contentType;

- (void).cxx_destruct;
- (id)contentType;
- (id)dataType;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithSourceDevice:(id)arg1 urlSessionController:(id)arg2 delegate:(id)arg3;
- (bool)shouldDownloadDataAsSeparateFileForSummary:(id)arg1 account:(id)arg2;

@end
