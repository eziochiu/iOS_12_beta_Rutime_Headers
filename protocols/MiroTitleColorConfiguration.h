/* made by EzioChiu.
 */

@protocol MiroTitleColorConfiguration <NSObject>

@required

- (unsigned long long)backgroundShapeColorTreatment;
- (unsigned long long)subtitleColorTreatment;
- (unsigned long long)titleColorTreatment;
- (bool)titleStyleHasColorRigging;
- (bool)titleStyleHasStrap;
- (bool)titleStyleIsCentered;
- (bool)titleStyleIsLowerThird;
- (bool)titleStyleIsSideBySide;

@end
