/* made by EzioChiu
   Image: /usr/lib/system/libdispatch.dylib
 */

@interface OS_dispatch_workloop : OS_dispatch_queue <OS_dispatch_workloop>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)load;

- (id)init;

@end
