/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDAAnchor : NSObject {
    bool  mAllowOverlap;
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
    int  mHorizontalPosition;
    int  mRelativeHorizontalPosition;
    int  mRelativeVerticalPosition;
    NSArray * mTextWrapPoints;
    int  mTextWrappingMode;
    int  mTextWrappingModeType;
    int  mVerticalPosition;
    double  mWrapDistanceBottom;
    double  mWrapDistanceLeft;
    double  mWrapDistanceRight;
    double  mWrapDistanceTop;
    long long  mZIndex;
}

@property (nonatomic) bool allowOverlap;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) int horizontalPosition;
@property (nonatomic) int relativeHorizontalPosition;
@property (nonatomic) int relativeVerticalPosition;
@property (nonatomic, retain) NSArray *textWrapPoints;
@property (nonatomic) int textWrappingMode;
@property (nonatomic) int textWrappingModeType;
@property (nonatomic) int verticalPosition;
@property (nonatomic) double wrapDistanceBottom;
@property (nonatomic) double wrapDistanceLeft;
@property (nonatomic) double wrapDistanceRight;
@property (nonatomic) double wrapDistanceTop;
@property (nonatomic) long long zIndex;

+ (id)stringForTextWrappingModeType:(int)arg1;

- (bool)allowOverlap;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (id)description;
- (int)horizontalPosition;
- (id)init;
- (int)relativeHorizontalPosition;
- (int)relativeVerticalPosition;
- (void)setAllowOverlap:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHorizontalPosition:(int)arg1;
- (void)setRelativeHorizontalPosition:(int)arg1;
- (void)setRelativeVerticalPosition:(int)arg1;
- (void)setTextWrapPoints:(id)arg1;
- (void)setTextWrappingMode:(int)arg1;
- (void)setTextWrappingModeType:(int)arg1;
- (void)setVerticalPosition:(int)arg1;
- (void)setWrapDistanceBottom:(double)arg1;
- (void)setWrapDistanceLeft:(double)arg1;
- (void)setWrapDistanceRight:(double)arg1;
- (void)setWrapDistanceTop:(double)arg1;
- (void)setZIndex:(long long)arg1;
- (id)textWrapPoints;
- (int)textWrappingMode;
- (int)textWrappingModeType;
- (int)verticalPosition;
- (double)wrapDistanceBottom;
- (double)wrapDistanceLeft;
- (double)wrapDistanceRight;
- (double)wrapDistanceTop;
- (long long)zIndex;

@end
