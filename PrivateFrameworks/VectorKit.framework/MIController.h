/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface MIController : NSObject <VKMapViewDelegate> {
    NSObject<OS_xpc_object> * _connection;
    struct DebugTree { 
        VKMapView *_mapView; 
        struct vector<std::__1::shared_ptr<md::DebugTreeNode>, std::__1::allocator<std::__1::shared_ptr<md::DebugTreeNode> > > { 
            struct shared_ptr<md::DebugTreeNode> {} *__begin_; 
            struct shared_ptr<md::DebugTreeNode> {} *__end_; 
            struct __compressed_pair<std::__1::shared_ptr<md::DebugTreeNode> *, std::__1::allocator<std::__1::shared_ptr<md::DebugTreeNode> > > { 
                struct shared_ptr<md::DebugTreeNode> {} *__value_; 
            } __end_cap_; 
        } _nodes; 
        bool _options[4]; 
    }  _debugTree;
    bool  _isActive;
    VKMapView * _mapView;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActive;
@property (readonly) Class superclass;

+ (id)sharedController;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)activateController:(id)arg1;
- (void)deactivateController;
- (void)decodeDebugTreeData:(id)arg1;
- (void)handleXPCEvent:(id)arg1;
- (id)init;
- (bool)isActive;
- (void)recievedData:(id)arg1;
- (void)sendData:(id)arg1;

@end
