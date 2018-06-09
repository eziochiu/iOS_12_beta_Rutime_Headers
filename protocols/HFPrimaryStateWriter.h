/* made by EzioChiu.
 */

@protocol HFPrimaryStateWriter <NSObject, HFTogglableControlItem>

@required

- (NAFuture *)togglePrimaryState;
- (NAFuture *)writePrimaryState:(long long)arg1;

@end
