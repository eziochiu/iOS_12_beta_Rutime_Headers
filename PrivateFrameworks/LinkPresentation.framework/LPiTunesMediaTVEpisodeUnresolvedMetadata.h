/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaTVEpisodeUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {
    LPiTunesMediaAsset * _artwork;
    NSString * _episodeName;
    NSString * _genre;
    NSString * _seasonName;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, retain) LPiTunesMediaAsset *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *episodeName;
@property (nonatomic, copy) NSString *genre;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *seasonName;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artwork;
- (id)assetsToResolve;
- (id)episodeName;
- (id)genre;
- (id)resolve;
- (id)seasonName;
- (void)setArtwork:(id)arg1;
- (void)setEpisodeName:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setSeasonName:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;

@end
