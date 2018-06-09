/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRTextFeature : NSObject <NSCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomRight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    CRImage * _imageCut;
    bool  _shouldExpandToFullWidth;
    NSString * _stringValue;
    NSArray * _subFeatures;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topRight;
}

@property struct CGPoint { double x1; double x2; } bottomLeft;
@property struct CGPoint { double x1; double x2; } bottomRight;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (retain) CRImage *imageCut;
@property bool shouldExpandToFullWidth;
@property (nonatomic, retain) NSString *stringValue;
@property (retain) NSArray *subFeatures;
@property struct CGPoint { double x1; double x2; } topLeft;
@property struct CGPoint { double x1; double x2; } topRight;

+ (id)overlayFeatures:(id)arg1 onImage:(id)arg2 showSubFeatures:(bool)arg3;
+ (id)textFeatureFromCITextFeature:(id)arg1 inImage:(id)arg2;

- (void).cxx_destruct;
- (void)addKohlsDigitProjection;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)encodeWithCoder:(id)arg1;
- (id)imageCut;
- (id)initWithCCFeatureRect:(id)arg1 subFeatureRects:(id)arg2 rotatePortrait:(bool)arg3;
- (id)initWithCITextFeature:(id)arg1 inImage:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureRect:(id)arg1 subFeatureRects:(id)arg2;
- (id)initWithVNTextObsevation:(id)arg1;
- (void)setBottomLeft:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBottomRight:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageCut:(id)arg1;
- (void)setShouldExpandToFullWidth:(bool)arg1;
- (void)setStringValue:(id)arg1;
- (void)setSubFeatures:(id)arg1;
- (void)setTopLeft:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTopRight:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldExpandToFullWidth;
- (float)slopeOfSubFeatures;
- (id)stringValue;
- (id)subFeatures;
- (id)textFeatureScaledToImage:(id)arg1;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;

@end
