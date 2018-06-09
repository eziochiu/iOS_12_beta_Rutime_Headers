/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {
    struct MTLRenderPassDescriptorPrivate { 
        MTLRenderPassColorAttachmentDescriptorArrayInternal *attachments; 
        <MTLBuffer> *visibilityResultBuffer; 
        unsigned long long renderTargetWidth; 
        unsigned long long renderTargetHeight; 
        bool fineGrainedBackgroundVisibilityEnabled; 
        bool ditherEnabled; 
        bool openGLModeEnabled; 
        unsigned long long tileWidth; 
        unsigned long long tileHeight; 
        union { 
            unsigned long long defaultSampleCount; 
            unsigned long long defaultRasterSampleCount; 
        } ; 
        unsigned long long imageBlockSampleLength; 
        unsigned long long threadgroupMemoryLength; 
        struct { 
            float x; 
            float y; 
        } customSamplePositions[4]; 
        unsigned long long numCustomSamplePositions; 
    }  _private;
}

+ (id)renderPassDescriptor;

- (const struct MTLRenderPassDescriptorPrivate { id x1; unsigned long long x2; unsigned long long x3; bool x4; bool x5; bool x6; unsigned long long x7; unsigned long long x8; union { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; unsigned long long x10; unsigned long long x11; struct { float x_12_1_1; float x_12_1_2; } x12[4]; unsigned long long x13; }*)_descriptorPrivate;
- (id)colorAttachments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)defaultRasterSampleCount;
- (id)depthAttachment;
- (id)description;
- (bool)fineGrainedBackgroundVisibilityEnabled;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)getSamplePositions:(struct { float x1; float x2; }*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)hash;
- (unsigned long long)imageblockSampleLength;
- (id)init;
- (bool)isDitherEnabled;
- (bool)isEqual:(id)arg1;
- (bool)openGLModeEnabled;
- (unsigned long long)renderTargetHeight;
- (unsigned long long)renderTargetWidth;
- (void)setDefaultRasterSampleCount:(unsigned long long)arg1;
- (void)setDepthAttachment:(id)arg1;
- (void)setDitherEnabled:(bool)arg1;
- (void)setFineGrainedBackgroundVisibilityEnabled:(bool)arg1;
- (void)setImageblockSampleLength:(unsigned long long)arg1;
- (void)setOpenGLModeEnabled:(bool)arg1;
- (void)setRenderTargetHeight:(unsigned long long)arg1;
- (void)setRenderTargetWidth:(unsigned long long)arg1;
- (void)setSamplePositions:(const struct { float x1; float x2; }*)arg1 count:(unsigned long long)arg2;
- (void)setStencilAttachment:(id)arg1;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1;
- (void)setTileHeight:(unsigned long long)arg1;
- (void)setTileWidth:(unsigned long long)arg1;
- (void)setVisibilityResultBuffer:(id)arg1;
- (id)stencilAttachment;
- (unsigned long long)threadgroupMemoryLength;
- (unsigned long long)tileHeight;
- (unsigned long long)tileWidth;
- (bool)validate:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3;
- (id)visibilityResultBuffer;

@end
