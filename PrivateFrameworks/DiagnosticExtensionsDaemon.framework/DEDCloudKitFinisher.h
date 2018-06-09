/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDCloudKitFinisher : NSObject <DEDFinisher, DEDSecureArchiving, NSSecureCoding> {
    NSMutableArray * _attachmentRecords;
    NSArray * _attachmentURLs;
    NSMutableArray * _attachments;
    NSObject<OS_os_log> * _log;
    DEDBugSession * _session;
    unsigned long long  _totalUploadSize;
    NSMutableDictionary * _uploadedBytes;
}

@property (retain) NSMutableArray *attachmentRecords;
@property (retain) NSArray *attachmentURLs;
@property (retain) NSMutableArray *attachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property DEDBugSession *session;
@property (readonly) Class superclass;
@property unsigned long long totalUploadSize;
@property (retain) NSMutableDictionary *uploadedBytes;

+ (id)archivedClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentRecords;
- (id)attachmentURLs;
- (id)attachments;
- (void)encodeWithCoder:(id)arg1;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (void)localCleanup;
- (id)log;
- (id)session;
- (void)setAttachmentRecords:(id)arg1;
- (void)setAttachmentURLs:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTotalUploadSize:(unsigned long long)arg1;
- (void)setUploadedBytes:(id)arg1;
- (unsigned long long)totalUploadSize;
- (id)uploadedBytes;

@end
