/* made by EzioChiu
   Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

@interface INUIImageLoader : NSObject <INImageLoading, SFResourceLoader> {
    <INUIImageLoaderDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INUIImageLoaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long servicePriority;
@property (readonly) Class superclass;

+ (id)registeredImageLoaderWithScreenDelegate;

- (void).cxx_destruct;
- (bool)canLoadImageDataForImage:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deregisterWithIntents;
- (void)deregisterWithSearchFoundation;
- (bool)loadImage:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)loadImageDataFromImage:(id)arg1 completion:(id /* block */)arg2;
- (void)registerWithIntents;
- (void)registerWithSearchFoundation;
- (id)serviceIdentifier;
- (unsigned long long)servicePriority;
- (void)setDelegate:(id)arg1;

@end
