/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_parameters : NSObject <OS_nw_parameters> {
    char * account_id;
    NSObject<OS_xpc_object> * avoided_netagent_domains;
    NSObject<OS_xpc_object> * avoided_netagent_types;
    NSObject<OS_xpc_object> * avoided_netagent_uuids;
    NSObject<OS_nw_context> * context;
    NWConcrete_nw_protocol_stack * default_stack;
    char * e_bundle_id;
    NSObject<OS_xpc_object> * effective_proxy_settings;
    NSObject<OS_dispatch_data> * initial_data_payload;
    NSObject<OS_nw_endpoint> * local_address;
    NSObject<OS_xpc_object> * metadata;
    NSObject<OS_xpc_object> * preferred_netagent_domains;
    NSObject<OS_xpc_object> * preferred_netagent_types;
    NSObject<OS_xpc_object> * preferred_netagent_uuids;
    NSObject<OS_xpc_object> * prohibited_interface_subtypes;
    NSObject<OS_xpc_object> * prohibited_interface_types;
    NSObject<OS_xpc_object> * prohibited_interfaces;
    NSObject<OS_xpc_object> * prohibited_netagent_domains;
    NSObject<OS_xpc_object> * prohibited_netagent_types;
    NSObject<OS_xpc_object> * prohibited_netagent_uuids;
    NSObject<OS_xpc_object> * proxy_configuration;
    NSObject<OS_nw_array> * proxy_options;
    NSObject<OS_nw_interface> * required_interface;
    NSObject<OS_xpc_object> * required_netagent_domains;
    NSObject<OS_xpc_object> * required_netagent_types;
    NSObject<OS_xpc_object> * required_netagent_uuids;
    char * sanitized_url;
    NSObject<OS_nw_array> * secondary_stacks;
    NSObject<OS_xpc_object> * tls_session_id;
    NSObject<OS_nw_array> * transforms;
    char * url;
    BOOL  url_hash;
    struct { 
        unsigned char proc_uuid[16]; 
        unsigned char e_proc_uuid[16]; 
        unsigned char parent_id[16]; 
        unsigned int traffic_class; 
        int pid; 
        unsigned int uid; 
        struct { 
            unsigned int val[8]; 
        } e_audit_token; 
        int mtu_override; 
        int data_mode; 
        int required_interface_type; 
        int required_interface_subtype; 
        int ecn_mode; 
        int multipath_service; 
        int service_class; 
        int companion_preference; 
        int expired_dns_behavior; 
        unsigned int sleep_keepalive_interval; 
        unsigned char address_family; 
        unsigned int dry_run : 1; 
        unsigned int prohibit_expensive_paths : 1; 
        unsigned int prohibit_roaming : 1; 
        unsigned int no_proxy : 1; 
        unsigned int no_opaque_proxy : 1; 
        unsigned int no_transform : 1; 
        unsigned int fast_open_enabled : 1; 
        unsigned int use_long_outstanding_queries : 1; 
        unsigned int use_awdl : 1; 
        unsigned int use_p2p : 1; 
        unsigned int resolve_ptr : 1; 
        unsigned int indefinite : 1; 
        unsigned int indefinite_set : 1; 
        unsigned int reuse_local_address : 1; 
        unsigned int no_fallback : 1; 
        unsigned int multipath_fallback : 1; 
        unsigned int receive_any_interface : 1; 
        unsigned int enable_tls13 : 1; 
        unsigned int custom_protocols_only : 1; 
        unsigned int discretionary : 1; 
        unsigned int bundle_id_to_uuid_mapping_failed : 1; 
        unsigned int pid_to_uuid_mapping_failed : 1; 
        unsigned int allow_socket_access : 1; 
        unsigned int local_only : 1; 
        unsigned int server : 1; 
        unsigned int is_fallback : 1; 
        unsigned int desperate_ivan : 1; 
        unsigned int only_primary_requires_type : 1; 
        unsigned int allow_unusable_addresses : 1; 
        unsigned int prefer_no_proxy : 1; 
        unsigned int https_proxy_is_opaque : 1; 
        unsigned int https_proxy_over_tls : 1; 
        unsigned int tls_should_trust_invalid_certificates : 1; 
        unsigned int __pad_bits : 7; 
        unsigned char __pad[2]; 
    }  value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithParameters:(id)arg1 stripConnected:(bool)arg2;

@end
