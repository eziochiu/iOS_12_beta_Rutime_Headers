/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMPMediaItem : VUIMediaItem <VUIMPMediaEntityImageLoadParamsCreating> {
    NSString * _coverArtImageIdentifier;
    MPMediaItem * _mediaItem;
    NSString * _previewFrameImageIdentifier;
}

@property (nonatomic, retain) MPMediaItem *mediaItem;

- (void).cxx_destruct;
- (id)HLSColorCapability;
- (id)HLSResolution;
- (id)_valueForPropertyDescriptor:(id)arg1;
- (id)assetType;
- (id)colorCapability;
- (id)contentRating;
- (id)coverArtImageIdentifier;
- (id)credits;
- (id)extrasURL;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)initWithMediaLibrary:(id)arg1 mediaItem:(id)arg2 requestedProperties:(id)arg3;
- (id)isLocal;
- (id)isPlayable;
- (id)mediaItem;
- (id)mediaPlayerMediaItem;
- (id)playedState;
- (id)previewFrameImageIdentifier;
- (id)rentalExpirationDate;
- (id)resolution;
- (id)seasonIdentifier;
- (void)setMediaItem:(id)arg1;
- (id)showIdentifier;
- (id)studio;

@end
