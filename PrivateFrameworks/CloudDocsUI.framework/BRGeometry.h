/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface BRGeometry : NSObject <NSCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _absoluteFrame;
    NSString * _contentDescription;
    bool  _hasAmbiguousLayout;
    bool  _isClipped;
    NSString * _name;
    NSArray * _subitems;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } absoluteFrame;
@property (nonatomic, copy) NSString *contentDescription;
@property (nonatomic) bool hasAmbiguousLayout;
@property (nonatomic) bool isClipped;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *subitems;

+ (void)initialize;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })absoluteFrame;
- (id)contentDescription;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gatherSubviews:(id)arg1;
- (bool)hasAmbiguousLayout;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 rootView:(id)arg2;
- (bool)isClipped;
- (bool)isEqualToTemplate:(id)arg1 diagnostic:(id*)arg2;
- (bool)isValidForGeometryValidation:(unsigned long long)arg1 offendingGeometry:(id*)arg2;
- (id)name;
- (id)recursiveDescription;
- (void)setAbsoluteFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentDescription:(id)arg1;
- (void)setHasAmbiguousLayout:(bool)arg1;
- (void)setIsClipped:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSubitems:(id)arg1;
- (id)subitems;

@end
