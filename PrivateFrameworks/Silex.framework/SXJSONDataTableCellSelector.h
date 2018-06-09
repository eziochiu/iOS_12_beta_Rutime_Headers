/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXJSONDataTableCellSelector : SXJSONDataTableSelector <SXDataTableCellSelector>

@property (nonatomic, readonly) unsigned long long columnIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptor;
@property (nonatomic, readonly) unsigned long long evenColumns;
@property (nonatomic, readonly) unsigned long long evenRows;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long oddColumns;
@property (nonatomic, readonly) unsigned long long oddRows;
@property (nonatomic, readonly) unsigned long long rowIndex;
@property (readonly) Class superclass;

- (unsigned long long)weightForSelectorKey:(id)arg1;

@end
