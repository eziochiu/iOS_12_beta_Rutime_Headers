/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportOneUpTransitionView : PUImportOneUpCell <PUImportOneUpCellDisplayDelegate> {
    PUImportMediaProvider * _mediaProvider;
}

@property (nonatomic, retain) PUImportMediaProvider *mediaProvider;

- (void).cxx_destruct;
- (void)importOneUpCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (void)importOneUpCell:(id)arg1 requestedBadgeUpdateForImportItem:(id)arg2;
- (long long)importOneUpCell:(id)arg1 requestedThumbnailForImportItem:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithImportItem:(id)arg1 mediaProvider:(id)arg2;
- (id)mediaProvider;
- (void)setMediaProvider:(id)arg1;

@end
