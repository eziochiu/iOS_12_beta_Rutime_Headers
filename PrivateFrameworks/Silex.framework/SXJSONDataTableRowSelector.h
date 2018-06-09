/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXJSONDataTableRowSelector : SXJSONDataTableSelector <SXDataTableRowSelector>

@property (nonatomic, readonly) unsigned long long columnIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptor;
@property (nonatomic, readonly) unsigned long long even;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long odd;
@property (nonatomic, readonly) unsigned long long rowIndex;
@property (readonly) Class superclass;

- (unsigned long long)evenWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)oddWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)weightForSelectorKey:(id)arg1;

@end
