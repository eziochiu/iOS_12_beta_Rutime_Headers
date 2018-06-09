/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKFriendListCell : UITableViewCell {
    UILabel * _friendDisplayname;
    NSLayoutConstraint * _friendNameTopConstraint;
    UILabel * _friendNickname;
    UIImageView * _friendPhoto;
    NSLayoutConstraint * _friendPhotoTopConstraint;
}

@property UILabel *friendDisplayname;
@property NSLayoutConstraint *friendNameTopConstraint;
@property UILabel *friendNickname;
@property UIImageView *friendPhoto;
@property NSLayoutConstraint *friendPhotoTopConstraint;

- (void).cxx_destruct;
- (id)friendDisplayname;
- (id)friendNameTopConstraint;
- (id)friendNickname;
- (id)friendPhoto;
- (id)friendPhotoTopConstraint;
- (void)setFriendDisplayname:(id)arg1;
- (void)setFriendNameTopConstraint:(id)arg1;
- (void)setFriendNickname:(id)arg1;
- (void)setFriendPhoto:(id)arg1;
- (void)setFriendPhotoTopConstraint:(id)arg1;
- (void)setPlayer:(id)arg1;

@end
