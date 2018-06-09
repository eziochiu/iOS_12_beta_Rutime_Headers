/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceRequest : NSObject <TSPDocumentResourceFileURLProvider, TSUResourceRequest> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _accessQueue_deferredResourceAccessBlocks;
    NSMutableDictionary * _accessQueue_documentResourceLocalURLs;
    NSMutableDictionary * _accessQueue_documentResourceRemoteURLs;
    NSObject<OS_dispatch_group> * _accessQueue_downloadGroup;
    struct { 
        unsigned int isResourcesAvailable : 1; 
    }  _accessQueue_flags;
    TSPDocumentResourceCache * _documentResourceCache;
    NSSet * _documentResourceInfos;
    NSProgress * _progress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long estimatedDownloadSize;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (readonly) NSSet *tags;

- (void).cxx_destruct;
- (void)accessQueue_conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (unsigned long long)estimatedDownloadSize;
- (id)fileURLForDocumentResourceInfo:(id)arg1;
- (id)init;
- (id)initWithDocumentResourceInfos:(id)arg1 documentResourceCache:(id)arg2;
- (void)performResourceAccessAsynchronouslyUsingQueue:(id)arg1 block:(id /* block */)arg2;
- (void)performResourceAccessUsingQueue:(id)arg1 block:(id /* block */)arg2;
- (id)progress;
- (id)remoteURLForDocumentResourceInfo:(id)arg1;
- (id)tags;

@end
