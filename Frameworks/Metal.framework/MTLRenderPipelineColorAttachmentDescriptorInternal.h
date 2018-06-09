/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor {
    struct MTLRenderPipelineAttachmentDescriptorPrivate { 
        union { 
            struct { 
                unsigned int blendingEnabled : 1; 
                unsigned int rgbBlendOperation : 3; 
                unsigned int alphaBlendOperation : 3; 
                unsigned int sourceRGBBlendFactor : 5; 
                unsigned int sourceAlphaBlendFactor : 5; 
                unsigned int destinationRGBBlendFactor : 5; 
                unsigned int destinationAlphaBlendFactor : 5; 
                unsigned int writeMask : 4; 
                unsigned int logicOpEnabled : 1; 
                unsigned int logicOp : 4; 
                unsigned int pixelFormat : 28; 
            } ; 
            struct { 
                unsigned long long bits; 
            } ; 
        } ; 
    }  _private;
}

- (const struct MTLRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 3; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 5; unsigned int x_1_2_5 : 5; unsigned int x_1_2_6 : 5; unsigned int x_1_2_7 : 5; unsigned int x_1_2_8 : 4; unsigned int x_1_2_9 : 1; unsigned int x_1_2_10 : 4; unsigned int x_1_2_11 : 28; } x_1_1_1; struct { unsigned long long x_2_2_1; } x_1_1_2; } x1; }*)_descriptorPrivate;
- (unsigned long long)alphaBlendOperation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)destinationAlphaBlendFactor;
- (unsigned long long)destinationRGBBlendFactor;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isBlendingEnabled;
- (bool)isEqual:(id)arg1;
- (unsigned long long)pixelFormat;
- (unsigned long long)rgbBlendOperation;
- (void)setAlphaBlendOperation:(unsigned long long)arg1;
- (void)setBlendingEnabled:(bool)arg1;
- (void)setDestinationAlphaBlendFactor:(unsigned long long)arg1;
- (void)setDestinationRGBBlendFactor:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setRgbBlendOperation:(unsigned long long)arg1;
- (void)setSourceAlphaBlendFactor:(unsigned long long)arg1;
- (void)setSourceRGBBlendFactor:(unsigned long long)arg1;
- (void)setWriteMask:(unsigned long long)arg1;
- (unsigned long long)sourceAlphaBlendFactor;
- (unsigned long long)sourceRGBBlendFactor;
- (unsigned long long)writeMask;

@end
