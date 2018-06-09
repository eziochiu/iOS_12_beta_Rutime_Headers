/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKStickerDetailCell : UITableViewCell {
    UILabel * _senderLabel;
    NSString * _senderText;
    UILabel * _stickerPackLabel;
    NSString * _stickerPackText;
    id  _stickerPreview;
    CKAnimatedImageView * _stickerView;
    NSDate * _timestampDate;
    UIDateLabel * _timestampLabel;
    SKUIItemOfferButton * _viewButton;
}

@property (nonatomic, retain) UILabel *senderLabel;
@property (nonatomic, retain) NSString *senderText;
@property (nonatomic, retain) UILabel *stickerPackLabel;
@property (nonatomic, retain) NSString *stickerPackText;
@property (nonatomic, retain) id stickerPreview;
@property (nonatomic, retain) CKAnimatedImageView *stickerView;
@property (nonatomic, retain) NSDate *timestampDate;
@property (nonatomic, retain) UIDateLabel *timestampLabel;
@property (nonatomic, retain) SKUIItemOfferButton *viewButton;

+ (id)identifier;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)senderLabel;
- (id)senderText;
- (void)setSenderLabel:(id)arg1;
- (void)setSenderText:(id)arg1;
- (void)setStickerPackLabel:(id)arg1;
- (void)setStickerPackText:(id)arg1;
- (void)setStickerPreview:(id)arg1;
- (void)setStickerView:(id)arg1;
- (void)setTimestampDate:(id)arg1;
- (void)setTimestampLabel:(id)arg1;
- (void)setViewButton:(id)arg1;
- (id)stickerPackLabel;
- (id)stickerPackText;
- (id)stickerPreview;
- (id)stickerView;
- (id)timestampDate;
- (id)timestampLabel;
- (id)viewButton;

@end
