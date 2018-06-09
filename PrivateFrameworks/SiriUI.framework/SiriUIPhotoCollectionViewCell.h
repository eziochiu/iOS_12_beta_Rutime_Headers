/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIPhotoCollectionViewCell : SiriUIClearBackgroundCell {
    UIImage * _image;
    CALayer * _imageLayer;
    NSURL * _photoURL;
}

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setImage:(id)arg1;
- (void)setImageURL:(id)arg1;

@end
