/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseUnarchiver : TSPUnarchiver {
    unsigned long long  _databaseVersion;
}

@property (nonatomic, readonly) unsigned long long preUFFVersion;

- (bool)canValidateReferences;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { }*)filterIdentifiers:(const struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { }*)arg1;
- (id)initWithMessageType:(unsigned int)arg1 message:(struct auto_ptr<google::protobuf::Message> { struct Message {} *x1; })arg2 identifier:(long long)arg3 strongReferences:(struct auto_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > { struct unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > {} *x1; })arg4 databaseVersion:(unsigned long long)arg5 objectDelegate:(id)arg6 lazyReferenceDelegate:(id)arg7 delegate:(id)arg8;
- (id)initWithMessageType:(unsigned int)arg1 message:(struct auto_ptr<google::protobuf::Message> { struct Message {} *x1; })arg2 identifier:(long long)arg3 strongReferences:(struct auto_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > { struct unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > {} *x1; })arg4 messageVersion:(unsigned long long)arg5 unknownContent:(id)arg6 objectDelegate:(id)arg7 lazyReferenceDelegate:(id)arg8 delegate:(id)arg9;
- (unsigned long long)preUFFVersion;

@end
