/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMPMediaLibrary : VUIMediaLibrary {
    unsigned long long  _connectionState;
    MPMediaLibrary * _mediaLibrary;
    NSOperationQueue * _serialOperationQueue;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
}

@property (nonatomic) unsigned long long connectionState;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, retain) NSOperationQueue *serialOperationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;

+ (unsigned long long)_connectionStateFromMPMediaLibraryStatus:(long long)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void).cxx_destruct;
- (void)_enqueueProcessingBlock:(id /* block */)arg1;
- (void)_handleMediaLibraryDidChangeNotification:(id)arg1;
- (void)_handleMediaLibraryStatusDidChangeNotification:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoaderIdentifier;
- (void)connectWithCompletionHandler:(id /* block */)arg1 progressHandler:(id /* block */)arg2;
- (unsigned long long)connectionState;
- (void)dealloc;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;
- (id)initWithMPMediaLibrary:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;
- (id)mediaLibrary;
- (id)saveMediaEntity:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serialOperationQueue;
- (id)serialProcessingDispatchQueue;
- (void)setConnectionState:(unsigned long long)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setSerialOperationQueue:(id)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;
- (id)title;

@end
