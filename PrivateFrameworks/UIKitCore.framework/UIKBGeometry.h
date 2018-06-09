/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {
    bool  m_explicitlySpecified;
    struct { 
        double amount; 
        int unit; 
    }  m_h;
    bool  m_isTemplate;
    NSString * m_name;
    struct { 
        double amount; 
        int unit; 
    }  m_paddingBottom;
    struct { 
        double amount; 
        int unit; 
    }  m_paddingLeft;
    struct { 
        double amount; 
        int unit; 
    }  m_paddingRight;
    struct { 
        double amount; 
        int unit; 
    }  m_paddingTop;
    struct { 
        double amount; 
        int unit; 
    }  m_w;
    struct { 
        double amount; 
        int unit; 
    }  m_x;
    struct { 
        double amount; 
        int unit; 
    }  m_y;
}

@property (nonatomic) bool explicitlySpecified;
@property (setter=setH:, nonatomic) struct { double x1; int x2; } h;
@property (nonatomic) bool isTemplate;
@property (nonatomic, retain) NSString *name;
@property (setter=setPaddingBottom:, nonatomic) struct { double x1; int x2; } paddingBottom;
@property (setter=setPaddingLeft:, nonatomic) struct { double x1; int x2; } paddingLeft;
@property (setter=setPaddingRight:, nonatomic) struct { double x1; int x2; } paddingRight;
@property (setter=setPaddingTop:, nonatomic) struct { double x1; int x2; } paddingTop;
@property (setter=setW:, nonatomic) struct { double x1; int x2; } w;
@property (setter=setX:, nonatomic) struct { double x1; int x2; } x;
@property (setter=setY:, nonatomic) struct { double x1; int x2; } y;

+ (id)codeStringForValue:(struct { double x1; int x2; })arg1;
+ (id)geometry;
+ (id)geometryWithOriginValue:(struct { double x1; int x2; })arg1 sizeValue:(struct { double x1; int x2; })arg2;
+ (id)geometryWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (void)performOperations:(id /* block */)arg1 withScale:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)explicitlySpecified;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameWithContainingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { double x1; int x2; })h;
- (unsigned long long)hash;
- (id)init;
- (id)initTemplateWithName:(id)arg1 rect:(struct { struct { double x_1_1_1; int x_1_1_2; } x1[4]; })arg2 padding:(struct { struct { double x_1_1_1; int x_1_1_2; } x1[4]; })arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 rect:(struct { struct { double x_1_1_1; int x_1_1_2; } x1[4]; })arg2 padding:(struct { struct { double x_1_1_1; int x_1_1_2; } x1[4]; })arg3;
- (bool)isEqual:(id)arg1;
- (bool)isTemplate;
- (id)name;
- (id)overrideGeometry:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedFrameWithContainingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedFrameWithResolvedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { double x1; int x2; })paddingBottom;
- (struct { double x1; int x2; })paddingLeft;
- (struct { double x1; int x2; })paddingRight;
- (struct { double x1; int x2; })paddingTop;
- (void)setExplicitlySpecified:(bool)arg1;
- (void)setH:(struct { double x1; int x2; })arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPaddingBottom:(struct { double x1; int x2; })arg1;
- (void)setPaddingLeft:(struct { double x1; int x2; })arg1;
- (void)setPaddingRight:(struct { double x1; int x2; })arg1;
- (void)setPaddingTop:(struct { double x1; int x2; })arg1;
- (void)setW:(struct { double x1; int x2; })arg1;
- (void)setX:(struct { double x1; int x2; })arg1;
- (void)setY:(struct { double x1; int x2; })arg1;
- (id)shortDescription;
- (bool)usesAutomaticMetrics;
- (bool)usesPercentages;
- (struct { double x1; int x2; })w;
- (struct { double x1; int x2; })x;
- (struct { double x1; int x2; })y;

@end
