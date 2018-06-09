/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSSpec : TSKSosBase

@property (readonly) NSString *operationPropertyName;

- (id)apply:(id)arg1;
- (bool)canApplyOnObject:(id)arg1;
- (id)getUnsetSpec;
- (unsigned long long)hash;
- (id)initUnsetSpec;
- (id)initWithCurrentProperty:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUnsetSpec;
- (id)operationPropertyName;
- (id)specWithCurrentProperty:(id)arg1;

@end