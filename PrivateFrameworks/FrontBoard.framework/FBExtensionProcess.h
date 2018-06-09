/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBExtensionProcess : FBProcess {
    bool  _XPCBundle;
    FBExtensionInfo * _extensionInfo;
    NSString * _hostBundleID;
    int  _hostPID;
}

@property (getter=isXPCBundle, nonatomic, readonly) bool XPCBundle;
@property (nonatomic, readonly) FBExtensionInfo *extensionInfo;
@property (nonatomic, readonly, copy) NSString *hostBundleID;
@property (nonatomic, readonly) int hostPID;
@property (nonatomic, readonly) FBProcess *hostProcess;

- (void).cxx_destruct;
- (id)extensionInfo;
- (id)hostBundleID;
- (int)hostPID;
- (id)hostProcess;
- (id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;
- (bool)isExtensionProcess;
- (bool)isXPCBundle;
- (id)succinctDescriptionBuilder;

@end
