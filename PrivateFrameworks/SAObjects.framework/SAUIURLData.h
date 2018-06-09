/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIURLData : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *uri;

+ (id)uRLData;
+ (id)uRLDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)data;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setData:(id)arg1;
- (void)setUri:(id)arg1;
- (id)uri;

@end
