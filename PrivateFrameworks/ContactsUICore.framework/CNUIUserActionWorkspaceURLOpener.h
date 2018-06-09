/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActionWorkspaceURLOpener : NSObject <CNUIUserActionURLOpener> {
    LSApplicationWorkspace * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) LSApplicationWorkspace *workspace;

- (void).cxx_destruct;
- (id)init;
- (id)initWithWorkspace:(id)arg1;
- (id)openURL:(id)arg1 isSensitive:(bool)arg2 withScheduler:(id)arg3;
- (id)openURL:(id)arg1 withScheduler:(id)arg2;
- (id)workspace;

@end
