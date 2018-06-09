/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLTilesManagerClientInternal : NSObject {
    NSDictionary * fNotificationHandlers;
    NSObject<OS_dispatch_queue> * fQueue;
    NSObject<OS_xpc_object> * fXpcConnection;
}

@end
