/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSpriteNode : SKNode <SKWarpable> {
    SKLightNode * _light;
    bool  _shouldRepeatTexture;
    struct SKCSpriteNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; } * _skcSpriteNode;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic, copy) NSDictionary *attributeValues;
@property (nonatomic) long long blendMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } centerRect;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) double colorBlendFactor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int lightingBitMask;
@property (nonatomic, retain) SKTexture *normalTexture;
@property (nonatomic) struct CGSize { double x1; double x2; } repeatTextureSize;
@property (nonatomic, retain) SKShader *shader;
@property (nonatomic) unsigned int shadowCastBitMask;
@property (nonatomic) unsigned int shadowedBitMask;
@property (nonatomic) bool shouldRepeatTexture;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) long long subdivisionLevels;
@property (readonly) Class superclass;
@property (nonatomic, retain) SKTexture *texture;
@property (nonatomic, retain) SKWarpGeometry *warpGeometry;

+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;
+ (id)spriteNodeWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)spriteNodeWithImageNamed:(id)arg1;
+ (id)spriteNodeWithImageNamed:(id)arg1 normalMapped:(bool)arg2;
+ (id)spriteNodeWithTexture:(id)arg1;
+ (id)spriteNodeWithTexture:(id)arg1 normalMap:(id)arg2;
+ (id)spriteNodeWithTexture:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_didMakeBackingNode;
- (struct SKCNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; }*)_makeBackingNode;
- (bool)_pathFromTextureToPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void***)arg1 outSize:(unsigned long long*)arg2 accuracy:(float)arg3;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (long long)blendMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centerRect;
- (id)color;
- (double)colorBlendFactor;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithImageNamed:(id)arg1;
- (id)initWithTexture:(id)arg1;
- (id)initWithTexture:(id)arg1 color:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (bool)isEqualToNode:(id)arg1;
- (unsigned int)lightingBitMask;
- (id)normalTexture;
- (bool)repeatTexture;
- (struct CGSize { double x1; double x2; })repeatTextureSize;
- (void)scaleToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBlendMode:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenterRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColor:(id)arg1;
- (void)setColorBlendFactor:(double)arg1;
- (void)setLightingBitMask:(unsigned int)arg1;
- (void)setNormalTexture:(id)arg1;
- (void)setRepeatTexture:(bool)arg1;
- (void)setRepeatTextureSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShader:(id)arg1;
- (void)setShadowCastBitMask:(unsigned int)arg1;
- (void)setShadowedBitMask:(unsigned int)arg1;
- (void)setShouldRepeatTexture:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSubdivisionLevels:(long long)arg1;
- (void)setTexture:(id)arg1;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (void)setWarpGeometry:(id)arg1;
- (id)shader;
- (unsigned int)shadowCastBitMask;
- (unsigned int)shadowedBitMask;
- (bool)shouldRepeatTexture;
- (struct CGSize { double x1; double x2; })size;
- (long long)subdivisionLevels;
- (id)texture;
- (id)valueForAttributeNamed:(id)arg1;
- (id)warpGeometry;

@end
