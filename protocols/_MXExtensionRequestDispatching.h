/* made by EzioChiu.
 */

@protocol _MXExtensionRequestDispatching <NSObject>

@required

- (void)dispatchRequest:(void *)arg1 vendor:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSObject<NSSecureCoding> *, <NSObject> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<NSSecureCoding> *, NSError *, void*

@optional

- (Protocol *)serviceProtocol;

@end
