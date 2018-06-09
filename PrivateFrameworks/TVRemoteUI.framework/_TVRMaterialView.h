/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface _TVRMaterialView : UIView {
    double  _cornerRadius;
    MTMaterialView * _materialView;
}

+ (id)seperatorMaterialView;
+ (id)trackpadMaterialView;

- (void).cxx_destruct;
- (id)initWithDarkMaterialView;
- (id)initWithMaterialView:(id)arg1;
- (void)layoutSubviews;

@end
