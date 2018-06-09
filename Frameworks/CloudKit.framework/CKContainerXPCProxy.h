/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKContainerXPCProxy : NSObject <CKXPCClient> {
    CKContainer * _container;
}

@property (nonatomic) CKContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)consumeSandboxExtensions:(id)arg1 reply:(id /* block */)arg2;
- (id)container;
- (void)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 reply:(id /* block */)arg3;
- (void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(id /* block */)arg3;
- (void)handleOperationStatistics:(id)arg1 forOperationWithID:(id)arg2;
- (id)initWithContainer:(id)arg1;
- (void)openFileWithOpenInfo:(id)arg1 reply:(id /* block */)arg2;
- (void)setContainer:(id)arg1;

@end
