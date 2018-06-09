/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLProxyResourceTransferTask : CPLResourceTransferTask {
    CPLProxyLibraryManager * _proxyLibraryManager;
}

@property (nonatomic, retain) CPLProxyLibraryManager *proxyLibraryManager;

- (void).cxx_destruct;
- (void)cancelTask;
- (id)proxyLibraryManager;
- (void)setProxyLibraryManager:(id)arg1;

@end
