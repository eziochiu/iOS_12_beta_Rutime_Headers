/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncVerificationResult : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long fail;
@property (nonatomic, copy) NSArray *failedObjectIds;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic) long long total;

+ (id)verificationResult;
+ (id)verificationResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (long long)fail;
- (id)failedObjectIds;
- (id)groupIdentifier;
- (id)name;
- (void)setFail:(long long)arg1;
- (void)setFailedObjectIds:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTotal:(long long)arg1;
- (long long)total;

@end
