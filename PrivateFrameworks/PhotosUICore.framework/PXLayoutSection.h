/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLayoutSection : NSObject {
    bool  _accurate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    NSMutableDictionary * _geometriesByKind;
    NSArray * _geometryKinds;
    unsigned long long  _identifier;
    long long  _index;
}

@property (getter=isAccurate, nonatomic) bool accurate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, retain) NSArray *geometryKinds;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) long long index;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumerateGeometriesWithBlock:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)geometriesWithKind:(long long)arg1;
- (id)geometryKinds;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (long long)index;
- (id)init;
- (bool)isAccurate;
- (void)setAccurate:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGeometries:(id)arg1 withKind:(long long)arg2;
- (void)setGeometryKinds:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setIndex:(long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
