/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceConnectEvent : FBSWorkspaceEvent {
    FBSProcessHandle * _processHandle;
}

@property (nonatomic, readonly) FBSProcessHandle *processHandle;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (id)processHandle;

@end
