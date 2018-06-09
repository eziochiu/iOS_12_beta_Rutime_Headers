/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStartDirectActionRequest : SAStartRequest

@property (nonatomic, copy) NSString *directAction;

+ (id)startDirectActionRequest;
+ (id)startDirectActionRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)directAction;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDirectAction:(id)arg1;

@end
