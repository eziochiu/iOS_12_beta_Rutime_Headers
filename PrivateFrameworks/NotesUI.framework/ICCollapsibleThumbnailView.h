/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICCollapsibleThumbnailView : ICCollapsibleBaseView {
    struct UIImage { Class x1; } * _image;
    unsigned long long  _imageScaling;
    bool  _showAsMovie;
    ICImageAndMovieThumbnailView * _thumbnailView;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) bool showAsMovie;
@property (nonatomic, retain) ICImageAndMovieThumbnailView *thumbnailView;

- (void).cxx_destruct;
- (bool)accessibilityIgnoresInvertColors;
- (struct UIImage { Class x1; }*)image;
- (unsigned long long)imageScaling;
- (void)performSetup;
- (void)setImage:(struct UIImage { Class x1; }*)arg1;
- (void)setImageScaling:(unsigned long long)arg1;
- (void)setShowAsMovie:(bool)arg1;
- (void)setThumbnailView:(id)arg1;
- (bool)showAsMovie;
- (id)thumbnailView;

@end
