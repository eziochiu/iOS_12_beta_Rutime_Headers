/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicCoalescingEntityValueProvider : NSObject <MusicEntityValueProviding> {
    NSSet * _additionalPropertiesToPrefetchSynchronously;
    <MusicEntityValueProviding> * _baseEntityValueProvider;
    NSDictionary * _cachedPropertyValuesLoadedAsynchronously;
    NSDictionary * _cachedPropertyValuesLoadedSynchronously;
    MusicEntityViewContentDescriptor * _contentDescriptor;
    NSSet * _propertiesToLoadAsynchronously;
    NSSet * _propertiesToPrefetchSynchronously;
}

@property (nonatomic, copy) NSSet *additionalPropertiesToPrefetchSynchronously;
@property (nonatomic, readonly) <MusicEntityValueProviding> *baseEntityValueProvider;
@property (nonatomic, readonly) MusicEntityViewContentDescriptor *contentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cachedPropertyValuesLoadedSynchronously;
- (void)_handleContentDescriptorDidInvalidateNotification:(id)arg1;
- (void)_invalidateCachedPropertyValuesLoadedAsynchronously;
- (void)_invalidateCachedPropertyValuesLoadedSynchronously;
- (void)_updatePropertiesToLoadAndPrefetch;
- (void)_updateWithBaseEntityValueProvider:(id)arg1 contentDescriptor:(id)arg2;
- (id)additionalPropertiesToPrefetchSynchronously;
- (id)baseEntityValueProvider;
- (id)contentDescriptor;
- (void)dealloc;
- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (void)reloadWithBaseEntityValueProvider:(id)arg1 contentDescriptor:(id)arg2;
- (void)reset;
- (void)setAdditionalPropertiesToPrefetchSynchronously:(id)arg1;
- (void)updateWithAsynchronouslyLoadedPropertyValues:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end
