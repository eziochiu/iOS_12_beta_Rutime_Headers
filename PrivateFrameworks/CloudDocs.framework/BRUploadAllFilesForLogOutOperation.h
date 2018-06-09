/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting> {
    NSMutableDictionary * _errorsByContainerID;
    NSMutableArray * _hiddenContainersWithError;
    NSOperationQueue * _opQueue;
    BRGlobalProgressProxy * _progress;
    bool  _shouldKeepDataLocal;
    id /* block */  _uploadAllFilesCompletionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) BRGlobalProgressProxy *progress;
@property bool shouldKeepDataLocal;
@property (readonly) Class superclass;
@property (copy) id /* block */ uploadAllFilesCompletionBlock;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (void)evictAllFilesInGroup:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (void)main;
- (id)progress;
- (void)setProgress:(id)arg1;
- (void)setShouldKeepDataLocal:(bool)arg1;
- (void)setUploadAllFilesCompletionBlock:(id /* block */)arg1;
- (bool)shouldKeepDataLocal;
- (id /* block */)uploadAllFilesCompletionBlock;

@end
