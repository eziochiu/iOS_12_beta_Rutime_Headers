/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridDownloadHelpContext : NSObject {
    id /* block */  _downloadHandler;
    NSString * _gridProgressIdentifier;
    PHResourceDownloadRequest * _resourceDownloadRequest;
}

@property (nonatomic, copy) id /* block */ downloadHandler;
@property (nonatomic, retain) NSString *gridProgressIdentifier;
@property (nonatomic, retain) PHResourceDownloadRequest *resourceDownloadRequest;

- (void).cxx_destruct;
- (id /* block */)downloadHandler;
- (id)gridProgressIdentifier;
- (id)resourceDownloadRequest;
- (void)setDownloadHandler:(id /* block */)arg1;
- (void)setGridProgressIdentifier:(id)arg1;
- (void)setResourceDownloadRequest:(id)arg1;

@end
