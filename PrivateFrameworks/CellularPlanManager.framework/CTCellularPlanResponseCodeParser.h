/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanResponseCodeParser : NSObject <CTCellularPlanValidating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)validate:(id)arg1;
+ (bool)validate:(id)arg1 parseTo:(int*)arg2 responseText:(id*)arg3 error:(id*)arg4;

@end