/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTexturePool : NSObject

+ (id)pool;

- (void)add:(id)arg1;
- (struct TextureCoordinateConverter { struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_1_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_1_1_2; } x1; })coordinateConverterForTexture:(id)arg1 material:(id)arg2;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)resourceForMaterial:(id)arg1;

@end
