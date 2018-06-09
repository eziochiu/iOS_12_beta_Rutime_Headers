/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHRecyclableObjectVendor : NSObject {
    bool  _conformsToProtocol;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _recycledObjects;
    Class  _targetClass;
    bool  _threadSafe;
}

- (void).cxx_destruct;
- (id)dequeueRecyclableObject;
- (id)initWithTargetClass:(Class)arg1 requiresThreadSafety:(bool)arg2 initialPoolSize:(long long)arg3;
- (void)recycleObject:(id)arg1;

@end
