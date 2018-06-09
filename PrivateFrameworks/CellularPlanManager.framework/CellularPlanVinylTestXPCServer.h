/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CellularPlanVinylTestXPCServer : NSObject <NSXPCListenerDelegate> {
    <CellularPlanVinylTest> * fDelegate;
    NSMutableArray * fXpcConnections;
    NSXPCListener * fXpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithQueue:(struct dispatch_queue_s { }*)arg1 andDelegate:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)stop;

@end
