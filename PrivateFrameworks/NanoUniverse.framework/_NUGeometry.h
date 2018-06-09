/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
 */

@interface _NUGeometry : NSObject {
    int  _icount;
    unsigned short * _indices;
    int  _vcount;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _vertices;
}

@property (nonatomic, readonly) int icount;
@property (nonatomic, readonly) const unsigned short*indices;
@property (nonatomic, readonly) int vcount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**vertices;

- (int)addIndices:(const unsigned short*)arg1 count:(int)arg2 vbase:(int)arg3;
- (int)addVertices:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(int)arg2;
- (void)dealloc;
- (int)icount;
- (const unsigned short*)indices;
- (int)vcount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)vertices;

@end
