/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKLiveRenderedShaderSet : NSObject <NSSecureCoding> {
    NSString * _fragmentEntryPointShader;
    NSString * _geometryEntryPointShader;
    NSString * _lightingModelEntryPointShader;
    NSString * _surfaceEntryPointShader;
}

@property (nonatomic, retain) NSString *fragmentEntryPointShader;
@property (nonatomic, retain) NSString *geometryEntryPointShader;
@property (nonatomic, retain) NSString *lightingModelEntryPointShader;
@property (nonatomic, retain) NSString *surfaceEntryPointShader;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fragmentEntryPointShader;
- (id)geometryEntryPointShader;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataAccessor:(id)arg1 suffix:(id)arg2;
- (id)lightingModelEntryPointShader;
- (void)setFragmentEntryPointShader:(id)arg1;
- (void)setGeometryEntryPointShader:(id)arg1;
- (void)setLightingModelEntryPointShader:(id)arg1;
- (void)setSurfaceEntryPointShader:(id)arg1;
- (id)surfaceEntryPointShader;

@end
