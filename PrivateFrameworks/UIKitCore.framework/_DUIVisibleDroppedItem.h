/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _DUIVisibleDroppedItem : NSObject <NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    bool  _constrainSize;
    bool  _flipped;
    NSArray * _imageComponents;
    unsigned long long  _itemIndex;
    bool  _precisionMode;
    _DUIPreview * _preview;
    double  _rotation;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _targetVelocity;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _velocity;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) bool constrainSize;
@property (nonatomic) bool flipped;
@property (nonatomic, retain) NSArray *imageComponents;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageFrame;
@property (nonatomic) unsigned long long itemIndex;
@property (nonatomic) bool precisionMode;
@property (nonatomic, copy) _DUIPreview *preview;
@property (nonatomic) double rotation;
@property (nonatomic) struct CGVector { double x1; double x2; } targetVelocity;
@property (nonatomic) struct CGVector { double x1; double x2; } velocity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })center;
- (bool)constrainSize;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)flipped;
- (id)imageComponents;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemIndex;
- (bool)precisionMode;
- (id)preview;
- (double)rotation;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setConstrainSize:(bool)arg1;
- (void)setFlipped:(bool)arg1;
- (void)setImageComponents:(id)arg1;
- (void)setItemIndex:(unsigned long long)arg1;
- (void)setPrecisionMode:(bool)arg1;
- (void)setPreview:(id)arg1;
- (void)setRotation:(double)arg1;
- (void)setTargetVelocity:(struct CGVector { double x1; double x2; })arg1;
- (void)setVelocity:(struct CGVector { double x1; double x2; })arg1;
- (struct CGVector { double x1; double x2; })targetVelocity;
- (struct CGVector { double x1; double x2; })velocity;

@end
