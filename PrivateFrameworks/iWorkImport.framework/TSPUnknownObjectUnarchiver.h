/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnknownObjectUnarchiver : TSPUnarchiver {
    struct shared_ptr<TSP::ArchiveInfo> { 
        struct ArchiveInfo {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _archiveInfo;
    NSObject<OS_dispatch_data> * _messagesData;
    NSString * _packageLocator;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_data> *messagesData;
@property (nonatomic, readonly) NSString *packageLocator;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<TSP::ArchiveInfo> { struct ArchiveInfo {} *x1; struct __shared_weak_count {} *x2; })archiveInfo;
- (bool)canValidateReferences;
- (id)initWithIdentifier:(long long)arg1 archiveInfo:(struct shared_ptr<TSP::ArchiveInfo> { struct ArchiveInfo {} *x1; struct __shared_weak_count {} *x2; })arg2 messagesData:(id)arg3 packageLocator:(id)arg4 objectDelegate:(id)arg5 lazyReferenceDelegate:(id)arg6 delegate:(id)arg7;
- (id)initWithMessageType:(unsigned int)arg1 message:(struct auto_ptr<google::protobuf::Message> { struct Message {} *x1; })arg2 identifier:(long long)arg3 strongReferences:(struct auto_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > { struct unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > {} *x1; })arg4 messageVersion:(unsigned long long)arg5 unknownContent:(id)arg6 objectDelegate:(id)arg7 lazyReferenceDelegate:(id)arg8 delegate:(id)arg9;
- (const struct Message { int (**x1)(); }*)message;
- (id)messagesData;
- (id)packageLocator;

@end