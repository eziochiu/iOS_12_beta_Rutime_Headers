/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_path : NSObject <OS_nw_path> {
    NSObject<OS_xpc_object> * asserted_browse_agents;
    NSObject<OS_nw_browse_descriptor> * browse_descriptor;
    unsigned int  changed_from_previous;
    unsigned int  checked_dns;
    unsigned char  client_id;
    NSObject<OS_nw_interface> * delegate;
    NSObject<OS_nw_interface> * direct;
    NSObject<OS_nw_array> * discovered_endpoints;
    NSObject<OS_xpc_object> * dns_search_domains;
    NSObject<OS_nw_array> * dns_servers;
    unsigned int  effective_mtu;
    unsigned int  effective_traffic_class;
    NSObject<OS_nw_endpoint> * endpoint;
    unsigned char  fallback_agent;
    NSObject<OS_xpc_object> * fallback_agent_domains;
    NSObject<OS_xpc_object> * fallback_agent_types;
    NSObject<OS_nw_interface> * fallback_interface;
    unsigned char  flow_registration_id;
    NSObject<OS_nw_array> * flows;
    unsigned int  has_ipv4;
    unsigned int  has_ipv6;
    unsigned int  interface_time_delta;
    unsigned int  is_direct;
    unsigned int  is_listener;
    unsigned int  is_local;
    unsigned int  link_quality_abort;
    unsigned int  necp_satisfied;
    NSObject<OS_xpc_object> * network_agent_dictionary;
    unsigned int  no_fallback_timer;
    NSObject<OS_nw_interface> * override_interface;
    NSObject<OS_nw_endpoint> * override_local_endpoint;
    unsigned int  override_viable;
    NSObject<OS_nw_parameters> * parameters;
    struct nw_path_necp_result { 
        unsigned int routing_result; 
        union { 
            unsigned int tunnel_interface_index; 
            unsigned int scoped_interface_index; 
            unsigned int flow_divert_control_unit; 
            unsigned int filter_control_unit; 
        } routing_result_parameter; 
        unsigned int filter_control_unit; 
        unsigned int service_action; 
        unsigned char service_uuid[16]; 
        struct necp_client_result_netagent {} *netagents; 
        struct necp_client_interface_option {} *interface_options; 
        unsigned int service_flags; 
        unsigned int service_data; 
        unsigned int routed_interface_index; 
        unsigned int direct_interface_index; 
        unsigned int direct_interface_generation; 
        unsigned int delegate_interface_index; 
        unsigned int delegate_interface_generation; 
        unsigned int policy_id; 
        unsigned int num_interface_options; 
        unsigned int num_netagents; 
    }  policy_result;
    unsigned int  probe_connectivity;
    NSObject<OS_xpc_object> * proxy_settings;
    int  reason;
    char * reason_description;
    unsigned char  recommended_mss;
    int  status;
    unsigned int  traffic_mgmt_background;
    unsigned int  weak_fallback;
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
