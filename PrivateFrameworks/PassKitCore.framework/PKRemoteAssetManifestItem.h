/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRemoteAssetManifestItem : NSObject <NSSecureCoding> {
    NSURL * _localURL;
    NSDictionary * _manifest;
    NSURL * _passURL;
    NSURL * _remoteURL;
    NSString * _sha1Hex;
    NSNumber * _size;
}

@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, copy) NSURL *localURL;
@property (nonatomic, copy) NSDictionary *manifest;
@property (nonatomic, copy) NSURL *passURL;
@property (nonatomic, readonly) NSString *relativeLocalPath;
@property (nonatomic, copy) NSURL *remoteURL;
@property (nonatomic, copy) NSString *sha1Hex;
@property (nonatomic, copy) NSNumber *size;

+ (id)itemWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id*)arg4;
+ (id)sharedURLSession;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)downloadAssetWithCompletion:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id*)arg4;
- (bool)isZipFile;
- (unsigned long long)itemType;
- (id)localURL;
- (id)manifest;
- (id)passURL;
- (id)relativeLocalPath;
- (id)remoteURL;
- (void)setLocalURL:(id)arg1;
- (void)setManifest:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setRemoteURL:(id)arg1;
- (void)setSha1Hex:(id)arg1;
- (void)setSize:(id)arg1;
- (id)sha1Hex;
- (id)size;

@end
