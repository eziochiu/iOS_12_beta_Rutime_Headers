/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoPostCommentTextEntryCell : UITableViewCell {
    PUPhotoCommentEntryView * _textEntryView;
}

@property (nonatomic, retain) PUPhotoCommentEntryView *textEntryView;

+ (double)heightForWidth:(double)arg1;
+ (void)preferredContentSizeDidChange;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setTextEntryView:(id)arg1;
- (id)textEntryView;

@end
