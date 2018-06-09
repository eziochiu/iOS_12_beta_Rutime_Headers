/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSXPCStoreConnectionInfo : NSObject {
    NSXPCStoreServerPerConnectionCache * _cache;
    NSDictionary * _entitlements;
    int  _lock;
    struct { 
        unsigned int val[8]; 
    }  _token;
    id  _userInfo;
}

- (struct { unsigned int x1[8]; })auditToken;
- (id)cache;
- (void)dealloc;
- (id)description;
- (id)entitlements;
- (id)initForToken:(struct { unsigned int x1[8]; })arg1 entitlementNames:(id)arg2 cache:(id)arg3;
- (id)persistentStoreCoordinator;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
