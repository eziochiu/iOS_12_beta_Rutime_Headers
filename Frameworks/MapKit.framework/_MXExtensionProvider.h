/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtensionProvider : NSObject {
    _MXAssetStorage * _assetStorage;
    NSArray * _blacklistedContainingApplications;
    NSArray * _blacklistedExtensions;
    _MXExtensionDispatchCenter * _dispatchCenter;
    Class  _extensionMatchingClass;
    id  _intentNonUIMatchingContext;
    id  _intentUIMatchingContext;
    id  _matchingContext;
    _MXExtensionMatchingMerger * _merger;
    _MXExtensionServiceCenter * _serviceCenter;
}

@property (nonatomic, retain) _MXAssetStorage *assetStorage;
@property (nonatomic, retain) _MXExtensionDispatchCenter *dispatchCenter;
@property (nonatomic, retain) _MXExtensionMatchingMerger *merger;
@property (nonatomic, retain) _MXExtensionServiceCenter *serviceCenter;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (void)_beginMatchingExtensionsIfNeeded;
- (id)_currentExtensions;
- (bool)_disableExtension:(id)arg1 error:(id*)arg2;
- (bool)_enableExtension:(id)arg1 error:(id*)arg2;
- (void)_endMatchingExtensionsIfNeeded;
- (id)_extensionWithIdentifier:(id)arg1;
- (id)_extensionsByFilteringBlacklistedExtensionsFromArray:(id)arg1;
- (id)_intentClassFilter:(id)arg1;
- (void)_restartMatchingExtensionsForDefaultsChange;
- (id)addExtensionsUpdateHandler:(id /* block */)arg1;
- (id)assetStorage;
- (void)dealloc;
- (id)dispatchCenter;
- (void)imageForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)imageForKey:(id)arg1 extension:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)loadImageForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (id)merger;
- (void)removeExtensionUpdateHandler:(id)arg1;
- (id)serviceCenter;
- (void)setAssetStorage:(id)arg1;
- (void)setDispatchCenter:(id)arg1;
- (void)setMerger:(id)arg1;
- (void)setServiceCenter:(id)arg1;
- (id)siblingExtensionsWithContainingAppIdentifer:(id)arg1;

@end
