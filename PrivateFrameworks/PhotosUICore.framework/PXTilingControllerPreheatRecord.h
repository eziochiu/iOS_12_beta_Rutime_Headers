/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingControllerPreheatRecord : NSObject {
    void * _context;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    <PXTilingControllerPreheatHandler> * _preheatHandler;
    NSIndexSet * _preheatedTileIndexes;
    unsigned long long  _tileGroup;
}

@property (nonatomic, readonly) void*context;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, readonly) <PXTilingControllerPreheatHandler> *preheatHandler;
@property (nonatomic, retain) NSIndexSet *preheatedTileIndexes;
@property (nonatomic) unsigned long long tileGroup;

- (void).cxx_destruct;
- (void*)context;
- (id)initWithPreheatHandler:(id)arg1 context:(void*)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)preheatHandler;
- (id)preheatedTileIndexes;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreheatedTileIndexes:(id)arg1;
- (void)setTileGroup:(unsigned long long)arg1;
- (unsigned long long)tileGroup;

@end
