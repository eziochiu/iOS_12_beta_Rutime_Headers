/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLTileRenderPipelineColorAttachmentDescriptorInternal : MTLTileRenderPipelineColorAttachmentDescriptor {
    struct MTLTileRenderPipelineAttachmentDescriptorPrivate { 
        union { 
            struct { 
                unsigned int pixelFormat; 
            } ; 
            struct { 
                unsigned int bits; 
            } ; 
        } ; 
    }  _private;
}

- (const struct MTLTileRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned int x_1_2_1; } x_1_1_1; struct { unsigned int x_2_2_1; } x_1_1_2; } x1; }*)_descriptorPrivate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)pixelFormat;
- (void)setPixelFormat:(unsigned long long)arg1;

@end
