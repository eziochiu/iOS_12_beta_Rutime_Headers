/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportAssetDataResponse : NSObject {
    id /* block */  _completionHandler;
    NSURL * _fileURL;
    PHImportAssetDataRequest * _request;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, retain) PHImportAssetDataRequest *request;

+ (id)responseWithDataRequest:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)fileURL;
- (id)initWithRequest:(id)arg1;
- (id)request;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setFileURL:(id)arg1;
- (void)setRequest:(id)arg1;

@end
