/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INImageServiceConnection : NSObject <INImageLoading, INImageStoring> {
    NSXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long servicePriority;
@property (readonly) Class superclass;

+ (id)sharedConnection;

- (void).cxx_destruct;
- (bool)canLoadImageDataForImage:(id)arg1;
- (bool)canStoreImage:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)loadImageData:(id)arg1 usingPortableImageLoader:(id)arg2 completion:(id /* block */)arg3;
- (id)loadImageData:(id)arg1 usingPortableImageLoader:(id)arg2 error:(id*)arg3;
- (void)loadImageDataAndSizeForImage:(id)arg1 reply:(id /* block */)arg2;
- (void)loadImageDataFromImage:(id)arg1 completion:(id /* block */)arg2;
- (void)purgeImageWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveImageWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)serviceIdentifier;
- (unsigned long long)servicePriority;
- (id)serviceProxyWithErrorHandler:(id /* block */)arg1;
- (void)storeImage:(id)arg1 completion:(id /* block */)arg2;
- (id)synchronousServiceProxyWithErrorHandler:(id /* block */)arg1;

@end
