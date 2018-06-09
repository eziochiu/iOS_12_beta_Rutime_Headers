/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKPageDot : UIImageView <NTKPageDot> {
    UIImage * _currentPageImage;
    double  _diameter;
    UIImage * _otherPageImage;
    bool  _representsCurrentPage;
}

@property (nonatomic) bool representsCurrentPage;

- (void).cxx_destruct;
- (void)_updateImage;
- (id)initWithDiameter:(double)arg1 currentPageColor:(id)arg2 otherPageColor:(id)arg3 forDevice:(id)arg4;
- (bool)representsCurrentPage;
- (void)setRepresentsCurrentPage:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
