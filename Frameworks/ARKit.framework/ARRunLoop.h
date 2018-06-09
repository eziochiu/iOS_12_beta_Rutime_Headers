/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARRunLoop : NSObject {
    bool  _cancelled;
    NSMutableArray * _earlyRunloopBlocks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSRunLoop * _runloop;
    bool  _started;
}

@property bool cancelled;

- (void).cxx_destruct;
- (void)_startThread;
- (void)cancel;
- (bool)cancelled;
- (id)initWithName:(id)arg1;
- (void)runOnRunLoop:(id /* block */)arg1;
- (void)setCancelled:(bool)arg1;
- (void)start;

@end
