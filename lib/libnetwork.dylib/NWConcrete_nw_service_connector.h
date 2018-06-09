/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_service_connector : NSObject <OS_nw_service_connector> {
    NSObject<OS_nw_dictionary> * activeConnections;
    NSObject<OS_nw_dictionary> * activeOutgoingRequests;
    NSObject<OS_nw_parameters> * clientParameters;
    NSObject<OS_nw_listener> * listener;
    unsigned short  localPortHBO;
    NSObject<OS_nw_dictionary> * pendingIncomingRequests;
    id /* block */  serviceAvailableBlock;
    NSObject<OS_dispatch_queue> * serviceConnectorQueue;
    unsigned int  state;
    unsigned long long  uniqueID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end
