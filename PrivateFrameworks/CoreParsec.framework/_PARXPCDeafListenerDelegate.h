/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _PARXPCDeafListenerDelegate : NSObject <NSXPCListenerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
