/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRemoteAssetManifest : NSObject {
    NSURL * _fileURL;
    NSURL * _passURL;
    NSMutableDictionary * _remoteAssets;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSDictionary *remoteAssets;

+ (Class)_remoteAssestManifestItemClassWithValues:(id)arg1;

- (void).cxx_destruct;
- (id)deviceSpecificAsset;
- (id)deviceSpecificAssetForScreenScale:(double)arg1 suffix:(id)arg2;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1 passURL:(id)arg2 error:(id*)arg3;
- (id)remoteAssets;

@end
