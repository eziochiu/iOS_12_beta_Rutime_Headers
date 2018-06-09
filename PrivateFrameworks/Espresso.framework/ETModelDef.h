/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface ETModelDef : NSObject {
    struct shared_ptr<Espresso::net> { 
        struct net {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _network;
}

@property struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; } network;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithNetwork:(id)arg1;
- (struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })network;
- (void)setNetwork:(struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
