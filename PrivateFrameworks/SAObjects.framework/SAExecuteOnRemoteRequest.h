/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAExecuteOnRemoteRequest : SABaseClientBoundCommand

@property (nonatomic, retain) SARemoteDevice *remoteDevice;
@property (nonatomic) bool requiresResponseFromRemote;
@property (nonatomic, copy) NSData *serializedCommand;

+ (id)executeOnRemoteRequest;
+ (id)executeOnRemoteRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)remoteDevice;
- (bool)requiresResponse;
- (bool)requiresResponseFromRemote;
- (id)serializedCommand;
- (void)setRemoteDevice:(id)arg1;
- (void)setRequiresResponseFromRemote:(bool)arg1;
- (void)setSerializedCommand:(id)arg1;

@end
