/* made by EzioChiu.
 */

@protocol HFHomeStatusVisible <NSObject>

@required

- (bool)hf_hasSetVisibleInHomeStatus;
- (bool)hf_isVisibleInHomeStatus;
- (bool)hf_supportsHomeStatus;
- (NAFuture *)hf_updateIsVisibleInHomeStatus:(bool)arg1;

@end
