/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioGetTracksRequest : NSObject <NSCopying> {
    NSDictionary * _additionalRequestParameters;
    bool  _allowsExplicitContent;
    NSNumber * _delegatedPrivateListeningEnabled;
    ICRadioContentReference * _nowPlayingContentReference;
    NSArray * _playActivityEvents;
    ICRadioPlaybackHistory * _playbackContext;
    bool  _preservingCurrentlyPlayingItem;
    NSNumber * _privateListeningEnabled;
    long long  _reasonType;
    ICStoreRequestContext * _requestContext;
    ICRadioContentReference * _seedContentReference;
    bool  _shouldResponseContainStationMetadata;
    NSString * _stationHash;
    long long  _stationID;
    NSString * _stationStringID;
    NSURL * _stationURL;
}

@property (nonatomic, copy) NSDictionary *additionalRequestParameters;
@property (nonatomic) bool allowsExplicitContent;
@property (getter=isDelegatedPrivateListeningEnabled, nonatomic, copy) NSNumber *delegatedPrivateListeningEnabled;
@property (nonatomic, copy) ICRadioContentReference *nowPlayingContentReference;
@property (nonatomic, copy) NSArray *playActivityEvents;
@property (nonatomic, copy) ICRadioPlaybackHistory *playbackContext;
@property (getter=isPreservingCurrentlyPlayingItem, nonatomic) bool preservingCurrentlyPlayingItem;
@property (getter=isPrivateListeningEnabled, nonatomic, copy) NSNumber *privateListeningEnabled;
@property (nonatomic) long long reasonType;
@property (nonatomic, copy) ICStoreRequestContext *requestContext;
@property (nonatomic, copy) ICRadioContentReference *seedContentReference;
@property (nonatomic) bool shouldResponseContainStationMetadata;
@property (nonatomic, copy) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (nonatomic, copy) NSString *stationStringID;
@property (nonatomic, copy) NSURL *stationURL;

- (void).cxx_destruct;
- (id)additionalRequestParameters;
- (bool)allowsExplicitContent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)isDelegatedPrivateListeningEnabled;
- (bool)isPreservingCurrentlyPlayingItem;
- (id)isPrivateListeningEnabled;
- (id)nowPlayingContentReference;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (id)playActivityEvents;
- (id)playbackContext;
- (long long)reasonType;
- (id)requestContext;
- (id)seedContentReference;
- (void)setAdditionalRequestParameters:(id)arg1;
- (void)setAllowsExplicitContent:(bool)arg1;
- (void)setDelegatedPrivateListeningEnabled:(id)arg1;
- (void)setNowPlayingContentReference:(id)arg1;
- (void)setPlayActivityEvents:(id)arg1;
- (void)setPlaybackContext:(id)arg1;
- (void)setPreservingCurrentlyPlayingItem:(bool)arg1;
- (void)setPrivateListeningEnabled:(id)arg1;
- (void)setReasonType:(long long)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setSeedContentReference:(id)arg1;
- (void)setShouldResponseContainStationMetadata:(bool)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setStationStringID:(id)arg1;
- (void)setStationURL:(id)arg1;
- (bool)shouldResponseContainStationMetadata;
- (id)stationHash;
- (long long)stationID;
- (id)stationStringID;
- (id)stationURL;

@end
