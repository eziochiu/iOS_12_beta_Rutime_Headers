/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaEntity : NSObject <MusicEntityValueProviding, NSCopying, NSSecureCoding> {
    MIPMultiverseIdentifier * _multiverseIdentifier;
}

@property (nonatomic, readonly) MPUContentItemIdentifierCollection *MPU_contentItemIdentifierCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDownloadable;
@property (nonatomic, readonly) bool isDownloadableStoreOffer;
@property (nonatomic, readonly) bool isPurchasableStoreOffer;
@property (nonatomic, readonly) MPMediaLibrary *mediaLibrary;
@property (nonatomic, readonly) MIPMultiverseIdentifier *multiverseIdentifier;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) long long preferredStoreOfferVariant;
@property (nonatomic, readonly) MPMediaItem *representativeItem;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)canFilterByProperty:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buyOffer;
- (id)buyOfferForVariant:(long long)arg1;
- (id)cachedValueForProperty:(id)arg1 isCached:(bool*)arg2;
- (id)completionOfferForVariant:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)genericModelObjectWithRequestedProperties:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (void)invalidateCachedProperties;
- (bool)isDownloadable;
- (bool)isDownloadableStoreOffer;
- (bool)isEqual:(id)arg1;
- (bool)isPurchasableStoreOffer;
- (id)mediaLibrary;
- (id)multiverseIdentifier;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)persistentID;
- (long long)preferredStoreOfferVariant;
- (id)representativeItem;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (id)customPropertyHandlersCollection;
+ (void)registerSupportedCustomPropertiesWithHandlersCollection:(id)arg1;
+ (bool)supportsConcurrentLoadingOfEntityProperties;

- (id)_valuesForRegularEntityProperties:(id)arg1;
- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

@end
