/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalStrokeRenderCacheBuffer : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    PKMetalBuffer * _buffer;
    unsigned long long  _numVertices;
    unsigned long long  _offset;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) unsigned long long numVertices;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) <MTLBuffer> *vertexBuffer;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)init;
- (id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 numVertices:(unsigned long long)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)lockPurgeableResourcesAddToSet:(id)arg1;
- (unsigned long long)numVertices;
- (unsigned long long)offset;
- (id)vertexBuffer;

@end