/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCThumbnailItemOperation : DOCThumbnailBaseOperation {
    DOCThumbnailFolderIcon * _folderIcon;
    FPItem * _item;
    QLTThumbnailOperation * _thumbnailOperation;
}

@property (nonatomic, readonly) DOCThumbnailFolderIcon *folderIcon;
@property (nonatomic, readonly) FPItem *item;
@property (nonatomic, readonly) QLTThumbnailOperation *thumbnailOperation;

- (void).cxx_destruct;
- (void)cancel;
- (id)folderIcon;
- (bool)generateThumbnail:(id*)arg1 representativeIcon:(bool*)arg2;
- (id)initWithItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 delegate:(id)arg5 style:(unsigned long long)arg6 isInteractive:(bool)arg7;
- (id)item;
- (id)subOperation;
- (id)thumbnailOperation;

@end
