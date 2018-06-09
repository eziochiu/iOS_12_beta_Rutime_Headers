/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCNonLocalVersionsSender : _BRCOperation <BRCOperationSubclass, BRNonLocalVersionSending> {
    BRCAppLibrary * _appLibrary;
    BRCXPCClient * _client;
    NSString * _currentEtag;
    bool  _includeCachedVersions;
    BRCItemID * _itemID;
    NSURL * _logicalURL;
    NSURL * _physicalURL;
    <BRNonLocalVersionReceiving> * _receiver;
    CKRecordID * _recordID;
    id /* block */  _reply;
    BRCServerZone * _serverZone;
    BRCStatInfo * _st;
    struct NSObject { Class x1; } * _storage;
    NSString * _storagePathPrefix;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeCachedVersions;
@property (nonatomic, readonly) NSURL *logicalURL;
@property (nonatomic, readonly) NSURL *physicalURL;
@property (readonly) Class superclass;

+ (id)senderWithLookup:(id)arg1 client:(id)arg2 XPCReceiver:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_depsTrackingOperation;
- (id)_fetchThumbnailOperationForVersionRecord:(id)arg1 physicalURL:(id)arg2;
- (id)_fetchVersionsOperationWithDepsOp:(id)arg1;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (bool)includeCachedVersions;
- (id)initWithDocument:(id)arg1 serverItem:(id)arg2 relpath:(id)arg3 client:(id)arg4 XPCReceiver:(id)arg5 error:(id*)arg6;
- (oneway void)invalidate;
- (void)listNonLocalVersionsWithReply:(id /* block */)arg1;
- (id)logicalURL;
- (void)main;
- (id)physicalURL;
- (void)setIncludeCachedVersions:(bool)arg1;
- (bool)shouldRetryForError:(id)arg1;

@end
