/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDSeedingFinisher : NSObject <DEDFinisher, DEDSecureArchiving, DEDSeedingClientDelegate, NSSecureCoding> {
    DEDSeedingClient * _client;
    DEDBugSessionConfiguration * _config;
    NSObject<OS_os_log> * _log;
    NSMutableDictionary * _promises;
    DEDBugSession * _session;
    NSObject<OS_dispatch_source> * _timerSource;
    unsigned long long  _totalUploadSize;
    NSObject<OS_os_transaction> * _transaction;
    NSMutableSet * _uploads;
}

@property (retain) DEDSeedingClient *client;
@property (retain) DEDBugSessionConfiguration *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSMutableDictionary *promises;
@property DEDBugSession *session;
@property (readonly) Class superclass;
@property unsigned long long totalUploadSize;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property (retain) NSMutableSet *uploads;

+ (id)archivedClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archiveItemsInDirectory:(id)arg1;
- (id)attachmentHandler;
- (void)cleanup;
- (id)client;
- (id)config;
- (void)didAdoptAttachmentGroup:(id)arg1;
- (void)didCancelCollectionOnExtension:(id)arg1;
- (void)didCollectAttachmentGroup:(id)arg1;
- (void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (id)log;
- (id)prepareSessionDirectoryForSubmission:(id)arg1;
- (id)prepareUpload:(id)arg1 forSubmissionWithSession:(id)arg2 metadata:(id)arg3;
- (id)promises;
- (void)save;
- (id)session;
- (void)setClient:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setPromises:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTotalUploadSize:(unsigned long long)arg1;
- (void)setTransaction:(id)arg1;
- (void)setUploads:(id)arg1;
- (void)startProgressNotifier;
- (unsigned long long)totalUploadSize;
- (id)transaction;
- (void)updateSessionUploadProgress;
- (id)uploadItemForTask:(id)arg1;
- (void)uploadTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)uploadTask:(id)arg1 didSendBytes:(long long)arg2;
- (id)uploads;
- (bool)uploadsAreComplete;

@end
