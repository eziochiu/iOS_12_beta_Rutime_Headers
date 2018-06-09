/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMPDeviceMediaLibrary : VUIDeviceMediaLibrary {
    bool  _initialUpdate;
    VUIMPMediaLibrary * _mediaLibrary;
    bool  _updating;
}

@property (getter=isInitialUpdate, nonatomic) bool initialUpdate;
@property (nonatomic, retain) VUIMPMediaLibrary *mediaLibrary;
@property (getter=isUpdating, nonatomic) bool updating;

+ (bool)_isInitialUpdateInProgress;
+ (bool)_isUpdateInProgress;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void).cxx_destruct;
- (void)_handleMediaLibraryDidChangeNotification:(id)arg1;
- (void)_handleMediaLibraryIsUpdateInProgressDidChangeNotification:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoaderIdentifier;
- (void)_updateUpdatingProperties;
- (void)dealloc;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;
- (id)initWithManager:(id)arg1;
- (bool)isInitialUpdate;
- (bool)isUpdating;
- (id)mediaLibrary;
- (id)saveMediaEntity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setInitialUpdate:(bool)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setUpdating:(bool)arg1;
- (id)title;
- (void)updateProgressWithCompletionHandler:(id /* block */)arg1;

@end
