/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLImageBlockArgument : MTLArgumentInternal {
    bool  _aliasImplicitImageBlock;
    unsigned int  _aliasImplicitImageBlockRenderTarget;
    unsigned int  _dataSize;
    unsigned long long  _kind;
    MTLStructTypeInternal * _masterStructMembers;
}

- (bool)aliasImplicitImageBlock;
- (unsigned long long)aliasImplicitImageBlockRenderTarget;
- (void)dealloc;
- (unsigned long long)imageBlockDataSize;
- (unsigned long long)imageBlockKind;
- (id)imageBlockMasterStructMembers;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(bool)arg4 index:(unsigned long long)arg5 kind:(unsigned long long)arg6 dataSize:(unsigned int)arg7 masterStructMembers:(id)arg8 aliasImplicitImageBlock:(bool)arg9 aliasImplicitImageBlockRenderTarget:(unsigned int)arg10;
- (void)setStructType:(id)arg1;

@end
