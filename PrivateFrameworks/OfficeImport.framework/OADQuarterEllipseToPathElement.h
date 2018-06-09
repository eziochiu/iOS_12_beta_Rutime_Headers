/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADQuarterEllipseToPathElement : OADToPointPathElement {
    bool  mStartsVertical;
}

- (id)initWithToPoint:(struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })arg1 startsVertical:(bool)arg2;
- (bool)startsVertical;

@end
