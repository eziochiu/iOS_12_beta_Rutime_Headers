/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetExportRequest : NSObject <NSProgressReporting> {
    PHAsset * _asset;
    NSURL * _outputDirectory;
    NSProgress * _progress;
    NSDictionary * _variants;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *variants;

+ (id)assetExportLog;
+ (id)exportRequestForAsset:(id)arg1 error:(id*)arg2;
+ (id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)asset;
- (id)description;
- (void)exportWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithAsset:(id)arg1 variants:(id)arg2;
- (id)outputDirectory;
- (void)performCompletionWithFileURLs:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)progress;
- (id)variants;

@end
