/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface ICCameraDeviceRemovedItemsCoalescer : NSObject {
    id /* block */  _block;
    NSMutableArray * _items;
    NSDate * _lastNotify;
    NSObject<OS_dispatch_queue> * _queue;
    PHImportDeviceSource * _source;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) NSDate *lastNotify;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) PHImportDeviceSource *source;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)coalesceItems:(id)arg1;
- (id)initWithDevice:(id)arg1 block:(id /* block */)arg2;
- (id)items;
- (id)lastNotify;
- (id)queue;
- (void)setBlock:(id /* block */)arg1;
- (void)setItems:(id)arg1;
- (void)setLastNotify:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)source;
- (id)timer;

@end
