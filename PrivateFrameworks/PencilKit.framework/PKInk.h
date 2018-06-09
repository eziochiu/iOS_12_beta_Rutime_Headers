/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInk : NSObject <NSCopying> {
    PKInkBehavior * _behavior;
    UIColor * _color;
    NSString * _identifier;
    NSString * _variant;
    unsigned long long  _version;
    double  _weight;
}

@property (nonatomic, retain) PKInkBehavior *behavior;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *variant;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic) double weight;

+ (unsigned int)commandTypeForIdentifier:(id)arg1 wantsObjectErase:(bool)arg2;
+ (double)defaultOpacityForIdentifier:(id)arg1;
+ (double)defaultWeightForIdentifier:(id)arg1;
+ (id)identifierForCommandType:(unsigned int)arg1 wantsObjectErase:(bool)arg2;
+ (id)inkFromDictionary:(id)arg1 color:(id)arg2 identifier:(id)arg3;
+ (id)inkFromInk:(id)arg1 color:(id)arg2;
+ (id)inkFromInk:(id)arg1 withBehavior:(id)arg2;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2 variant:(id)arg3;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2 weight:(double)arg3;

- (void).cxx_destruct;
- (id)behavior;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)hashValueForFloat:(double)arg1;
- (id)identifier;
- (id)init;
- (id)initWithArchive:(const struct Ink { int (**x1)(); struct unique_ptr<drawing::Color, std::__1::default_delete<drawing::Color> > { struct __compressed_pair<drawing::Color *, std::__1::default_delete<drawing::Color> > { struct Color {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<std::__1::basic_string<char>, std::__1::default_delete<std::__1::basic_string<char> > > { struct __compressed_pair<std::__1::basic_string<char> *, std::__1::default_delete<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_1_2_1; } x_3_1_1; } x3; unsigned long long x4; struct { unsigned int x_5_1_1 : 1; } x5; }*)arg1 serializationVersion:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 behavior:(id)arg5;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 weight:(double)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualInk:(id)arg1;
- (void)saveToArchive:(struct Ink { int (**x1)(); struct unique_ptr<drawing::Color, std::__1::default_delete<drawing::Color> > { struct __compressed_pair<drawing::Color *, std::__1::default_delete<drawing::Color> > { struct Color {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<std::__1::basic_string<char>, std::__1::default_delete<std::__1::basic_string<char> > > { struct __compressed_pair<std::__1::basic_string<char> *, std::__1::default_delete<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_1_2_1; } x_3_1_1; } x3; unsigned long long x4; struct { unsigned int x_5_1_1 : 1; } x5; }*)arg1;
- (void)setBehavior:(id)arg1;
- (void)setWeight:(double)arg1;
- (id)variant;
- (unsigned long long)version;
- (double)weight;

@end
