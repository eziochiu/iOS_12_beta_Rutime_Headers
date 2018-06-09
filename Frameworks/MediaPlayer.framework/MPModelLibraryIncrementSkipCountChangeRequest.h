/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryIncrementSkipCountChangeRequest : NSObject {
    MPMediaLibrary * _mediaLibrary;
    MPModelObject * _model;
}

@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, readonly) MPModelObject *model;

- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;
- (id)mediaLibrary;
- (id)model;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setMediaLibrary:(id)arg1;

@end
