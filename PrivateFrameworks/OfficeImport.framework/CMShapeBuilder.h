/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMShapeBuilder : NSObject {
    NSDictionary * _adjustValues;
    int  _format;
    OADOrientedBounds * _orientedBounds;
    int  _type;
}

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })canonicalBounds;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransform;
- (struct CGPath { }*)copyShapeWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (bool)isOffice12;
- (float)maxAdjustedValue;
- (void)setAdjustValues:(id)arg1;
- (void)setFileFormat:(int)arg1;
- (void)setOrientedBounds:(id)arg1;
- (void)setShapeType:(int)arg1;

@end
