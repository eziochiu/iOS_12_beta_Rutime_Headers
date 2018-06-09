/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLImageBlockDataArgument : MTLArgumentInternal {
    bool  _aliasImplicitImageBlock;
    unsigned int  _aliasImplicitImageBlockRenderTarget;
    unsigned int  _dataSize;
    MTLStructTypeInternal * _masterStructMembers;
}

- (bool)aliasImplicitImageBlock;
- (unsigned long long)aliasImplicitImageBlockRenderTarget;
- (void)dealloc;
- (unsigned long long)imageBlockDataSize;
- (id)imageBlockMasterStructMembers;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(bool)arg4 index:(unsigned long long)arg5 dataSize:(unsigned int)arg6 masterStructMembers:(id)arg7 aliasImplicitImageBlock:(bool)arg8 aliasImplicitImageBlockRenderTarget:(unsigned int)arg9;
- (void)setStructType:(id)arg1;

@end