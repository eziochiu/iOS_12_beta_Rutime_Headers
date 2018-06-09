/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleConfirmationLoadingView : UIView {
    UIActivityIndicatorView * _loadingIndicator;
    unsigned long long  _loadingState;
    UIView * _loadingStatusView;
    UILabel * _noneFoundLabel;
    <PXPerson> * _person;
}

@property (nonatomic, readonly) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic) unsigned long long loadingState;
@property (nonatomic, readonly) UIView *loadingStatusView;
@property (nonatomic, readonly) UILabel *noneFoundLabel;
@property (nonatomic, readonly) <PXPerson> *person;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 person:(id)arg2 name:(id)arg3;
- (id)loadingIndicator;
- (unsigned long long)loadingState;
- (id)loadingStatusView;
- (id)noneFoundLabel;
- (id)person;
- (void)setLoadingState:(unsigned long long)arg1;

@end
