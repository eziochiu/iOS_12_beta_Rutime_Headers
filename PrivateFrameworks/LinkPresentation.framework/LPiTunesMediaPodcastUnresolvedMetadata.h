/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaPodcastUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {
    NSString * _artist;
    LPiTunesMediaAsset * _artwork;
    NSString * _name;
    NSArray * _offers;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, copy) NSString *artist;
@property (nonatomic, retain) LPiTunesMediaAsset *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSArray *offers;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artist;
- (id)artwork;
- (id)assetsToResolve;
- (id)name;
- (id)offers;
- (id)resolve;
- (void)setArtist:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;

@end
