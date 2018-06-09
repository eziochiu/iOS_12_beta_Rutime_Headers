/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryHasBeenPlayedChangeRequest : NSObject {
    bool  _hasBeenPlayed;
    MPMediaLibrary * _mediaLibrary;
    MPModelObject * _model;
}

@property (nonatomic) bool hasBeenPlayed;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, readonly) MPModelObject *model;

- (void).cxx_destruct;
- (bool)hasBeenPlayed;
- (id)initWithModel:(id)arg1;
- (id)mediaLibrary;
- (id)model;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setHasBeenPlayed:(bool)arg1;
- (void)setMediaLibrary:(id)arg1;

@end