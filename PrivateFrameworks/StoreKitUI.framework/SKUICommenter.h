/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICommenter : SKUIMediaSocialAuthor {
    NSString * _attributedName;
    bool  _isAttributed;
    bool  _isMySelf;
    UIImage * _thumbnailImage;
    bool  _useImageCopy;
}

@property (nonatomic, retain) NSString *attributedName;
@property (nonatomic) bool isAttributed;
@property (nonatomic) bool isMySelf;
@property (nonatomic, copy) UIImage *thumbnailImage;
@property (nonatomic) bool useImageCopy;

- (void).cxx_destruct;
- (id)attributedName;
- (id)initWithAuthor:(id)arg1;
- (bool)isAttributed;
- (bool)isMySelf;
- (void)setAttributedName:(id)arg1;
- (void)setIsAttributed:(bool)arg1;
- (void)setIsMySelf:(bool)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setUseImageCopy:(bool)arg1;
- (id)thumbnailImage;
- (bool)useImageCopy;

@end
