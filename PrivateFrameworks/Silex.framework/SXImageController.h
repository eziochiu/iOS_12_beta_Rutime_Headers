/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXImageController : NSObject {
    SXColumnLayout * _columnLayout;
    SXDocumentController * _documentController;
    NSDictionary * _image2ResourcesGroupedByImageIdentifier;
    NSDictionary * _imageResourcesGroupedByImageIdentifier;
    NSMutableDictionary * _optimalImageResources;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
}

@property (nonatomic, readonly) SXColumnLayout *columnLayout;
@property (nonatomic, readonly) SXDocumentController *documentController;
@property (nonatomic, readonly) NSDictionary *image2ResourcesGroupedByImageIdentifier;
@property (nonatomic, readonly) NSDictionary *imageResourcesGroupedByImageIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *optimalImageResources;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (id)Image2ResourcesForImageIdentifier:(id)arg1;
- (id)allImageResources;
- (id)columnLayout;
- (void)determineOptimalImagesForComponents:(id)arg1;
- (void)determineOptimalImagesForMetadata;
- (id)documentController;
- (id)image2ResourcesGroupedByImageIdentifier;
- (id)imageResourceForAudioComponent:(id)arg1;
- (id)imageResourceForDataTableComponent:(id)arg1;
- (id)imageResourceForGalleryItem:(id)arg1;
- (id)imageResourceForIdentifier:(id)arg1;
- (id)imageResourceForImageComponent:(id)arg1;
- (id)imageResourceForImageFill:(id)arg1;
- (id)imageResourceForImageIdentifier:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2 allowsUpscaling:(bool)arg3;
- (id)imageResourceForScalableImageComponent:(id)arg1;
- (id)imageResourceForVideoComponent:(id)arg1;
- (id)imageResourceForVideoFill:(id)arg1;
- (id)imageResourcesForComponent:(id)arg1;
- (id)imageResourcesForComponentStyle:(id)arg1;
- (id)imageResourcesForGalleryComponent:(id)arg1;
- (id)imageResourcesForImageIdentifier:(id)arg1;
- (id)imageResourcesGroupedByImageIdentifier;
- (id)initWithDocumentController:(id)arg1;
- (id)largestImageResourceForImageIdentifier:(id)arg1;
- (id)optimalImageResources;
- (void)prepareImageResources;
- (struct CGSize { double x1; double x2; })sizeConstraintForComponent:(id)arg1;
- (id)taggedEquivalentOfImageResource:(id)arg1;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
