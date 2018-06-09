/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUFeedHeadlineCollectionViewCell : UICollectionViewCell {
    NUViewNode * _dateLabelNode;
    NSString * _headlineIdentifier;
    NUViewNode * _publisherLogoImageViewNode;
    NUViewNode * _thumbnailImageViewNode;
    NUViewNode * _titleLabelNode;
}

@property (nonatomic, readonly) NUViewNode *dateLabelNode;
@property (nonatomic, copy) NSString *headlineIdentifier;
@property (nonatomic, readonly) NUViewNode *publisherLogoImageViewNode;
@property (nonatomic, readonly) NUViewNode *thumbnailImageViewNode;
@property (nonatomic, readonly) NUViewNode *titleLabelNode;

+ (id)dateLabelFont;
+ (id)titleLabelFont;

- (void).cxx_destruct;
- (id)dateLabelNode;
- (id)headlineIdentifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (id)publisherLogoImageViewNode;
- (void)setHeadlineIdentifier:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (id)thumbnailImageViewNode;
- (id)titleLabelNode;

@end
