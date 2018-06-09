/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPNotificationHandler : NSObject {
    NSMapTable * _blockMap;
    struct atomic_flag { 
        bool _Value; 
    }  _hasWaiter;
    struct atomic_flag { 
        bool _Value; 
    }  _isFiring;
    NSString * _name;
    unsigned int  _waitTime;
}

@property (nonatomic, retain) NSMapTable *blockMap;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int waitTime;

- (void).cxx_destruct;
- (void)_clearFlags;
- (void)_executeBlocks;
- (void)addObserverBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (id)blockMap;
- (id)description;
- (void)fire;
- (id)initWithName:(id)arg1 waitTime:(unsigned int)arg2;
- (id)name;
- (void)setBlockMap:(id)arg1;
- (void)setName:(id)arg1;
- (void)setWaitTime:(unsigned int)arg1;
- (unsigned int)waitTime;

@end
