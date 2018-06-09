/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CITextFeature : CIFeature {
    struct CGPoint { 
        double x; 
        double y; 
    }  bottomLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  bottomRight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  bounds;
    NSString * messageString;
    NSArray * subFeatures;
    struct CGPoint { 
        double x; 
        double y; 
    }  topLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  topRight;
}

@property (readonly) struct CGPoint { double x1; double x2; } bottomLeft;
@property (readonly) struct CGPoint { double x1; double x2; } bottomRight;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly) NSString *messageString;
@property (readonly) NSArray *subFeatures;
@property (readonly) struct CGPoint { double x1; double x2; } topLeft;
@property (readonly) struct CGPoint { double x1; double x2; } topRight;

- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 topLeft:(struct CGPoint { double x1; double x2; })arg2 topRight:(struct CGPoint { double x1; double x2; })arg3 bottomLeft:(struct CGPoint { double x1; double x2; })arg4 bottomRight:(struct CGPoint { double x1; double x2; })arg5 subFeatures:(id)arg6 messageString:(id)arg7;
- (id)messageString;
- (id)subFeatures;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;
- (id)type;

@end
