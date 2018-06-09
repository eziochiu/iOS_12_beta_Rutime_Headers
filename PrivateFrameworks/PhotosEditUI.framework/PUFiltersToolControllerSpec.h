/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUFiltersToolControllerSpec : PUPhotoEditToolControllerSpec

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbnailCellSize;
@property (nonatomic, readonly) double thumbnailEdgeMaxLength;

- (void)configureThumbnailsCollectionLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })thumbnailCellSize;
- (double)thumbnailEdgeMaxLength;

@end
