/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIQRCodeFeature : CIFeature <NSCopying, NSSecureCoding> {
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
    CIQRCodeDescriptor * symbolDescriptor;
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
@property (readonly) CIQRCodeDescriptor *symbolDescriptor;
@property (readonly) struct CGPoint { double x1; double x2; } topLeft;
@property (readonly) struct CGPoint { double x1; double x2; } topRight;

+ (id)featureWithInternalRepresentation:(/* Warning: unhandled struct encoding: '{?={CGRect={CGPoint=dd}{CGSize=dd}}{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}@}' */ struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; id x6; }*)arg1;
+ (bool)supportsSecureCoding;

- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(/* Warning: unhandled struct encoding: '{?={CGRect={CGPoint=dd}{CGSize=dd}}{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}@}' */ struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; id x6; }*)arg1;
- (id)messageString;
- (id)symbolDescriptor;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;
- (id)type;

@end
