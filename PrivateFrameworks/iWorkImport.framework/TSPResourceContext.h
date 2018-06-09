/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPResourceContext : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMapTable * _accessQueue_resourceRequestTable;
    NSHashTable * _accessQueue_resourceRequests;
    TSPDocumentResourceCache * _documentResourceCache;
    TSPDocumentResourceRegistry * _documentResourceRegistry;
    TSPDocumentResourceLegacyRegistry * _sageDocumentResourceLegacyRegistry;
    TSPDocumentResourceLegacyRegistry * _tangierDocumentResourceLegacyRegistry;
}

@property (nonatomic, readonly) TSPDocumentResourceCache *documentResourceCache;
@property (nonatomic, readonly) TSPDocumentResourceRegistry *documentResourceRegistry;
@property (readonly) NSSet *resourceRequests;
@property (nonatomic, readonly) TSPDocumentResourceLegacyRegistry *sageDocumentResourceLegacyRegistry;
@property (nonatomic, readonly) TSPDocumentResourceLegacyRegistry *tangierDocumentResourceLegacyRegistry;

- (void).cxx_destruct;
- (void)accessQueue_addResourceRequest:(id)arg1;
- (void)addResourceRequests:(id)arg1;
- (id)documentResourceCache;
- (id)documentResourceRegistry;
- (id)init;
- (id)initWithDocumentResourceCache:(id)arg1 documentResourceRegistry:(id)arg2 sageDocumentResourceLegacyRegistry:(id)arg3 tangierDocumentResourceLegacyRegistry:(id)arg4;
- (id)newDataStorageForDocumentResourceInfo:(id)arg1 createResourceRequestIfNeeded:(bool)arg2 error:(id*)arg3;
- (void)removeResourceRequests:(id)arg1;
- (id)resourceRequests;
- (id)sageDocumentResourceLegacyRegistry;
- (id)tangierDocumentResourceLegacyRegistry;

@end
