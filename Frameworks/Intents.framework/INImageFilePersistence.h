/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INImageFilePersistence : NSObject <INImageStoring> {
    NSArray * __supportedClasses;
    INImageBundle * _imageBundle;
}

@property (setter=_setSupportedClasses:, nonatomic, copy) NSArray *_supportedClasses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long servicePriority;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setSupportedClasses:(id)arg1;
- (id)_supportedClasses;
- (bool)canStoreImage:(id)arg1;
- (id)init;
- (void)purgeImageWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveImageWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)serviceIdentifier;
- (unsigned long long)servicePriority;
- (void)storeImage:(id)arg1 completion:(id /* block */)arg2;

@end
