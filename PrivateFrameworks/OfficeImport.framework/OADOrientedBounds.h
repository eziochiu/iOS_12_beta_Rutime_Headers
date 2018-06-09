/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADOrientedBounds : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBounds;
    unsigned int  mFlipX;
    unsigned int  mFlipY;
    int  mModeX;
    int  mModeY;
    float  mRotation;
}

+ (bool)directionCloserToVerticalThanToHorizontal:(float)arg1;
+ (id)orientedBoundsWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)orientedBoundsWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 rotation:(float)arg2 flipX:(bool)arg3 flipY:(bool)arg4;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (struct CGSize { double x1; double x2; })boundingBoxSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)description;
- (bool)flipX;
- (bool)flipY;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 rotation:(float)arg2 flipX:(bool)arg3 flipY:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOrientedBounds:(id)arg1;
- (float)rotation;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFlipX:(bool)arg1;
- (void)setFlipY:(bool)arg1;
- (void)setOrientedBounds:(id)arg1;
- (void)setRotation:(float)arg1;
- (void)setXMode:(int)arg1;
- (void)setYMode:(int)arg1;
- (int)xMode;
- (int)yMode;

@end
