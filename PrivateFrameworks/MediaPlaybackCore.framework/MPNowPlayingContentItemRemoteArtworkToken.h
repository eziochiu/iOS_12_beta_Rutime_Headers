/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPNowPlayingContentItemRemoteArtworkToken : NSObject <MPArtworkDataSourceVisualIdenticality> {
    NSString * _artworkIdentifier;
    MPExportableArtworkProperties * _artworkProperties;
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *artworkIdentifier;
@property (nonatomic, readonly, copy) MPExportableArtworkProperties *artworkProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artworkIdentifier;
- (id)artworkProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 artworkProperties:(id)arg2 artworkIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)stringRepresentation;

@end
