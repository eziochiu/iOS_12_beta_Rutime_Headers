/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateDataSyncConditionRegion : NSObject <FCPrivateDataSyncCondition>

@property (getter=isSatisfied, nonatomic, readonly) bool satisfied;

- (bool)isSatisfied;

@end
