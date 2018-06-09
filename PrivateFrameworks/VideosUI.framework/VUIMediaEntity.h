/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMediaEntity : NSObject {
    NSObject<VUIMediaEntityIdentifierInternal> * _identifierInternal;
    VUIMediaEntityKind * _kind;
    bool  _localChanges;
    VUIMediaLibrary * _mediaLibrary;
    NSSet * _requestedProperties;
}

@property (nonatomic, readonly, copy) NSNumber *HLSColorCapability;
@property (nonatomic, readonly, copy) NSNumber *HLSResolution;
@property (nonatomic, readonly, copy) NSDate *addedDate;
@property (nonatomic, readonly, copy) NSNumber *colorCapability;
@property (nonatomic, readonly, copy) NSString *contentDescription;
@property (nonatomic, readonly, copy) VUIContentRating *contentRating;
@property (nonatomic, readonly, copy) NSString *coverArtImageIdentifier;
@property (nonatomic, readonly, copy) NSString *genreTitle;
@property (nonatomic, readonly, copy) NSObject<VUIMediaEntityIdentifier> *identifier;
@property (nonatomic, copy) NSObject<VUIMediaEntityIdentifierInternal> *identifierInternal;
@property (nonatomic, readonly, copy) NSNumber *isLocal;
@property (nonatomic, readonly) VUIMediaEntityKind *kind;
@property (getter=hasLocalChanges, nonatomic, readonly) bool localChanges;
@property (nonatomic, retain) VUIMediaLibrary *mediaLibrary;
@property (nonatomic, copy) NSNumber *playedState;
@property (nonatomic, readonly, copy) NSDate *releaseDate;
@property (nonatomic, readonly, copy) NSNumber *releaseYear;
@property (nonatomic, readonly) NSSet *requestedProperties;
@property (nonatomic, readonly, copy) NSNumber *resolution;
@property (nonatomic, readonly, copy) NSNumber *seasonNumber;
@property (nonatomic, readonly, copy) NSObject<VUIMediaEntityIdentifier> *showIdentifier;
@property (nonatomic, readonly, copy) NSString *showTitle;
@property (nonatomic, readonly, copy) NSString *sortTitle;
@property (nonatomic, readonly, copy) NSNumber *storeID;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) VUIMediaEntityType *type;

- (void).cxx_destruct;
- (id)HLSColorCapability;
- (id)HLSResolution;
- (id)_defaultValueForPropertyDescriptor:(id)arg1;
- (bool)_didRequestPropertyWithKey:(id)arg1;
- (id)_propertyValueForKey:(id)arg1;
- (id)_propertyValueWithBlock:(id /* block */)arg1 forKey:(id)arg2;
- (id)_valueForPropertyDescriptor:(id)arg1;
- (id)addedDate;
- (id)assetController;
- (id)colorCapability;
- (id)contentDescription;
- (id)contentRating;
- (id)coverArtImageIdentifier;
- (id)description;
- (id)genreTitle;
- (bool)hasLocalChanges;
- (unsigned long long)hash;
- (id)identifier;
- (id)identifierInternal;
- (id)init;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)isLocal;
- (bool)isMetadataEqualToMediaEntity:(id)arg1;
- (id)kind;
- (id)mediaLibrary;
- (id)playedState;
- (void)populateMetadata;
- (id)releaseDate;
- (id)releaseYear;
- (id)requestedProperties;
- (id)resolution;
- (id)seasonNumber;
- (void)setIdentifierInternal:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setPlayedState:(id)arg1;
- (id)showIdentifier;
- (id)showTitle;
- (id)sortTitle;
- (id)storeID;
- (id)title;
- (id)type;

@end
