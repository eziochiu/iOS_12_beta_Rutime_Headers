/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryProductLockupLayout : NSObject <VUILibraryProductLockupViewLayout> {
    VUIMediaEntityType * _entityType;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) VUIMediaEntityType *entityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (double)buttonModuleTopMargin;
- (double)contentDescriptionBottomMargin;
- (id)contentDescriptionFont;
- (int)contentDescriptionNumberOfLines;
- (double)contentDescriptionTopMargin;
- (double)coverArtBottomPadding;
- (double)coverArtImageRightMargin;
- (struct CGSize { double x1; double x2; })coverArtImageSize;
- (long long)downloadButtonPosition;
- (id)entityType;
- (id)initWithLayoutType:(long long)arg1 entityType:(id)arg2;
- (long long)layoutType;
- (double)metadataTopMargin;
- (bool)shouldShowTitleLabel;
- (double)subtitleTopMargin;
- (double)titleTopMargin;
- (long long)type;

@end
