/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelObject : NSObject <NSCopying, NSSecureCoding> {
    MPIdentifierSet * _identifiers;
    bool  _isFinalized;
    MPModelObject * _originalObject;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly, copy) MPIdentifierSet *identifiers;
@property (nonatomic, readonly) struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; } libraryAddStatusObserverConfiguration;
@property (nonatomic, readonly) long long libraryRemovalSupportedOptions;
@property (nonatomic, readonly) MPIdentifierSet *originalIdentifierSet;
@property (nonatomic, readonly) NSString *syncInfoContainerIdentifier;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)_indexProperties;
+ (bool)_lookupPropertyForSelector:(SEL)arg1 result:(id /* block */)arg2;
+ (id)_modelKeyForPropertySelector:(SEL)arg1;
+ (void)initialize;
+ (void)performWithoutEnforcement:(id /* block */)arg1;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;
+ (bool)storeItemMetadataRequestNeedsPersonalizationForIdentifiers:(id)arg1;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;
+ (bool)supportsLibraryRemoval;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isModelKey:(id)arg1;
- (id)contentItemCollectionInfo;
- (id)copyWithIdentifiers:(id)arg1 block:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLoadedValueForKey:(id)arg1;
- (bool)hasLoadedValuesForPropertySet:(id)arg1;
- (id)identifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1 block:(id /* block */)arg2;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)mediaItemPropertyValues;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)originalIdentifierSet;
- (void)setValue:(id)arg1 forModelKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)storeItemMetadataRequestItemIdentifier;
- (bool)storeItemMetadataRequestNeedsPersonalization;
- (id)valueForModelKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mpc_remotePlaybackQueueRequiredProperties;
+ (id)mqf_requiredPlaybackProperties;

- (id)MPC_modelObjectWithStoreFrontLocalEquivalentModelObject:(id)arg1;
- (id)_radioStationMatchMetadata;
- (bool)_shouldMatchArtist;
- (id)mpc_protoContainerRepresentation;
- (id)mpc_protoItemRepresentation;
- (id)mpc_radioContentReference;
- (void)mqf_configurePlaybackItemMetadata:(id)arg1;
- (id)mqf_newPlaybackItemMetadata;
- (id)mqf_playbackItemMetadataModelObject;
- (id)radioStationMatchContext;

// Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync

- (id)syncInfoContainerIdentifier;

@end
