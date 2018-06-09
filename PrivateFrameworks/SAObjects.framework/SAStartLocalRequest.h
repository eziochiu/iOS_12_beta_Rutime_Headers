/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStartLocalRequest : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *clientBoundCommands;

+ (id)startLocalRequest;
+ (id)startLocalRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientBoundCommands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setClientBoundCommands:(id)arg1;

@end
