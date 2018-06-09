/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISReuseQueue : NSObject {
    NSMutableDictionary * __objectCreationBlocksByReuseIdentifier;
    NSMutableDictionary * __reusableObjectsByReuseIdentifier;
    id /* block */  _objectBecomeReusableHandler;
    bool  _reuseEnabled;
}

@property (nonatomic, readonly) NSMutableDictionary *_objectCreationBlocksByReuseIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_reusableObjectsByReuseIdentifier;
@property (nonatomic, copy) id /* block */ objectBecomeReusableHandler;
@property (getter=isReuseEnabled, nonatomic) bool reuseEnabled;

- (void).cxx_destruct;
- (void)_enqueueObjectForReuse:(id)arg1 withReuseIdentifier:(id)arg2;
- (id)_objectCreationBlocksByReuseIdentifier;
- (id)_reusableObjectsByReuseIdentifier;
- (id)dequeueObjectWithReuseIdentifier:(id)arg1 isReused:(bool*)arg2;
- (void)discardReusableObjects;
- (void)enqueueObjectForReuse:(id)arg1 withReuseIdentifier:(id)arg2;
- (id)init;
- (bool)isReuseEnabled;
- (id /* block */)objectBecomeReusableHandler;
- (void)registerObjectCreationBlock:(id /* block */)arg1 withReuseIdentifier:(id)arg2;
- (void)setObjectBecomeReusableHandler:(id /* block */)arg1;
- (void)setReuseEnabled:(bool)arg1;

@end
