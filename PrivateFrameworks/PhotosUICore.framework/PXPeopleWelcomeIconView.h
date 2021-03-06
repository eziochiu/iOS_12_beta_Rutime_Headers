/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleWelcomeIconView : UIView {
    UIImageView * _centerView;
    NSArray * _faceImages;
    UIImageView * _leftView;
    UIImageView * _rightView;
}

@property (nonatomic, retain) UIImageView *centerView;
@property (nonatomic, retain) NSArray *faceImages;
@property (nonatomic, retain) UIImageView *leftView;
@property (nonatomic, retain) UIImageView *rightView;

- (void).cxx_destruct;
- (void)_createSubviews;
- (id)centerView;
- (id)faceImages;
- (id)initWithFaceImages:(id)arg1;
- (void)layoutSubviews;
- (id)leftView;
- (id)rightView;
- (void)setCenterView:(id)arg1;
- (void)setFaceImages:(id)arg1;
- (void)setLeftView:(id)arg1;
- (void)setRightView:(id)arg1;

@end
