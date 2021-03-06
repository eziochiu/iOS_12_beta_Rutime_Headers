/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRDaemonConnection : NSXPCConnection {
    bool  _isUsingTokenService;
    NSUUID * _uuid;
}

+ (id)cloudDocsAppSupportURL;
+ (id)cloudDocsCachesURL;
+ (id)defaultConnection;
+ (id)defaultConnectionIfExists;
+ (id)homeDirectoryURL;
+ (void)initialize;
+ (void)invalidateCachedURLProperties;
+ (id)mobileDocumentsURL;
+ (id)secondaryConnection;
+ (id)secondaryConnectionIfExists;
+ (id)syncedDesktopURL;
+ (id)syncedDocumentsURL;
+ (id)syncedRootURLs;
+ (id)t_connectionForUUID:(id)arg1;
+ (void)t_setDefaultConnection:(id)arg1;
+ (void)t_setMobileDocumentsURL:(id)arg1;

- (void).cxx_destruct;
- (void)_setupAndResume;
- (id)initUsingUserLocalDaemon;
- (id)initUsingUserLocalDaemonTokenService;
- (/* Warning: unhandled struct encoding: '{BRXPCSyncProxy=#@@@}' */ struct BRXPCSyncProxy { Class x1; id x2; id x3; }*)newSyncProxy;
- (/* Warning: unhandled struct encoding: '{BRXPCSyncProxy=#@@@}' */ struct BRXPCSyncProxy { Class x1; id x2; id x3; }*)newSyncTokenProxy;

@end
