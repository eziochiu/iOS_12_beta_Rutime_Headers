/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATMutableTaskProgress : CATTaskProgress

@property (nonatomic) long long completedUnitCount;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool isCancelable;
@property (nonatomic) bool isCanceled;
@property (nonatomic) unsigned long long phase;
@property (nonatomic, retain) id resultObject;
@property (nonatomic) long long totalUnitCount;
@property (nonatomic, retain) NSDictionary *userInfo;

- (id)initWithCoder:(id)arg1;
- (id)initWithOperationUUID:(id)arg1;
- (id)initWithOperationUUID:(id)arg1 requestClass:(Class)arg2;
- (void)setProgress:(id)arg1;
- (void)setResultObject:(id)arg1;

@end
