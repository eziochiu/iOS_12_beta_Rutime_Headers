/* made by EzioChiu.
 */

@protocol PLAssetsdServiceCreating <NSObject>

@required

- (void)getCloudInternalServiceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLAssetsdCloudInternalServiceProtocol> *, NSError *, void*
- (void)getCloudServiceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLAssetsdCloudServiceProtocol> *, NSError *, void*
- (void)getDebugServiceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLAssetsdDebugServiceProtocol> *, NSError *, void*
- (void)getDemoServiceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLAssetsdDemoServiceProtocol> *, NSError *, void*
- (void)getDiagnosticsServiceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLAssetsdDiagnosticsServiceProtocol> *, NSError *, void*
- (void)getLibraryInternalServiceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLAssetsdLibraryInternalServiceProtocol> *, NSError *, void*
- (void)getLibraryServiceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLAssetsdLibraryServiceProtocol> *, NSError *, void*
- (void)getMigrationServiceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLAssetsdMigrationServiceProtocol> *, NSError *, void*
- (void)getNotificationServiceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLAssetsdNotificationServiceProtocol> *, NSError *, void*
- (void)getResourceInternalServiceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLAssetsdResourceInternalServiceProtocol> *, NSError *, void*
- (void)getResourceServiceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLAssetsdResourceServiceProtocol> *, NSError *, void*
- (void)getResourceWriteOnlyServiceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLAssetsdResourceWriteOnlyServiceProtocol> *, NSError *, void*
- (void)getSyncServiceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLAssetsdSyncServiceProtocol> *, NSError *, void*

@end
