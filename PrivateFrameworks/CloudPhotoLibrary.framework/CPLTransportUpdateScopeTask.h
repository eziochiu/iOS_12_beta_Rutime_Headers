/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask {
    <CPLEngineTransportDeleteTransportScopeTask> * _deleteTask;
}

- (void).cxx_destruct;
- (void)cancel;
- (bool)checkScopeIsValidInTransaction:(id)arg1;
- (void)launch;
- (id)taskIdentifier;

@end
