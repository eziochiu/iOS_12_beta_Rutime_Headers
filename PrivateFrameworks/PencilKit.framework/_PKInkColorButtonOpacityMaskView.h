/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKInkColorButtonOpacityMaskView : UIView {
    double  _opacityValue;
    UIView * _opaqueView;
    UIView * _transparentView;
}

@property (nonatomic) double opacityValue;
@property (nonatomic, retain) UIView *opaqueView;
@property (nonatomic, retain) UIView *transparentView;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (double)opacityValue;
- (id)opaqueView;
- (void)setOpacityValue:(double)arg1;
- (void)setOpaqueView:(id)arg1;
- (void)setTransparentView:(id)arg1;
- (id)transparentView;

@end
