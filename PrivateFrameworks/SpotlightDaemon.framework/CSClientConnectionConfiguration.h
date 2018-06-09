/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface CSClientConnectionConfiguration : NSObject {
    NSString * _bundleID;
    NSObject<OS_xpc_object> * _connection;
    unsigned int  _egid;
    unsigned int  _euid;
    bool  _internal;
    bool  _isExtension;
    int  _pid;
    bool  _privateIndexNonSandboxAllowed;
    NSString * _protectionClass;
    bool  _quotaDisabled;
    bool  _searchInternal;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic, readonly) unsigned int egid;
@property (nonatomic, readonly) unsigned int euid;
@property (nonatomic, readonly) bool internal;
@property (nonatomic, readonly) bool isExtension;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) bool privateIndexNonSandboxAllowed;
@property (nonatomic, readonly) NSString *protectionClass;
@property (nonatomic, readonly) bool quotaDisabled;
@property (nonatomic, readonly) bool searchInternal;

- (void).cxx_destruct;
- (id)bundleID;
- (id)connection;
- (unsigned int)egid;
- (unsigned int)euid;
- (id)initWithConnection:(id)arg1;
- (bool)internal;
- (bool)isExtension;
- (int)pid;
- (bool)privateIndexNonSandboxAllowed;
- (id)protectionClass;
- (bool)quotaDisabled;
- (bool)searchInternal;
- (void)setConnection:(id)arg1;

@end
