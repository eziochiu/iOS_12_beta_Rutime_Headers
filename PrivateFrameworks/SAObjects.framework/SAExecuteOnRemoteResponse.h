/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAExecuteOnRemoteResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, retain) SARemoteDevice *remoteDevice;
@property (nonatomic) bool responseFromRemote;
@property (nonatomic, retain) <SAAceCommand> *result;
@property (readonly) Class superclass;

+ (id)executeOnRemoteResponse;
+ (id)executeOnRemoteResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)remoteDevice;
- (bool)requiresResponse;
- (bool)responseFromRemote;
- (id)result;
- (void)setRemoteDevice:(id)arg1;
- (void)setResponseFromRemote:(bool)arg1;
- (void)setResult:(id)arg1;

@end
