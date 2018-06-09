/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKSmudgedLabel : UILabel {
    UIImage * mSmudgeImage;
}

@property (retain) UIImage *smudgeImage;

- (void)dealloc;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSmudgeImage:(id)arg1;
- (id)smudgeImage;

@end
