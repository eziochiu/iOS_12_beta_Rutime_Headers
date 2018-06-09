/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDraggingImageSlotOwner : NSObject {
    _UIDragManager * _dragManager;
    NSMutableArray * _usedSlotIDs;
}

@property (nonatomic, readonly) _UIDragManager *dragManager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dragManager;
- (id)initWithDragManager:(id)arg1;
- (unsigned int)uploadImage:(struct CGImage { }*)arg1;

@end
