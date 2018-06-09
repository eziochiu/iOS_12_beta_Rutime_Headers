/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

@interface LAUICheckmarkLayer : CALayer {
    bool  _covered;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _coveredTransform;
    CAGradientLayer * _maskLayer;
    UIColor * _primaryColor;
    CAShapeLayer * _shapeLayer;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _uncoveredTransform;
}

@property (nonatomic, readonly, copy) UIColor *primaryColor;
@property (nonatomic, readonly) bool revealed;

- (void).cxx_destruct;
- (void)_createMask;
- (double)_updateCovered:(bool)arg1;
- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (id)primaryColor;
- (bool)revealed;
- (double)setCovered:(bool)arg1 animated:(bool)arg2;
- (void)setPrimaryColor:(id)arg1;
- (void)setPrimaryColor:(id)arg1 animated:(bool)arg2;
- (void)setRevealed:(bool)arg1;
- (double)setRevealed:(bool)arg1 animated:(bool)arg2;

@end
