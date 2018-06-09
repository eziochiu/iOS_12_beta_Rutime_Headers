/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSDocumentProxyBindingQuery : _LSQuery {
    LSDocumentProxy * _documentProxy;
    NSString * _handlerRank;
    unsigned char  _style;
    bool  _withTypeDeclarer;
}

@property (nonatomic, readonly, retain) LSDocumentProxy *documentProxy;
@property (nonatomic, readonly, copy) NSString *handlerRank;
@property (nonatomic, readonly) unsigned char style;
@property (nonatomic, readonly) bool withTypeDeclarer;

+ (bool)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (bool)_requiresDatabaseMappingEntitlement;
- (bool)_shouldCacheResolvedResults;
- (int)calculatePriorityForApp:(id)arg1 cloudOwner:(id)arg2 preferredHandler:(id)arg3 typeIsWildcard:(bool)arg4;
- (void)dealloc;
- (id)documentProxy;
- (void)encodeWithCoder:(id)arg1;
- (id)handlerRank;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentProxy:(id)arg1 withTypeDeclarer:(bool)arg2 style:(unsigned char)arg3 handlerRank:(id)arg4;
- (unsigned char)style;
- (bool)withTypeDeclarer;

@end
