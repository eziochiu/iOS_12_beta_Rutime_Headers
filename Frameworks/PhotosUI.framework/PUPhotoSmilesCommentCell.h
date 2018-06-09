/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoSmilesCommentCell : UITableViewCell {
    bool  _isVideo;
    bool  _showUserLikes;
    UILabel * _smileContentLabel;
    UIView * _styledSeparatorView;
    NSOrderedSet * _userLikes;
    bool  _usesCompactSeparators;
}

@property (nonatomic) bool isVideo;
@property (nonatomic) bool showUserLikes;
@property (nonatomic, readonly, retain) UILabel *smileContentLabel;
@property (nonatomic, readonly, retain) UIView *styledSeparatorView;
@property (nonatomic, copy) NSOrderedSet *userLikes;
@property (nonatomic) bool usesCompactSeparators;

+ (id)_attributedStringForComments:(id)arg1 color:(id)arg2 isVideo:(bool)arg3;
+ (id)_smileStringForComments:(id)arg1;
+ (double)heightOfSmileCellWithComments:(id)arg1 forWidth:(double)arg2 isVideo:(bool)arg3 forInterfaceOrientation:(long long)arg4;

- (void).cxx_destruct;
- (void)_updateContent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isVideo;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setIsVideo:(bool)arg1;
- (void)setShowUserLikes:(bool)arg1;
- (void)setUserLikes:(id)arg1;
- (void)setUsesCompactSeparators:(bool)arg1;
- (bool)showUserLikes;
- (id)smileContentLabel;
- (id)styledSeparatorView;
- (id)userLikes;
- (bool)usesCompactSeparators;

@end
