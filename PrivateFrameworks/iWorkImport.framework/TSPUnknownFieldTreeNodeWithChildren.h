/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnknownFieldTreeNodeWithChildren : TSPUnknownFieldTreeNode {
    struct map<int, TSPUnknownFieldTreeNode *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, TSPUnknownFieldTreeNode *> > > { 
        struct __tree<std::__1::__value_type<int, TSPUnknownFieldTreeNode *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, TSPUnknownFieldTreeNode *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, TSPUnknownFieldTreeNode *> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, TSPUnknownFieldTreeNode *>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, TSPUnknownFieldTreeNode *>, std::__1::less<int>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _children;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addChildNode:(id)arg1 forFieldNumber:(int)arg2;
- (id)childNodeForFieldNumber:(int)arg1;
- (void)saveToArchiver:(id)arg1 message:(struct Message { int (**x1)(); }*)arg2;

@end
