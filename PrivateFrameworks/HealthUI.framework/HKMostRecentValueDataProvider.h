/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMostRecentValueDataProvider : HKValueDataProvider

@property (nonatomic, readonly) <HKDataProviderValue> *value;

- (id)_mostRecentValueQueryWithCompletion:(id /* block */)arg1;
- (id)currentValue;
- (id)fetchOperationWithCompletion:(id /* block */)arg1;

@end
