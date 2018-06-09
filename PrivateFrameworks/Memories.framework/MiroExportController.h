/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroExportController : ReaderWriterExportController {
    UIImage * _posterImage;
}

@property (nonatomic, retain) UIImage *posterImage;

- (void).cxx_destruct;
- (id)_compositionForExport;
- (void)_setupMovieController;
- (void)createMovieController;
- (id)posterImage;
- (void)setPosterImage:(id)arg1;
- (id)thumbnailImage;

@end
