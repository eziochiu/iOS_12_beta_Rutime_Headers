/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSPlugInQuery : _LSQuery

+ (id)pluginQuery;
+ (id)pluginQueryWithIdentifier:(id)arg1;
+ (id)pluginQueryWithQueryDictionary:(id)arg1 applyFilter:(id /* block */)arg2;
+ (id)pluginQueryWithURL:(id)arg1;
+ (id)pluginQueryWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (bool)_requiresDatabaseMappingEntitlement;
- (bool)_shouldCacheResolvedResults;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)sort:(bool)arg1 pluginIDs:(id)arg2 andYield:(id /* block */)arg3 context:(struct LSContext { struct LSDatabase {} *x1; }*)arg4;

@end
