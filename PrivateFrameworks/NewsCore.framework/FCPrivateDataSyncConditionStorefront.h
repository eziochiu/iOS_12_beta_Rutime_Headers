/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateDataSyncConditionStorefront : NSObject <FCPrivateDataSyncCondition>

@property (getter=isSatisfied, nonatomic, readonly) bool satisfied;

- (bool)isSatisfied;

@end
