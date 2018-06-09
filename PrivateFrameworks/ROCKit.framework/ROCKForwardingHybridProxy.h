/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKForwardingHybridProxy : ROCKForwardingProxy <ROCKMemoizable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithSessionManager:(id)arg1 remoteImpersonatorUUID:(id)arg2 instance:(id)arg3 protocols:(id)arg4;

@end
