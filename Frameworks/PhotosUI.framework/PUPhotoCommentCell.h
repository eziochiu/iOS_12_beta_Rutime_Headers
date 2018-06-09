/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoCommentCell : UITableViewCell {
    PLCloudSharedComment * _comment;
    UILabel * _commentBylineLabel;
    UITextView * _commentContentTextView;
    UIView * _styledSeparatorView;
    bool  _usesCompactSeparators;
}

@property (nonatomic, copy) PLCloudSharedComment *comment;
@property (nonatomic, readonly, retain) UILabel *commentBylineLabel;
@property (nonatomic, readonly, retain) UITextView *commentContentTextView;
@property (nonatomic, readonly, retain) UIView *styledSeparatorView;
@property (nonatomic) bool usesCompactSeparators;

+ (id)_attributionStringForComment:(id)arg1;
+ (id)_commentStringForComment:(id)arg1;
+ (id)_synthesizedAttributedString:(id)arg1 withWordWrapping:(bool)arg2;
+ (double)heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;
+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_updateContent;
- (id)comment;
- (id)commentBylineLabel;
- (id)commentContentTextView;
- (void)delete:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setComment:(id)arg1;
- (void)setUsesCompactSeparators:(bool)arg1;
- (id)styledSeparatorView;
- (bool)usesCompactSeparators;

@end
