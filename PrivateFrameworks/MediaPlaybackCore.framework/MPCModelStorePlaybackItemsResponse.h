/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelStorePlaybackItemsResponse : MPModelResponse <MPModelResponseDetailedKeepLocalStatusRequesting, MPModelStoreEquivalencyMapping> {
    bool  _finalResponse;
    bool  _invalidForPersonalization;
    NSDate * _invalidationDate;
    NSObject<OS_dispatch_source> * _invalidationTimer;
    NSDictionary * _localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
    MPStoreLibraryPersonalizationResponse * _personalizationResponse;
}

@property (nonatomic, readonly) MPStoreLibraryPersonalizationResponse *_personalizationResponse;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinalResponse, nonatomic) bool finalResponse;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidForPersonalization, nonatomic, readonly) bool invalidForPersonalization;
@property (nonatomic, copy) NSDate *invalidationDate;
@property (nonatomic, copy) NSDictionary *localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_allowsExplicitContentDidChangeNotification:(id)arg1;
- (void)_invalidate;
- (id)_personalizationResponse;
- (void)_personalizationResponseDidInvalidateNotification:(id)arg1;
- (void)dealloc;
- (id)equivalencySourceStoreAdamIDForLocalStoreAdamID:(long long)arg1;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2;
- (id)invalidationDate;
- (bool)isFinalResponse;
- (bool)isInvalidForPersonalization;
- (id)localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(id /* block */)arg2;
- (void)setFinalResponse:(bool)arg1;
- (void)setInvalidationDate:(id)arg1;
- (void)setLocalStoreAdamIDToEquivalencySourceStoreAdamIDMap:(id)arg1;

@end
