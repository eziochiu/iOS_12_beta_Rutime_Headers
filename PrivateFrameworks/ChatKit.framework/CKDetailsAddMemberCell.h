/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsAddMemberCell : CKDetailsCell {
    UIImageView * _addIcon;
    UILabel * _addLabel;
}

@property (nonatomic, retain) UIImageView *addIcon;
@property (nonatomic, retain) UILabel *addLabel;

+ (Class)cellClass;
+ (double)preferredHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)addIcon;
- (id)addLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setAddIcon:(id)arg1;
- (void)setAddLabel:(id)arg1;
- (void)setEnabled:(bool)arg1;

@end
