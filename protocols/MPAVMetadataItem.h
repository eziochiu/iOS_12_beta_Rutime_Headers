/* made by EzioChiu.
 */

@protocol MPAVMetadataItem <NSObject>

@required

- (<MPAVItemPlaylistIdentifier> *)playlistIdentifier;
- (void)setPlaylistIdentifier:(id <MPAVItemPlaylistIdentifier>)arg1;

@end
