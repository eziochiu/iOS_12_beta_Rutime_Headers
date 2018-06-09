/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKDebugTree : NSObject {
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
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)activate:(id)arg1;
- (void)deactivate;
- (bool)deserializeTree:(id)arg1;
- (id)logTree;
- (void)populateData;
- (void)printTree;
- (id)serializeTree;

@end
