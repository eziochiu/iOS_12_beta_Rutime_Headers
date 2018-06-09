/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBServiceFacilityServerClientHandle : BSBasicServerClient <FBSServiceFacilityClientHandle_Internal> {
    NSString * _bundleID;
    NSString * _bundlePath;
    <FBSServiceFacilityClientContext> * _context;
    bool  _extension;
    NSString * _facilityID;
    FBProcess * _process;
    BSProcessHandle * _processHandle;
    bool  _suspended;
    bool  _uiApp;
}

@property (getter=isUIApp, nonatomic) bool UIApp;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, retain) NSString *bundlePath;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (nonatomic, retain) <FBSServiceFacilityClientContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExtension, nonatomic) bool extension;
@property (nonatomic, copy) NSString *facilityID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) BSProcessHandle *processHandle;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;

- (void).cxx_destruct;
- (id)bundleID;
- (id)bundlePath;
- (id)context;
- (id)description;
- (id)facilityID;
- (id)initWithConnection:(id)arg1;
- (bool)isExtension;
- (bool)isSuspended;
- (bool)isUIApp;
- (int)pid;
- (id)processHandle;
- (void)resume;
- (void)setBundlePath:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setExtension:(bool)arg1;
- (void)setFacilityID:(id)arg1;
- (void)setUIApp:(bool)arg1;
- (void)suspend;

@end
