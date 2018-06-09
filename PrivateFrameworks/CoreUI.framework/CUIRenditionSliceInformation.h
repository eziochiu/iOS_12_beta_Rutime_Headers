/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionSliceInformation : NSObject <NSCopying> {
    double  _boundaries;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _destinationRect;
    struct { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    long long  _renditionType;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } destinationRect;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, readonly) long long renditionType;

- (struct CGSize { double x1; double x2; })_bottomRightCapSize;
- (struct CGSize { double x1; double x2; })_topLeftCapSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })destinationRect;
- (struct { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithRenditionType:(long long)arg1 destinationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 topLeftInset:(struct CGSize { double x1; double x2; })arg3 bottomRightInset:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithSliceInformation:(id)arg1 destinationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)positionOfSliceBoundary:(unsigned long long)arg1;
- (long long)renditionType;

@end
